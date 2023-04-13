// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/FloorPlan/FloorPlanConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlanConfig() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanConfig();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UFloorPlanConfig::StaticRegisterNativesUFloorPlanConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorPlanConfig);
	UClass* Z_Construct_UClass_UFloorPlanConfig_NoRegister()
	{
		return UFloorPlanConfig::StaticClass();
	}
	struct Z_Construct_UClass_UFloorPlanConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRoomSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinRoomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRoomSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRoomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HallWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HallWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRoomChunkArea_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinRoomChunkArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomSplitProbabilityOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomSplitProbabilityOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorPlanConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/FloorPlan/FloorPlanConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_BuildingSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_BuildingSize = { "BuildingSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorPlanConfig, BuildingSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_BuildingSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_BuildingSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorPlanConfig, GridSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomSize = { "MinRoomSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorPlanConfig, MinRoomSize), METADATA_PARAMS(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MaxRoomSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MaxRoomSize = { "MaxRoomSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorPlanConfig, MaxRoomSize), METADATA_PARAMS(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MaxRoomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MaxRoomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_HallWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_HallWidth = { "HallWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorPlanConfig, HallWidth), METADATA_PARAMS(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_HallWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_HallWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomChunkArea_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomChunkArea = { "MinRoomChunkArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorPlanConfig, MinRoomChunkArea), METADATA_PARAMS(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomChunkArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomChunkArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_RoomSplitProbabilityOffset_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanConfig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_RoomSplitProbabilityOffset = { "RoomSplitProbabilityOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloorPlanConfig, RoomSplitProbabilityOffset), METADATA_PARAMS(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_RoomSplitProbabilityOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_RoomSplitProbabilityOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorPlanConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_BuildingSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MaxRoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_HallWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_MinRoomChunkArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorPlanConfig_Statics::NewProp_RoomSplitProbabilityOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorPlanConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorPlanConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorPlanConfig_Statics::ClassParams = {
		&UFloorPlanConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloorPlanConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloorPlanConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorPlanConfig()
	{
		if (!Z_Registration_Info_UClass_UFloorPlanConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorPlanConfig.OuterSingleton, Z_Construct_UClass_UFloorPlanConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorPlanConfig.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFloorPlanConfig>()
	{
		return UFloorPlanConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorPlanConfig);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorPlanConfig, UFloorPlanConfig::StaticClass, TEXT("UFloorPlanConfig"), &Z_Registration_Info_UClass_UFloorPlanConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorPlanConfig), 1467363620U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanConfig_h_517149120(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
