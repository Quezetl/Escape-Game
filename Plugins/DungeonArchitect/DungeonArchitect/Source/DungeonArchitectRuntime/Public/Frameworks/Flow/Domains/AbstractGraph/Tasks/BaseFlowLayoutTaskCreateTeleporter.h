//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTask.h"
#include "BaseFlowLayoutTaskCreateTeleporter.generated.h"

class UFlowGraphItem;

UCLASS(Abstract)
class DUNGEONARCHITECTRUNTIME_API UBaseFlowLayoutTaskCreateTeleporter : public UBaseFlowLayoutTask {
    GENERATED_BODY()
public:
    /**
       The name of the path the first linked item should be spawned to

        Variable Name: FirstItemPathName
    */
    UPROPERTY(EditAnywhere, Category = "Create Teleporter")
    FString FirstPathName;
    
    /**
        The name of the path the second linked item should be spawned to

        Variable Name: SecondItemPathName
    */
    UPROPERTY(EditAnywhere, Category = "Create Teleporter")
    FString SecondPathName;
    
    /**
        The marker name to spawn for the first linked item

        Variable Name: FirstItemMarkerName
    */
    UPROPERTY(EditAnywhere, Category = "Create Teleporter")
    FString TeleporterMarkerName;
   
public:
    virtual void Execute(const FFlowExecutionInput& Input, const FFlowTaskExecutionSettings& InExecSettings, FFlowExecutionOutput& Output) override;
    virtual bool GetParameter(const FString& InParameterName, FDAAttribute& OutValue) override;
    virtual bool SetParameter(const FString& InParameterName, const FDAAttribute& InValue) override;
    virtual bool SetParameterSerialized(const FString& InParameterName, const FString& InSerializedText) override;

protected:
    virtual TSubclassOf<UFlowGraphItem> GetEntranceItemClass() const;
    virtual TSubclassOf<UFlowGraphItem> GetExitItemClass() const;
    virtual void ExtendEntranceItem(UFlowGraphItem* InItem) {}
    virtual void ExtendExitItem(UFlowGraphItem* InItem) {}
};

