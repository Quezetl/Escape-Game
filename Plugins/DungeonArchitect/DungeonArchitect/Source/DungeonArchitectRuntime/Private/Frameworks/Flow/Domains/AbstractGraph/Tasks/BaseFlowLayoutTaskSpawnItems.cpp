//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h"

#include "Core/Utils/Attributes.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraph.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraphUtils.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h"
#include "Frameworks/Flow/ExecGraph/FlowExecTaskAttributeMacros.h"

void UBaseFlowLayoutTaskSpawnItems::Execute(const FFlowExecutionInput& Input, const FFlowTaskExecutionSettings& InExecSettings, FFlowExecutionOutput& Output) {
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
    UFlowAbstractGraphBase* Graph = Output.State->GetState<UFlowAbstractGraphBase>(UFlowAbstractGraphBase::StateTypeID);
    FFlowAbstractGraphQuery GraphQuery(Graph);

    struct FNodeInfo {
        FNodeInfo() {}
        FNodeInfo(const FGuid& InNodeId, float InWeight)
            : NodeId(InNodeId)
              , Weight(InWeight) {
        }

        FGuid NodeId;
        float Weight = 0;
    };

    TMap<FString, TArray<FNodeInfo>> NodesByPath;
    {
        TMap<FGuid, float> Weights = FFlowAbstractGraphUtils::CalculateNodeWeights(GraphQuery, 1);
        for (auto& WeightEntry : Weights) {
            FGuid NodeId = WeightEntry.Key;
            float Weight = WeightEntry.Value;
            UFlowAbstractNode* Node = GraphQuery.GetNode(NodeId);
            FString NodePath = Node->PathName;
            if (Node && Paths.Contains(NodePath)) {
                TArray<FNodeInfo>& PathNodeRef = NodesByPath.FindOrAdd(NodePath);
                PathNodeRef.Add(FNodeInfo(NodeId, Weight));
            }
        }

        // Sort the path list
        for (auto& Entry : NodesByPath) {
            TArray<FNodeInfo>& PathNodeRef = Entry.Value;
            PathNodeRef.Sort([&](const FNodeInfo& A, const FNodeInfo& B) -> bool {
                return A.Weight < B.Weight;
            });
        }
    }

    // Normalize the Weights
    for (auto& Entry : NodesByPath) {
        FString PathName = Entry.Key;
        TArray<FNodeInfo>& PathNodes = Entry.Value;

        if (PathName.Len() == 0) continue;

        float MinWeight = MAX_flt;
        float MaxWeight = -MAX_flt;
        for (const FNodeInfo& PathNodeInfo : PathNodes) {
            MinWeight = FMath::Min(MinWeight, PathNodeInfo.Weight);
            MaxWeight = FMath::Max(MaxWeight, PathNodeInfo.Weight);
        }

        for (FNodeInfo& PathNodeInfo : PathNodes) {
            if (FMath::Abs(MaxWeight - MinWeight) > 1e-6f) {
                PathNodeInfo.Weight = (PathNodeInfo.Weight - MinWeight) / (MaxWeight - MinWeight);
            }
            else {
                PathNodeInfo.Weight = 1.0f;
            }
        }
    }

    for (const FString& PathName : Paths) {
        if (!NodesByPath.Contains(PathName)) continue;
        TArray<FNodeInfo>& PathNodes = NodesByPath[PathName];

        for (const FNodeInfo& PathNodeInfo : PathNodes) {
            if (PathNodeInfo.Weight < MinSpawnDifficulty) continue;
            int32 SpawnCount = GetSpawnCount(PathNodeInfo.Weight, *Input.Random);
            for (int i = 0; i < SpawnCount; i++) {
                UFlowAbstractNode* PathNode = GraphQuery.GetNode(PathNodeInfo.NodeId);
                if (PathNode) {
                    UFlowGraphItem* Item = PathNode->CreateNewItem(GetItemClass());
                    Item->ItemType = ItemType;
                    Item->MarkerName = MarkerName;
                    Item->CustomInfo = CustomItemInfo;
                    ExtendItem(Item);
                }
            }
        }
    }

    // Emit debug info
    if (bDebugShowDifficulty) {
        for (const FString& PathName : Paths) {
            if (!NodesByPath.Contains(PathName)) continue;
            TArray<FNodeInfo>& PathNodes = NodesByPath[PathName];
            for (const FNodeInfo& PathNodeInfo : PathNodes) {
                UFlowAbstractNode* PathNode = GraphQuery.GetNode(PathNodeInfo.NodeId);
                if (PathNode) {
                    UFlowGraphItem* DebugItem = PathNode->CreateNewItem(UFlowGraphItem::StaticClass());
                    DebugItem->ItemType = EFlowGraphItemType::Custom;
                    DebugItem->CustomInfo.PreviewText = FString::Printf(TEXT("%0.1f"), PathNodeInfo.Weight);
                    DebugItem->CustomInfo.PreviewBackgroundColor = FLinearColor::Black;
                    DebugItem->CustomInfo.PreviewTextColor = FLinearColor::White;
                    DebugItem->CustomInfo.FontScale = 0.75f;
                }
            }
        }
    }

    Output.ExecutionResult = EFlowTaskExecutionResult::Success;
}

