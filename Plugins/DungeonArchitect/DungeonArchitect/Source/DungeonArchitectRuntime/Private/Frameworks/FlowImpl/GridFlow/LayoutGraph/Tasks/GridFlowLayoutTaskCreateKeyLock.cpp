//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateKeyLock.h"


TSubclassOf<UFlowGraphItem> UGridFlowLayoutTaskCreateKeyLock::GetKeyItemClass() const {
	return UGridFlowGraphItem::StaticClass();
}

void UGridFlowLayoutTaskCreateKeyLock::ExtendKeyItem(UFlowGraphItem* InItem) {
	if (UGridFlowGraphItem* GraphItem = Cast<UGridFlowGraphItem>(InItem)) {
		GraphItem->PlacementSettings = KeyPlacement;
	}
}
