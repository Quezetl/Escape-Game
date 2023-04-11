//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskFinalize.h"

#include "Core/Utils/MathUtils.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraph.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h"
#include "Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
#include "Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h"
#include "Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h"
#include "Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemapDomain.h"

#include "Containers/Queue.h"

void UGridFlowTilemapTaskFinalize::Execute(const FFlowExecutionInput& Input, const FFlowTaskExecutionSettings& InExecSettings, FFlowExecutionOutput& Output) {
    if (Input.IncomingNodeOutputs.Num() == 0) {
        Output.ErrorMessage = "Missing Input";
        Output.ExecutionResult = EFlowTaskExecutionResult::FailHalt;
        return;
    }
    if (Input.IncomingNodeOutputs.Num() > 1) {
        Output.ErrorMessage = "Only one input allowed";
        Output.ExecutionResult = EFlowTaskExecutionResult::FailHalt;
        return;
    }

    Output.State = Input.IncomingNodeOutputs[0].State->Clone();

    
    UGridFlowAbstractGraph* Graph = Output.State->GetState<UGridFlowAbstractGraph>(UFlowAbstractGraphBase::StateTypeID);
    if (!Graph) {
        Output.ErrorMessage = "Invalid Input Layout Graph";
        Output.ExecutionResult = EFlowTaskExecutionResult::FailHalt;
        return;
    }

    UGridFlowTilemap* Tilemap = Output.State->GetState<UGridFlowTilemap>(UGridFlowTilemap::StateTypeID);
    if (!Tilemap) {
        Output.ErrorMessage = "Invalid Input Tilemap";
        Output.ExecutionResult = EFlowTaskExecutionResult::FailHalt;
        return;
    }

    TMap<FVector, TArray<FFlowTilemapCell*>> FreeTilesByNode;

    for (FFlowTilemapCell& Cell : Tilemap->GetCells()) {
        if (Cell.CellType == EFlowTilemapCellType::Floor) {
            FVector NodeCoord = Cell.ChunkCoord;
            TArray<FFlowTilemapCell*>& FreeTiles = FreeTilesByNode.FindOrAdd(NodeCoord);
            if (!Cell.bHasItem) {
                FreeTiles.Add(&Cell);
            }
        }
    }

    // Filter walkable paths on the free tiles (some free tile patches may be blocked by overlays like trees/rocks, making them unreachable)
    TArray<FVector> NodeKeys;
    FreeTilesByNode.GenerateKeyArray(NodeKeys);

    for (const FVector& NodeCoord : NodeKeys) {
        TArray<FFlowTilemapCell*>& FreeTiles = FreeTilesByNode.FindOrAdd(NodeCoord);
        FreeTiles = FilterWalkablePath(FreeTiles);
    }
    
    const FRandomStream& Random = *Input.Random;
    for (const FVector& NodeCoord : NodeKeys) {
        TArray<FFlowTilemapCell*>& FreeTiles = FreeTilesByNode.FindOrAdd(NodeCoord);
        FMathUtils::Shuffle(FreeTiles, Random);
    }

    FFlowTilemapDistanceField DistanceField(Tilemap);

    // Add node items
    for (UFlowAbstractNode* Node : Graph->GraphNodes) {
        if (!Node) continue;
        
        TArray<FFlowTilemapCell*>* SearchResult = FreeTilesByNode.Find(Node->Coord);
        if (!SearchResult) continue;

        TArray<FFlowTilemapCell*>& FreeTiles = *SearchResult;

        for (const UFlowGraphItem* Item : Node->NodeItems) {
            if (FreeTiles.Num() == 0) {
                Output.ErrorMessage = "Item Placement failed. Insufficient free tiles";
                Output.ExecutionResult = EFlowTaskExecutionResult::FailRetry;
                return;
            }

            EGridFlowTilemapItemPlacementMode PlacementMode = EGridFlowTilemapItemPlacementMode::Random;
            bool bAvoidPlacingNearDoors = true;
            
            if (const UGridFlowGraphItem* GridFlowItem = Cast<UGridFlowGraphItem>(Item)) {
                PlacementMode = GridFlowItem->PlacementSettings.PlacementMode;
                bAvoidPlacingNearDoors = GridFlowItem->PlacementSettings.bAvoidPlacingNearDoors;
            }

            static constexpr int NeighborDeltas[] = {
                -1, 0,
                1, 0,
                0, -1,
                0, 1
            };

            auto QueryNeighborTiles = [Tilemap](const FFlowTilemapCell* Tile, bool& OutNearDoor, bool& OutNearEdge) {
                OutNearDoor = false;
                OutNearEdge = false;
                for (int i = 0; i < 4; i++) {
                    const int DX = NeighborDeltas[i * 2];
                    const int DY = NeighborDeltas[i * 2 + 1];
                    const FIntPoint NCoord = Tile->TileCoord + FIntPoint(DX, DY);
                    const FFlowTilemapCell* NCell = Tilemap->GetSafe(NCoord.X, NCoord.Y);
                    if (NCell) {
                        if (NCell->CellType == EFlowTilemapCellType::Door) {
                            OutNearEdge = true;
                            OutNearDoor = true;
                        }
                        else if (NCell->CellType != EFlowTilemapCellType::Floor) {
                            OutNearEdge = true;
                        }
                    }
                    else {
                        OutNearEdge = true;
                    }
                }
                    
            };
            
            FFlowTilemapCell* FreeTile = nullptr;
            if (PlacementMode == EGridFlowTilemapItemPlacementMode::NearEdges) {
                // Find the first tile that is not adjacent to a floor tile
                FFlowTilemapCell* BestEdgeTile = nullptr;
                for (FFlowTilemapCell* Tile : FreeTiles) {
                    if (!Tile) continue;

                    bool bNearEdge = false;
                    bool bNearDoor = false;
                    QueryNeighborTiles(Tile, bNearDoor, bNearEdge);

                    if (bNearEdge) {
                        BestEdgeTile = Tile;
                        if (bAvoidPlacingNearDoors && !bNearDoor) {
                            break;
                        }
                    }
                }
                
                FreeTile = BestEdgeTile ? BestEdgeTile : FreeTiles[0];
            }
            else if (PlacementMode == EGridFlowTilemapItemPlacementMode::Center) {
                FVector2D CenterCoord = FVector2D::ZeroVector;
                for (const FFlowTilemapCell* Tile : FreeTiles) {
                    CenterCoord += FVector2D(Tile->TileCoord);
                }
                CenterCoord /= FreeTiles.Num();
                
                FFlowTilemapCell* BestCenterTile = nullptr;
                float BestDistance = MAX_flt;
                for (FFlowTilemapCell* Tile : FreeTiles) {
                    const float Distance = (FVector2D(Tile->TileCoord) - CenterCoord).Size();
                    if (Distance < BestDistance) {
                        
                        bool bNearEdge = false;
                        bool bNearDoor = false;
                        QueryNeighborTiles(Tile, bNearDoor, bNearEdge);
                        
                        if (!bAvoidPlacingNearDoors || !bNearDoor) {
                            BestDistance = Distance;
                            BestCenterTile = Tile;
                        }
                    }
                }
                
                FreeTile = BestCenterTile ? BestCenterTile : FreeTiles[0];
            }
            else {
                // Fallback to Random placement
                // Since the list is shuffled, taking the first item from the list would pick a random tile
                FFlowTilemapCell* BestTile = FreeTiles[0];
                if (bAvoidPlacingNearDoors) {
                    for (FFlowTilemapCell* Tile : FreeTiles) {
                        bool bNearEdge = false;
                        bool bNearDoor = false;
                        QueryNeighborTiles(Tile, bNearDoor, bNearEdge);
                        
                        if (!bAvoidPlacingNearDoors || !bNearDoor) {
                            BestTile = Tile;
                            break;
                        }
                    }
                }
                
                FreeTile = BestTile ? BestTile : FreeTiles[0];
            }
            check(FreeTile);
            
            FreeTile->bHasItem = true;
            FreeTile->ItemId = Item->ItemId;
            FreeTiles.Remove(FreeTile);
        }
    }

    // Cache tilemap metadata for each abstract graph node
    UpdateLayoutTilemapMetadata(Graph, Tilemap);

    Output.ExecutionResult = EFlowTaskExecutionResult::Success;
}

