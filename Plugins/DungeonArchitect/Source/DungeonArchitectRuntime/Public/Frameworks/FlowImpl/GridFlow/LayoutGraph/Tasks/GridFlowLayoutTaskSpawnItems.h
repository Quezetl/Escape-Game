//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h"
#include "Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
#include "GridFlowLayoutTaskSpawnItems.generated.h"

UCLASS(Meta = (AbstractTask, Title = "Spawn Items", Tooltip = "Spawn items in the layout nodes", MenuPriority = 1300))
class DUNGEONARCHITECTRUNTIME_API UGridFlowLayoutTaskSpawnItems : public UBaseFlowLayoutTaskSpawnItems {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category = "Spawn Items")
    FGridFlowTilemapItemPlacementSettings PlacementSettings;
    
protected:
    virtual TSubclassOf<UFlowGraphItem> GetItemClass() const override;
    virtual void ExtendItem(UFlowGraphItem* InItem) override;
};

