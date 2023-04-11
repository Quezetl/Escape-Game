//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h"

#include "Core/Utils/Attributes.h"
#include "Core/Utils/MathUtils.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraph.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractGraphQuery.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Core/FlowAbstractNode.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Tasks/Lib/FlowAbstractGraphPathUtils.h"
#include "Frameworks/Flow/ExecGraph/FlowExecTaskAttributeMacros.h"
#include "Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h"

void UBaseFlowLayoutTaskCreateMainPath::Execute(const FFlowExecutionInput& Input, const FFlowTaskExecutionSettings& InExecSettings, FFlowExecutionOutput& Output) {
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
    if (PathSize <= 0) {
        Output.ErrorMessage = "Invalid Path Size";
        Output.ExecutionResult = EFlowTaskExecutionResult::FailHalt;
        return;
    }


    Output.State = Input.IncomingNodeOutputs[0].State->Clone();
    UFlowAbstractGraphBase* Graph = Output.State->GetState<UFlowAbstractGraphBase>(UFlowAbstractGraphBase::StateTypeID);
    IFlowAGNodeGroupGeneratorPtr NodeGroupGenerator = CreateNodeGroupGenerator(Input.Domain);
    check(NodeGroupGenerator.IsValid());
    
    // Check if we have enough free nodes to create the desired path size
    {
        int32 FreeNodes = 0;
        for (const UFlowAbstractNode* Node : Graph->GraphNodes) {
            if (Node && !Node->bActive) {
                FreeNodes++;
            }
        }
        int32 MinNodeGroupSize = NodeGroupGenerator->GetMinNodeGroupSize();
        MinNodeGroupSize = FMath::Max(1, MinNodeGroupSize);
        int32 DesiredFreeNodes = PathSize * MinNodeGroupSize;
        
        if (FreeNodes < DesiredFreeNodes) {
            Output.ErrorMessage = "Not enough free nodes";
            Output.ExecutionResult = EFlowTaskExecutionResult::FailHalt;
            return;
        }
    }

    check(Input.Random);
    
    FFlowAbstractGraphQuery GraphQuery(Graph);

    // Build the static state
    FFlowAGStaticGrowthState StaticState;
    {
        StaticState.Graph = Graph;
        StaticState.GraphQuery = &GraphQuery;
        StaticState.Random = Input.Random;
        StaticState.MinPathSize = PathSize;
        StaticState.MaxPathSize = PathSize;
        StaticState.NodeColor = NodeColor;
        StaticState.PathName = PathName;
        StaticState.NodeGroupGenerator = NodeGroupGenerator;
        StaticState.GraphConstraint = CreateGraphConstraints(Input.Domain);
        StaticState.NodeCreationConstraint = GetNodeCreationConstraintLogic();
        
        check(StaticState.GraphConstraint.IsValid());
    }

    TArray<int32> NodeIndices = GetPossibleEntranceIndices(Graph, *Input.Random);

    FFlowAGPathingSystem PathingSystem(MaxFramesToProcess);
    for (int32 NodeIndex : NodeIndices) {
        UFlowAbstractNode* StartNode = Graph->GraphNodes[NodeIndex];
        if (!StartNode || StartNode->bActive) continue;

        PathingSystem.RegisterGrowthSystem(StartNode, StaticState);   
    }
    
    PathingSystem.Execute(NumParallelSearches);
    if (PathingSystem.FoundResult()) {
        FFlowAGPathingSystemResult PathResult = PathingSystem.GetResult();
        FinalizePath(PathResult.StaticState, PathResult.State);

        const FFlowAGGrowthState& State = PathResult.State;
        // Add an entry item to the first node
        {
            UFlowAbstractNode* EntranceNode = GraphQuery.GetNode(State.Path[0].NodeId);
            // Override the entrance node path name
            EntranceNode->PathName = StartNodePathName;

            // Add a spawn point item
            UFlowGraphItem* Item = EntranceNode->CreateNewItem(GetEntranceItemClass());
            Item->ItemType = EFlowGraphItemType::Entrance;
            Item->MarkerName = StartMarkerName;
            ExtendEntranceItem(Item);
        }

        // Add a goal item to the last node
        {
            UFlowAbstractNode* GoalNode = GraphQuery.GetNode(State.Path[State.Path.Num() - 1].NodeId);
            // Override the goal node path name
            GoalNode->PathName = GoalNodePathName;

            // Add a goal item
            UFlowGraphItem* Item = GoalNode->CreateNewItem(GetExitItemClass());
            Item->ItemType = EFlowGraphItemType::Exit;
            Item->MarkerName = GoalMarkerName;
            ExtendExitItem(Item);
        }

        Output.ExecutionResult = EFlowTaskExecutionResult::Success;
        return;
    }

    Output.ErrorMessage = "Cannot find path";
    Output.ExecutionResult = EFlowTaskExecutionResult::FailRetry;
}

TArray<int32> UBaseFlowLayoutTaskCreateMainPath::GetPossibleEntranceIndices(UFlowAbstractGraphBase* InGraph, const FRandomStream& InRandom) const {
    const TArray<int32> AllNodeIndices = FMathUtils::GetShuffledIndices(InGraph->GraphNodes.Num(), InRandom);
    // Filter the nodes that are inactive
    return AllNodeIndices.FilterByPredicate([InGraph](int32 NodeIdx) -> bool {
        return !InGraph->GraphNodes[NodeIdx]->bActive;
    });
}

TSubclassOf<UFlowGraphItem> UBaseFlowLayoutTaskCreateMainPath::GetEntranceItemClass() const {
    return UFlowGraphItem::StaticClass();
}

TSubclassOf<UFlowGraphItem> UBaseFlowLayoutTaskCreateMainPath::GetExitItemClass() const {
    return UFlowGraphItem::StaticClass();
}

bool UBaseFlowLayoutTaskCreateMainPath::GetParameter(const FString& InParameterName, FDAAttribute& OutValue) {
    FLOWTASKATTR_GET_INT(PathSize);
    FLOWTASKATTR_GET_STRING(PathName);
    FLOWTASKATTR_GET_STRING(StartMarkerName);
    FLOWTASKATTR_GET_STRING(GoalMarkerName);
    FLOWTASKATTR_GET_STRING(StartNodePathName);
    FLOWTASKATTR_GET_STRING(GoalNodePathName);

    return false;
}

bool UBaseFlowLayoutTaskCreateMainPath::SetParameter(const FString& InParameterName,
                                                        const FDAAttribute& InValue) {
    FLOWTASKATTR_SET_INT(PathSize);
    FLOWTASKATTR_SET_STRING(PathName);
    FLOWTASKATTR_SET_STRING(StartMarkerName);
    FLOWTASKATTR_SET_STRING(GoalMarkerName);
    FLOWTASKATTR_SET_STRING(StartNodePathName);
    FLOWTASKATTR_SET_STRING(GoalNodePathName);

    return false;
}

bool UBaseFlowLayoutTaskCreateMainPath::SetParameterSerialized(const FString& InParameterName,
                                                                  const FString& InSerializedText) {
    FLOWTASKATTR_SET_PARSE_INT(PathSize);
    FLOWTASKATTR_SET_PARSE_STRING(PathName);
    FLOWTASKATTR_SET_PARSE_STRING(StartMarkerName);
    FLOWTASKATTR_SET_PARSE_STRING(GoalMarkerName);
    FLOWTASKATTR_SET_PARSE_STRING(StartNodePathName);
    FLOWTASKATTR_SET_PARSE_STRING(GoalNodePathName);

    return false;
}

