// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonLevelStreamer() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonLevelStreamingLoadingStrategy;
	static UEnum* EDungeonLevelStreamingLoadingStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamingLoadingStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDungeonLevelStreamingLoadingStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonLevelStreamingLoadingStrategy"));
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamingLoadingStrategy.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamingLoadingStrategy>()
	{
		return EDungeonLevelStreamingLoadingStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy_Statics::Enumerators[] = {
		{ "EDungeonLevelStreamingLoadingStrategy::PreloadEverything", (int64)EDungeonLevelStreamingLoadingStrategy::PreloadEverything },
		{ "EDungeonLevelStreamingLoadingStrategy::LoadOnDemand", (int64)EDungeonLevelStreamingLoadingStrategy::LoadOnDemand },
		{ "EDungeonLevelStreamingLoadingStrategy::OnlyVisibleLoaded", (int64)EDungeonLevelStreamingLoadingStrategy::OnlyVisibleLoaded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoadOnDemand.DisplayName", "Load On Demand" },
		{ "LoadOnDemand.Name", "EDungeonLevelStreamingLoadingStrategy::LoadOnDemand" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
		{ "OnlyVisibleLoaded.DisplayName", "Only Visible Loaded (unloaded hidden)" },
		{ "OnlyVisibleLoaded.Name", "EDungeonLevelStreamingLoadingStrategy::OnlyVisibleLoaded" },
		{ "PreloadEverything.DisplayName", "Preload Everything" },
		{ "PreloadEverything.Name", "EDungeonLevelStreamingLoadingStrategy::PreloadEverything" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EDungeonLevelStreamingLoadingStrategy",
		"EDungeonLevelStreamingLoadingStrategy",
		Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamingLoadingStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonLevelStreamingLoadingStrategy.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingLoadingStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamingLoadingStrategy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonLevelStreamingStrategy;
	static UEnum* EDungeonLevelStreamingStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamingStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDungeonLevelStreamingStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonLevelStreamingStrategy"));
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamingStrategy.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamingStrategy>()
	{
		return EDungeonLevelStreamingStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy_Statics::Enumerators[] = {
		{ "EDungeonLevelStreamingStrategy::LayoutDepth", (int64)EDungeonLevelStreamingStrategy::LayoutDepth },
		{ "EDungeonLevelStreamingStrategy::Distance", (int64)EDungeonLevelStreamingStrategy::Distance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Distance.DisplayName", "Distance" },
		{ "Distance.Name", "EDungeonLevelStreamingStrategy::Distance" },
		{ "LayoutDepth.DisplayName", "Layout Depth" },
		{ "LayoutDepth.Name", "EDungeonLevelStreamingStrategy::LayoutDepth" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EDungeonLevelStreamingStrategy",
		"EDungeonLevelStreamingStrategy",
		Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamingStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonLevelStreamingStrategy.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamingStrategy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonLevelStreamLoadMethod;
	static UEnum* EDungeonLevelStreamLoadMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamLoadMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDungeonLevelStreamLoadMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonLevelStreamLoadMethod"));
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamLoadMethod.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamLoadMethod>()
	{
		return EDungeonLevelStreamLoadMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod_Statics::Enumerators[] = {
		{ "EDungeonLevelStreamLoadMethod::LoadOnDemand", (int64)EDungeonLevelStreamLoadMethod::LoadOnDemand },
		{ "EDungeonLevelStreamLoadMethod::LoadEverythingInMemory", (int64)EDungeonLevelStreamLoadMethod::LoadEverythingInMemory },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoadEverythingInMemory.DisplayName", "Load Everything In Memory" },
		{ "LoadEverythingInMemory.Name", "EDungeonLevelStreamLoadMethod::LoadEverythingInMemory" },
		{ "LoadOnDemand.DisplayName", "Load On Demand" },
		{ "LoadOnDemand.Name", "EDungeonLevelStreamLoadMethod::LoadOnDemand" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EDungeonLevelStreamLoadMethod",
		"EDungeonLevelStreamLoadMethod",
		Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamLoadMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonLevelStreamLoadMethod.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamLoadMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonLevelStreamUnloadMethod;
	static UEnum* EDungeonLevelStreamUnloadMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamUnloadMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDungeonLevelStreamUnloadMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonLevelStreamUnloadMethod"));
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamUnloadMethod.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamUnloadMethod>()
	{
		return EDungeonLevelStreamUnloadMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod_Statics::Enumerators[] = {
		{ "EDungeonLevelStreamUnloadMethod::KeepHiddenChunksInMemory", (int64)EDungeonLevelStreamUnloadMethod::KeepHiddenChunksInMemory },
		{ "EDungeonLevelStreamUnloadMethod::UnloadHiddenChunks", (int64)EDungeonLevelStreamUnloadMethod::UnloadHiddenChunks },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KeepHiddenChunksInMemory.DisplayName", "Keep Hidden Chunks In Memory" },
		{ "KeepHiddenChunksInMemory.Name", "EDungeonLevelStreamUnloadMethod::KeepHiddenChunksInMemory" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
		{ "UnloadHiddenChunks.DisplayName", "Unload Hidden Chunks" },
		{ "UnloadHiddenChunks.Name", "EDungeonLevelStreamUnloadMethod::UnloadHiddenChunks" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EDungeonLevelStreamUnloadMethod",
		"EDungeonLevelStreamUnloadMethod",
		Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamUnloadMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonLevelStreamUnloadMethod.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamUnloadMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonLevelStreamChunkSelection;
	static UEnum* EDungeonLevelStreamChunkSelection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamChunkSelection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDungeonLevelStreamChunkSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonLevelStreamChunkSelection"));
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamChunkSelection.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamChunkSelection>()
	{
		return EDungeonLevelStreamChunkSelection_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection_Statics::Enumerators[] = {
		{ "EDungeonLevelStreamChunkSelection::PlayerLocations", (int64)EDungeonLevelStreamChunkSelection::PlayerLocations },
		{ "EDungeonLevelStreamChunkSelection::SpawnRoomLocations", (int64)EDungeonLevelStreamChunkSelection::SpawnRoomLocations },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
		{ "PlayerLocations.DisplayName", "Player Locations" },
		{ "PlayerLocations.Name", "EDungeonLevelStreamChunkSelection::PlayerLocations" },
		{ "SpawnRoomLocations.DisplayName", "Spawn Room Locations" },
		{ "SpawnRoomLocations.Name", "EDungeonLevelStreamChunkSelection::SpawnRoomLocations" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EDungeonLevelStreamChunkSelection",
		"EDungeonLevelStreamChunkSelection",
		Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection()
	{
		if (!Z_Registration_Info_UEnum_EDungeonLevelStreamChunkSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonLevelStreamChunkSelection.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDungeonLevelStreamChunkSelection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonLevelStreamingConfig;
class UScriptStruct* FDungeonLevelStreamingConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonLevelStreamingConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonLevelStreamingConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonLevelStreamingConfig"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonLevelStreamingConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonLevelStreamingConfig>()
{
	return FDungeonLevelStreamingConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledLevelStreaming_MetaData[];
#endif
		static void NewProp_bEnabledLevelStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledLevelStreaming;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialLoadLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialLoadLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialLoadLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StreamingStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamingStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityRoomDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VisibilityRoomDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisibilityDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UnloadMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnloadMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UnloadMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProcessStreamingNavigation_MetaData[];
#endif
		static void NewProp_bProcessStreamingNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessStreamingNavigation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonLevelStreamingConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bEnabledLevelStreaming_MetaData[] = {
		{ "Category", "Dungeon Streaming" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bEnabledLevelStreaming_SetBit(void* Obj)
	{
		((FDungeonLevelStreamingConfig*)Obj)->bEnabledLevelStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bEnabledLevelStreaming = { "bEnabledLevelStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDungeonLevelStreamingConfig), &Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bEnabledLevelStreaming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bEnabledLevelStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bEnabledLevelStreaming_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_InitialLoadLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_InitialLoadLocation_MetaData[] = {
		{ "Category", "Dungeon Streaming" },
		{ "Comment", "/**\n     * Define what gets initially streamed in first when the game starts\n     * PlayerLocation - The chunks closest to the player get streamed in first\n     * SpawnRoom - The chunks tagged as spawn rooms get streamed in first\n     */" },
		{ "EditCondition", "bEnabledLevelStreaming" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
		{ "ToolTip", "Define what gets initially streamed in first when the game starts\nPlayerLocation - The chunks closest to the player get streamed in first\nSpawnRoom - The chunks tagged as spawn rooms get streamed in first" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_InitialLoadLocation = { "InitialLoadLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonLevelStreamingConfig, InitialLoadLocation), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamChunkSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_InitialLoadLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_InitialLoadLocation_MetaData)) }; // 1974199737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_StreamingStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_StreamingStrategy_MetaData[] = {
		{ "Category", "Dungeon Streaming" },
		{ "EditCondition", "bEnabledLevelStreaming" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_StreamingStrategy = { "StreamingStrategy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonLevelStreamingConfig, StreamingStrategy), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamingStrategy, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_StreamingStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_StreamingStrategy_MetaData)) }; // 3869525265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityRoomDepth_MetaData[] = {
		{ "Category", "Dungeon Streaming" },
		{ "Comment", "/**\n     *  The nearby streamed chunks will be decided based on the connected rooms (from the layout graph). This is great for FPS games\n     *  This requires the Streaming Strategy to be set to LayoutDepth\n     */" },
		{ "EditCondition", "bEnabledLevelStreaming && StreamingStrategy == EDungeonLevelStreamingStrategy::LayoutDepth" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
		{ "ToolTip", "The nearby streamed chunks will be decided based on the connected rooms (from the layout graph). This is great for FPS games\nThis requires the Streaming Strategy to be set to LayoutDepth" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityRoomDepth = { "VisibilityRoomDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonLevelStreamingConfig, VisibilityRoomDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityRoomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityRoomDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityDistance_MetaData[] = {
		{ "Category", "Dungeon Streaming" },
		{ "Comment", "/**\n    *  The nearby streamed chunks will be decided based on the distance from the chunk the player is on.  This is great for side-scrollers and top-down games\n    *  The bounds of the current chunk will be expanded by the specified amount and any nearby chunk overlapping with it will be shown\n    *  This requires the Streaming Strategy to be set to LayoutDepth\n    */" },
		{ "EditCondition", "bEnabledLevelStreaming && StreamingStrategy == EDungeonLevelStreamingStrategy::Distance" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
		{ "ToolTip", "The nearby streamed chunks will be decided based on the distance from the chunk the player is on.  This is great for side-scrollers and top-down games\nThe bounds of the current chunk will be expanded by the specified amount and any nearby chunk overlapping with it will be shown\nThis requires the Streaming Strategy to be set to LayoutDepth" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityDistance = { "VisibilityDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonLevelStreamingConfig, VisibilityDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_LoadMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_LoadMethod_MetaData[] = {
		{ "Category", "Dungeon Streaming" },
		{ "EditCondition", "bEnabledLevelStreaming" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_LoadMethod = { "LoadMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonLevelStreamingConfig, LoadMethod), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamLoadMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_LoadMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_LoadMethod_MetaData)) }; // 3957781675
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_UnloadMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_UnloadMethod_MetaData[] = {
		{ "Category", "Dungeon Streaming" },
		{ "EditCondition", "bEnabledLevelStreaming" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_UnloadMethod = { "UnloadMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonLevelStreamingConfig, UnloadMethod), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonLevelStreamUnloadMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_UnloadMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_UnloadMethod_MetaData)) }; // 2872006522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bProcessStreamingNavigation_MetaData[] = {
		{ "Category", "Dungeon Streaming" },
		{ "EditCondition", "bEnabledLevelStreaming" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bProcessStreamingNavigation_SetBit(void* Obj)
	{
		((FDungeonLevelStreamingConfig*)Obj)->bProcessStreamingNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bProcessStreamingNavigation = { "bProcessStreamingNavigation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDungeonLevelStreamingConfig), &Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bProcessStreamingNavigation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bProcessStreamingNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bProcessStreamingNavigation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bEnabledLevelStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_InitialLoadLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_InitialLoadLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_StreamingStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_StreamingStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityRoomDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_VisibilityDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_LoadMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_LoadMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_UnloadMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_UnloadMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewProp_bProcessStreamingNavigation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DungeonLevelStreamingConfig",
		sizeof(FDungeonLevelStreamingConfig),
		alignof(FDungeonLevelStreamingConfig),
		Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_DungeonLevelStreamingConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonLevelStreamingConfig.InnerSingleton, Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DungeonLevelStreamingConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h_Statics::EnumInfo[] = {
		{ EDungeonLevelStreamingLoadingStrategy_StaticEnum, TEXT("EDungeonLevelStreamingLoadingStrategy"), &Z_Registration_Info_UEnum_EDungeonLevelStreamingLoadingStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3199658848U) },
		{ EDungeonLevelStreamingStrategy_StaticEnum, TEXT("EDungeonLevelStreamingStrategy"), &Z_Registration_Info_UEnum_EDungeonLevelStreamingStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3869525265U) },
		{ EDungeonLevelStreamLoadMethod_StaticEnum, TEXT("EDungeonLevelStreamLoadMethod"), &Z_Registration_Info_UEnum_EDungeonLevelStreamLoadMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3957781675U) },
		{ EDungeonLevelStreamUnloadMethod_StaticEnum, TEXT("EDungeonLevelStreamUnloadMethod"), &Z_Registration_Info_UEnum_EDungeonLevelStreamUnloadMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2872006522U) },
		{ EDungeonLevelStreamChunkSelection_StaticEnum, TEXT("EDungeonLevelStreamChunkSelection"), &Z_Registration_Info_UEnum_EDungeonLevelStreamChunkSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1974199737U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h_Statics::ScriptStructInfo[] = {
		{ FDungeonLevelStreamingConfig::StaticStruct, Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics::NewStructOps, TEXT("DungeonLevelStreamingConfig"), &Z_Registration_Info_UScriptStruct_DungeonLevelStreamingConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonLevelStreamingConfig), 3717480050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h_1807834562(TEXT("/Script/DungeonArchitectRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
