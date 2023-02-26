// Fill out your copyright notice in the Description page of Project Settings.


#include "GASAssetManager.h"
#include "AbilitySystemGlobals.h"

void UGASAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
	UE_LOG(LogTemp, Warning, TEXT("dsEhehehetendenadayo"));
}