TArray<FFlowTilemapCell*> UGridFlowTilemapTaskFinalize::FilterWalkablePath(
    const TArray<FFlowTilemapCell*>& Cells) const {
    TSet<FIntPoint> Unreachable;
    TMap<FIntPoint, FFlowTilemapCell*> CellsByCoord;

    TQueue<FFlowTilemapCell*> Queue;

    {
        for (FFlowTilemapCell* Cell : Cells) {
            CellsByCoord.Add(Cell->TileCoord, Cell);
            if (Cell->bMainPath) {
                Queue.Enqueue(Cell);
            }
            else {
                Unreachable.Add(Cell->TileCoord);
            }
        }
    }

    static const int ChildOffsets[] = {
        -1, 0,
        1, 0,
        0, -1,
        0, 1
    };

    {
        FFlowTilemapCell* Cell = nullptr;
        while (Queue.Dequeue(Cell)) {
            FIntPoint Coord = Cell->TileCoord;
            for (int i = 0; i < 4; i++) {
                int32 cx = Coord.X + ChildOffsets[i * 2 + 0];
                int32 cy = Coord.Y + ChildOffsets[i * 2 + 1];
                FIntPoint ChildCoord(cx, cy);
                if (Unreachable.Contains(ChildCoord)) {
                    bool bCanTraverse = true;
                    FFlowTilemapCell* ChildCell = CellsByCoord[ChildCoord];
                    if (ChildCell->bHasOverlay && ChildCell->Overlay.bTileBlockingOverlay) {
                        bCanTraverse = false;
                    }
                    if (bCanTraverse) {
                        Unreachable.Remove(ChildCoord);
                        Queue.Enqueue(CellsByCoord[ChildCoord]);
                    }
                }
            }
        }
    }

    // Tag the cells that are not reachable
    for (const FIntPoint& UnreachableCoord : Unreachable) {
        FFlowTilemapCell* InvalidCell = CellsByCoord[UnreachableCoord];
        InvalidCell->bUnreachable = true;
    }

    if (bDebugUnwalkableCells) {
        for (const FIntPoint& UnreachableCoord : Unreachable) {
            FFlowTilemapCell* InvalidCell = CellsByCoord[UnreachableCoord];
            InvalidCell->CustomColor = FLinearColor::Red;
            InvalidCell->bUseCustomColor = true;
        }
    }

    // Grab all the cells that are not in the unreachable list
    TArray<FFlowTilemapCell*> Result;
    for (FFlowTilemapCell* Cell : Cells) {
        if (!Unreachable.Contains(Cell->TileCoord)) {
            Result.Add(Cell);
        }
    }

    return Result;
}

