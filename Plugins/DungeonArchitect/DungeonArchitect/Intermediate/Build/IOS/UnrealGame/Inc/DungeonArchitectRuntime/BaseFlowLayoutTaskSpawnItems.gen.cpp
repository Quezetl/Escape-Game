// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskSpawnItems() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowItemCustomInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod;
	static UEnum* EridFlowTask_SpawnItemsMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EridFlowTask_SpawnItemsMethod"));
		}
		return Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EridFlowTask_SpawnItemsMethod>()
	{
		return EridFlowTask_SpawnItemsMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enumerators[] = {
		{ "EridFlowTask_SpawnItemsMethod::RandomRange", (int64)EridFlowTask_SpawnItemsMethod::RandomRange },
		{ "EridFlowTask_SpawnItemsMethod::LinearDifficulty", (int64)EridFlowTask_SpawnItemsMethod::LinearDifficulty },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enum_MetaDataParams[] = {
		{ "LinearDifficulty.DisplayName", "Linear Difficulty" },
		{ "LinearDifficulty.Name", "EridFlowTask_SpawnItemsMethod::LinearDifficulty" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "RandomRange.DisplayName", "Random Range" },
		{ "RandomRange.Name", "EridFlowTask_SpawnItemsMethod::RandomRange" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EridFlowTask_SpawnItemsMethod",
		"EridFlowTask_SpawnItemsMethod",
		Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod()
	{
		if (!Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.InnerSingleton;
	}
	void UBaseFlowLayoutTaskSpawnItems::StaticRegisterNativesUBaseFlowLayoutTaskSpawnItems()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskSpawnItems);
	UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_NoRegister()
	{
		return UBaseFlowLayoutTaskSpawnItems::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomItemInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomItemInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDistributionVariance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDistributionVariance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDifficulty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDifficulty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnProbability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugShowDifficulty_MetaData[];
#endif
		static void NewProp_bDebugShowDifficulty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugShowDifficulty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyInfoColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DifficultyInfoColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The list of paths to spawn the items on\n\n        Variable Name: Paths\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The list of paths to spawn the items on\n\nVariable Name: Paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The type of item to spawn\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The type of item to spawn\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, ItemType), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType, METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType_MetaData)) }; // 312840227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The marker name for this item. Create a marker in the theme file with this name and add you assets there\n\n        Variable Name: MarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The marker name for this item. Create a marker in the theme file with this name and add you assets there\n\nVariable Name: MarkerName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, MarkerName), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_CustomItemInfo_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        If ItemType is set to custom, customize the visuals of the items in the graph preview\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "If ItemType is set to custom, customize the visuals of the items in the graph preview\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_CustomItemInfo = { "CustomItemInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, CustomItemInfo), Z_Construct_UScriptStruct_FFlowItemCustomInfo, METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_CustomItemInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_CustomItemInfo_MetaData)) }; // 1056672046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinCount_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        Minimum number of items to spawn\n\n        Variable Name: MinCount\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Minimum number of items to spawn\n\nVariable Name: MinCount" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinCount = { "MinCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, MinCount), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        Maximum number of items to spawn\n\n        Variable Name: MaxCount\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Maximum number of items to spawn\n\nVariable Name: MaxCount" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, MaxCount), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MaxCount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The method to use to control the spawn\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The method to use to control the spawn\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod = { "SpawnMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, SpawnMethod), Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod, METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod_MetaData)) }; // 672724098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnDistributionVariance_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        Control the random variance\n\n        Variable Name: SpawnDistributionVariance\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Control the random variance\n\nVariable Name: SpawnDistributionVariance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnDistributionVariance = { "SpawnDistributionVariance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, SpawnDistributionVariance), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnDistributionVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnDistributionVariance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinSpawnDifficulty_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        Each node in the path has a difficulty, with the first node having a difficulty of 0\n        and the last node 1 and everything in between\n        Start spawning only on nodes having difficulty greater than this value\n\n        Variable Name: MinSpawnDifficulty\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Each node in the path has a difficulty, with the first node having a difficulty of 0\nand the last node 1 and everything in between\nStart spawning only on nodes having difficulty greater than this value\n\nVariable Name: MinSpawnDifficulty" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinSpawnDifficulty = { "MinSpawnDifficulty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, MinSpawnDifficulty), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinSpawnDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinSpawnDifficulty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnProbability_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The probability of spawning in this node.  It might spawn as usual or not spawn anything at all depending\n        on this value. 0 = 0% chance of spawning.  1 = 100% chance of spawning\n\n        Variable Name: SpawnProbability\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The probability of spawning in this node.  It might spawn as usual or not spawn anything at all depending\non this value. 0 = 0% chance of spawning.  1 = 100% chance of spawning\n\nVariable Name: SpawnProbability" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnProbability = { "SpawnProbability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, SpawnProbability), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnProbability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n        Debug: Show the difficulty of the nodes in this path\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Debug: Show the difficulty of the nodes in this path\n\nVariable Name: [N/A]" },
	};
#endif
	void Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty_SetBit(void* Obj)
	{
		((UBaseFlowLayoutTaskSpawnItems*)Obj)->bDebugShowDifficulty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty = { "bDebugShowDifficulty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseFlowLayoutTaskSpawnItems), &Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_DifficultyInfoColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n        Debug: The color of the debug data item\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Debug: The color of the debug data item\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_DifficultyInfoColor = { "DifficultyInfoColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, DifficultyInfoColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_DifficultyInfoColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_DifficultyInfoColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_CustomItemInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnDistributionVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinSpawnDifficulty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_DifficultyInfoColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskSpawnItems>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::ClassParams = {
		&UBaseFlowLayoutTaskSpawnItems::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems()
	{
		if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskSpawnItems.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskSpawnItems.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseFlowLayoutTaskSpawnItems.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskSpawnItems>()
	{
		return UBaseFlowLayoutTaskSpawnItems::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskSpawnItems);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::EnumInfo[] = {
		{ EridFlowTask_SpawnItemsMethod_StaticEnum, TEXT("EridFlowTask_SpawnItemsMethod"), &Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 672724098U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems, UBaseFlowLayoutTaskSpawnItems::StaticClass, TEXT("UBaseFlowLayoutTaskSpawnItems"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskSpawnItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskSpawnItems), 2392645130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_2473472129(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
