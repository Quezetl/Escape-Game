//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h"
#include "Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
#include "GridFlowLayoutTaskCreateKeyLock.generated.h"

UCLASS(Meta = (AbstractTask, Title = "Create Key/Lock", Tooltip = "Creates a Key/Lock along a path", MenuPriority = 1400))
class DUNGEONARCHITECTRUNTIME_API UGridFlowLayoutTaskCreateKeyLock : public UBaseFlowLayoutTaskCreateKeyLock {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category = "Spawn Items")
    FGridFlowTilemapItemPlacementSettings KeyPlacement;
    
    UPROPERTY(EditAnywhere, Category = "Spawn Items")
    FGridFlowTilemapItemPlacementSettings LockPlacement;

protected:
    virtual TSubclassOf<UFlowGraphItem> GetKeyItemClass() const override;
    virtual void ExtendKeyItem(UFlowGraphItem* InItem) override;
};