void UGridFlowTilemapTaskFinalize::UpdateLayoutTilemapMetadata(UGridFlowAbstractGraph* InGraph,
                                                                UGridFlowTilemap* InTilemap) const {
    // List of tilemap coords that belong to the layout graph node coord
    TMap<FVector, TArray<FIntPoint>> TileCoordsByLayoutCoord;

    for (const FFlowTilemapCell& Cell : InTilemap->GetCells()) {
        if (Cell.CellType == EFlowTilemapCellType::Empty || Cell.CellType == EFlowTilemapCellType::Custom) {
            continue;
        }

        if (!Cell.bLayoutCell) {
            // Only consider layout cells
            continue;
        }

        TArray<FIntPoint>& NodeTiles = TileCoordsByLayoutCoord.FindOrAdd(Cell.ChunkCoord);
        NodeTiles.Add(Cell.TileCoord);
    }

    for (UFlowAbstractNode* Node : InGraph->GraphNodes) {
        if (!Node) continue;
        
        FGridFlowAbstractNodeTilemapMetadata& Metadata = Node->FindOrAddDomainData<UFANodeTilemapDomainData>()->TilemapMetadata;

        Metadata.Tiles = TileCoordsByLayoutCoord.FindOrAdd(Node->Coord);
        FIntPoint Min, Max;
        if (Metadata.Tiles.Num() > 0) {
            Min = Metadata.Tiles[0];
            Max = Metadata.Tiles[0];
            for (int i = 1; i < Metadata.Tiles.Num(); i++) {
                const FIntPoint& Tile = Metadata.Tiles[i];
                Min.X = FMath::Min(Min.X, Tile.X);
                Min.Y = FMath::Min(Min.Y, Tile.Y);

                Max.X = FMath::Max(Max.X, Tile.X);
                Max.Y = FMath::Max(Max.Y, Tile.Y);
            }
        }
        else {
            Min = FIntPoint::ZeroValue;
            Max = FIntPoint::ZeroValue;
        }

        Metadata.TileCoordStart = Min;
        Metadata.TileCoordEnd = Max;
    }
}

