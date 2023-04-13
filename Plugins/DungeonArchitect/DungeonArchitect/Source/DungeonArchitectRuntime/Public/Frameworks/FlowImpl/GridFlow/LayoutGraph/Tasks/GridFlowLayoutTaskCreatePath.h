//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreatePath.h"
#include "Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
#include "GridFlowLayoutTaskCreatePath.generated.h"

UCLASS(Meta = (AbstractTask, Title = "Create Path", Tooltip = "Create a path on an existing network", MenuPriority = 1200))
class DUNGEONARCHITECTRUNTIME_API UGridFlowLayoutTaskCreatePath : public UBaseFlowLayoutTaskCreatePath {
    GENERATED_BODY()
public:
    /**
        The marker to spawn for the teleporter

        Variable Name: TeleporterMarkerName
    */
    UPROPERTY(EditAnywhere, Category = Teleporter, Meta=(EditCondition="bEnterThroughTeleporter"))
    FGridFlowTilemapItemPlacementSettings TeleporterPlacement;
    
protected:
    virtual TSubclassOf<UFlowGraphItem> GetTeleporterItemClass() const override;
    virtual void ExtendTeleporterItem(UFlowGraphItem* InItem) override;
};

