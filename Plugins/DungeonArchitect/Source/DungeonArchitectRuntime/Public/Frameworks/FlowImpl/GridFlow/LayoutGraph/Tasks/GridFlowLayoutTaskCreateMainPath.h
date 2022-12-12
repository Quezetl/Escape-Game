//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h"
#include "Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
#include "GridFlowLayoutTaskCreateMainPath.generated.h"

UCLASS(Meta = (AbstractTask, Title = "Create Main Path", Tooltip = "Create a main path with spawn and goal", MenuPriority = 1100))
class DUNGEONARCHITECTRUNTIME_API UGridFlowLayoutTaskCreateMainPath : public UBaseFlowLayoutTaskCreateMainPath {
    GENERATED_BODY()
public:
    
    /**
        Enable this to override the start node position

        Variable Name: bOverrideStartGridPosition
    */
    UPROPERTY(EditAnywhere, Category = "Start Node")
    bool bOverrideStartGridPosition = false;

    /**
        Override the start node position of the path.   
        This is useful if you want static entrances to your dungeon
        This parameter requires bOverrideStartNodePosition flag to be set

        Variable Name: StartGridPosition
    */
    UPROPERTY(EditAnywhere, Category = "Start Node", Meta=(EditCondition = "bOverrideStartGridPosition"))
    FIntPoint StartGridPosition;

    /**
        The room in the tilemap generate from the start node will have it's full size
        (perturb value for this node will be disable)

        Variable Name: bFullSizeStartRoom
    */
    UPROPERTY(EditAnywhere, Category = "Start Node")
    bool bFullSizeStartRoom = false;

    /**
        The room in the tilemap generate from the goal node (last node in the path) will
        have it's full size (perturb value for this node will be disable)

        Variable Name: bFullSizeGoalRoom
    */
    UPROPERTY(EditAnywhere, Category = "Start Node")
    bool bFullSizeGoalRoom = false;

    UPROPERTY(EditAnywhere, Category = "Item Placement")
    FGridFlowTilemapItemPlacementSettings StartNodePlacement;
    
    UPROPERTY(EditAnywhere, Category = "Item Placement")
    FGridFlowTilemapItemPlacementSettings EndNodePlacement;

public:
    virtual bool GetParameter(const FString& InParameterName, FDAAttribute& OutValue) override;
    virtual bool SetParameter(const FString& InParameterName, const FDAAttribute& InValue) override;
    virtual bool SetParameterSerialized(const FString& InParameterName, const FString& InSerializedText) override;

protected:
    virtual TArray<int32> GetPossibleEntranceIndices(UFlowAbstractGraphBase* InGraph, const FRandomStream& InRandom) const override;
    virtual void FinalizePath(const FFlowAGStaticGrowthState& StaticState, FFlowAGGrowthState& State) const override;
    
    virtual TSubclassOf<UFlowGraphItem> GetEntranceItemClass() const override;
    virtual TSubclassOf<UFlowGraphItem> GetExitItemClass() const override;
    virtual void ExtendEntranceItem(UFlowGraphItem* InItem) override;
    virtual void ExtendExitItem(UFlowGraphItem* InItem) override;
};