int32 UBaseFlowLayoutTaskSpawnItems::GetSpawnCount(float Weight, const FRandomStream& Random) {
    float Probability = FMath::Clamp(SpawnProbability, 0.0f, 1.0f);
    if (Random.FRand() > Probability) {
        return 0;
    }

    int32 SpawnCount = 0;
    if (SpawnMethod == EridFlowTask_SpawnItemsMethod::RandomRange) {
        SpawnCount = Random.RandRange(MinCount, MaxCount);
    }
    else if (SpawnMethod == EridFlowTask_SpawnItemsMethod::LinearDifficulty) {
        const float Variance = Random.FRandRange(-SpawnDistributionVariance, SpawnDistributionVariance);
        const float AdjustedWeight = FMath::Clamp(Weight + Variance, 0.0f, 1.0f);
        const float SpawnCountF = MinCount + (MaxCount - MinCount) * Weight;
        SpawnCount = FMath::RoundToInt(SpawnCountF);
    }

    return SpawnCount;
}

bool UBaseFlowLayoutTaskSpawnItems::GetParameter(const FString& InParameterName, FDAAttribute& OutValue) {
    FLOWTASKATTR_GET_STRINGARRAY(Paths);
    FLOWTASKATTR_GET_STRING(MarkerName);
    FLOWTASKATTR_GET_INT(MinCount);
    FLOWTASKATTR_GET_INT(MaxCount);
    FLOWTASKATTR_GET_FLOAT(SpawnDistributionVariance);
    FLOWTASKATTR_GET_FLOAT(MinSpawnDifficulty);
    FLOWTASKATTR_GET_FLOAT(SpawnProbability);

    return false;
}

bool UBaseFlowLayoutTaskSpawnItems::SetParameter(const FString& InParameterName, const FDAAttribute& InValue) {
    FLOWTASKATTR_SET_STRINGARRAY(Paths);
    FLOWTASKATTR_SET_STRING(MarkerName);
    FLOWTASKATTR_SET_INT(MinCount);
    FLOWTASKATTR_SET_INT(MaxCount);
    FLOWTASKATTR_SET_FLOAT(SpawnDistributionVariance);
    FLOWTASKATTR_SET_FLOAT(MinSpawnDifficulty);
    FLOWTASKATTR_SET_FLOAT(SpawnProbability);

    return false;
}

bool UBaseFlowLayoutTaskSpawnItems::SetParameterSerialized(const FString& InParameterName,
                                                              const FString& InSerializedText) {
    FLOWTASKATTR_SET_PARSE_STRINGARRAY(Paths);
    FLOWTASKATTR_SET_PARSE_STRING(MarkerName);
    FLOWTASKATTR_SET_PARSE_INT(MinCount);
    FLOWTASKATTR_SET_PARSE_INT(MaxCount);
    FLOWTASKATTR_SET_PARSE_FLOAT(SpawnDistributionVariance);
    FLOWTASKATTR_SET_PARSE_FLOAT(MinSpawnDifficulty);
    FLOWTASKATTR_SET_PARSE_FLOAT(SpawnProbability);

    return false;
}

TSubclassOf<UFlowGraphItem> UBaseFlowLayoutTaskSpawnItems::GetItemClass() const {
    return UFlowGraphItem::StaticClass();
}

