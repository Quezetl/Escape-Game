// Fill out your copyright notice in the Description page of Project Settings.


#include "GASEnemy.h"
#include "GASAttributeSet.h"
#include "GASAbilitySystemComponent.h"

// Sets default values
AGASEnemy::AGASEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UGASAbilitySystemComponent>("AbilitySystemComp");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);	//Options available are Full, Minimal, Mixed (Mixed is used for easier implementation of Gameplay Cues for replication via Gameplay Effect)
	//For handling Gameplay Cues locally, See GASAbilitySystemComponent.h file's comments
}

// Called when the game starts or when spawned
void AGASEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		//Link Attribute Set to Ability System Component
		AttributeSetVar = AbilitySystemComponent->GetSet<UGASAttributeSet>();

		//Bindings for Attribute Change Delegates
		const_cast<UGASAttributeSet*>(AttributeSetVar)->HealthChangeDelegate.AddDynamic(this, &AGASEnemy::OnHealthChangedNative);
		const_cast<UGASAttributeSet*>(AttributeSetVar)->ManaChangeDelegate.AddDynamic(this, &AGASEnemy::OnManaChangedNative);
		const_cast<UGASAttributeSet*>(AttributeSetVar)->BaseAttackDamageChangeDelegate.AddDynamic(this, &AGASEnemy::OnBaseAttackDamageChangedNative);
		const_cast<UGASAttributeSet*>(AttributeSetVar)->SpeedMultiplierChangeDelegate.AddDynamic(this, &AGASEnemy::OnSpeedMultiplierChangedNative);
		const_cast<UGASAttributeSet*>(AttributeSetVar)->ArmorChangeDelegate.AddDynamic(this, &AGASEnemy::OnArmorChangedNative);
		const_cast<UGASAttributeSet*>(AttributeSetVar)->CritRateChangeDelegate.AddDynamic(this, &AGASEnemy::OnCritRateChangedNative);
		const_cast<UGASAttributeSet*>(AttributeSetVar)->CritDamageChangeDelegate.AddDynamic(this, &AGASEnemy::OnCritDamageChangedNative);

		//Alternate Method for Attribute Change Delegate
		//AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetVar->GetHealthAttribute()).AddUObject(this, &AGASEnemy::OnHealthChangedNative);
		//AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetVar->GetManaAttribute()).AddUObject(this, &AGASEnemy::OnManaChangedNative);
	}

}

// Called every frame
void AGASEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGASEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* AGASEnemy::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AGASEnemy::OnHealthChangedNative(float Health, int32 StackCount)
{
	OnHealthChange(Health, StackCount);
}

void AGASEnemy::OnManaChangedNative(float Mana, int32 StackCount)
{
	OnManaChange(Mana, StackCount);
}

void AGASEnemy::OnBaseAttackDamageChangedNative(float BaseAttackDamage, int32 StackCount)
{
	OnBaseAttackDamageChange(BaseAttackDamage, StackCount);
}

void AGASEnemy::OnSpeedMultiplierChangedNative(float SpeedMultiplier, int32 StackCount)
{
	OnSpeedMultiplierChange(SpeedMultiplier, StackCount);
}

void AGASEnemy::OnArmorChangedNative(float Armor, int32 StackCount)
{
	OnArmorChange(Armor, StackCount);
}

void AGASEnemy::OnCritRateChangedNative(float CritRate, int32 StackCount)
{
	OnCritRateChange(CritRate, StackCount);
}

void AGASEnemy::OnCritDamageChangedNative(float CritDamage, int32 StackCount)
{
	OnCritDamageChange(CritDamage, StackCount);
}

//Function Definition for Alternate Method for Attribute Change Delegates
//void AGASEnemy::OnHealthChangedNative(const FOnAttributeChangeData& Data)
//{
//	OnHealthChanged(Data.OldValue, Data.NewValue);
//}
//
//void AGASEnemy::OnManaChangedNative(const FOnAttributeChangeData& Data)
//{
//	OnManaChanged(Data.OldValue, Data.NewValue);
//}

void AGASEnemy::InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel)
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(AbilityToGet, AbilityLevel, 0));
	}
}

void AGASEnemy::InitializeAbilityMulti(TArray<TSubclassOf<UGameplayAbility>> AbilitiesToAcquire, int32 AbilityLevel)
{
	for (TSubclassOf<UGameplayAbility> AbilitItem : AbilitiesToAcquire)
	{
		InitializeAbility(AbilitItem, AbilityLevel);
	}
}

void AGASEnemy::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	InitializeAbilityMulti(InitialAbilities, 0);
}

void AGASEnemy::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

void AGASEnemy::GetHealthValues(float& Health, float& MaxHealth)
{
	if (AttributeSetVar)
	{
		Health = AttributeSetVar->GetHealth();
		MaxHealth = AttributeSetVar->GetMaxHealth();
	}
}

void AGASEnemy::GetManaValues(float& Mana, float& MaxMana)
{
	if (AttributeSetVar)
	{
		Mana = AttributeSetVar->GetMana();
		MaxMana = AttributeSetVar->GetMaxMana();
	}
}

void AGASEnemy::GetBaseAttackDamageValues(float& BaseAttackDamage)
{
	if (AttributeSetVar)
	{
		BaseAttackDamage = AttributeSetVar->GetBaseAttackDamage();
	}
}

void AGASEnemy::GetSpeedMultiplierValues(float& SpeedMultiplier)
{
	if (AttributeSetVar)
	{
		SpeedMultiplier = AttributeSetVar->GetSpeedMultiplier();
	}
}

void AGASEnemy::GetArmorValues(float& Armor)
{
	if (AttributeSetVar)
	{
		Armor = AttributeSetVar->GetArmor();
	}
}

void AGASEnemy::GetCritRateValues(float& CritRate)
{
	if (AttributeSetVar)
	{
		CritRate = AttributeSetVar->GetCritRate();
	}
}

void AGASEnemy::GetCritDamageValues(float& CritDamage)
{
	if (AttributeSetVar)
	{
		CritDamage = AttributeSetVar->GetCritDamage();
	}
}

void AGASEnemy::RemoveAbilityWithTags(FGameplayTagContainer TagContainer)
{
	TArray<FGameplayAbilitySpec*> MatchingAbilities;
	AbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbilities, true);
	for (FGameplayAbilitySpec* Spec : MatchingAbilities)
	{
		AbilitySystemComponent->ClearAbility(Spec->Handle);
	}
}

void AGASEnemy::ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel)
{
	TArray<FGameplayAbilitySpec*> MatchingAbility;
	AbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbility, true);
	for (FGameplayAbilitySpec* Spec : MatchingAbility)
	{
		Spec->Level = NewLevel;
	}
}

void AGASEnemy::CancelAbilityWithTags(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags)
{
	AbilitySystemComponent->CancelAbilities(&WithTags, &WithoutTags, nullptr);
}

void AGASEnemy::AddLooseGameplayTag(FGameplayTag TagToAdd)
{
	GetAbilitySystemComponent()->AddLooseGameplayTag(TagToAdd);
	GetAbilitySystemComponent()->SetTagMapCount(TagToAdd, 1);
}

void AGASEnemy::RemoveLooseGameplayTags(FGameplayTag TagsToRemove)
{
	GetAbilitySystemComponent()->RemoveLooseGameplayTag(TagsToRemove);
}

