// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityConfig() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityConfig();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCityBlockDimension();
// End Cross Module References
	void USimpleCityConfig::StaticRegisterNativesUSimpleCityConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityConfig);
	UClass* Z_Construct_UClass_USimpleCityConfig_NoRegister()
	{
		return USimpleCityConfig::StaticClass();
	}
	struct Z_Construct_UClass_USimpleCityConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCitySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinCitySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCitySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCitySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBlockSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinBlockSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBlockSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBlockSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BiggerHouseProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BiggerHouseProbability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeRemovalProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeRemovalProbability;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CityBlockDimensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CityBlockDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CityBlockDimensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleCityConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SimpleCity/SimpleCityConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * The size of each cell. Set this to the size of your modular asset\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
		{ "ToolTip", "The size of each cell. Set this to the size of your modular asset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityConfig, CellSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinCitySize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * The minimum size of the city in cell units\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
		{ "ToolTip", "The minimum size of the city in cell units" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinCitySize = { "MinCitySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityConfig, MinCitySize), METADATA_PARAMS(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinCitySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinCitySize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxCitySize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * The maximum size of the city in cell units\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
		{ "ToolTip", "The maximum size of the city in cell units" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxCitySize = { "MaxCitySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityConfig, MaxCitySize), METADATA_PARAMS(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxCitySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxCitySize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinBlockSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * The minimum size of each block, in cell units\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
		{ "ToolTip", "The minimum size of each block, in cell units" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinBlockSize = { "MinBlockSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityConfig, MinBlockSize), METADATA_PARAMS(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinBlockSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinBlockSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxBlockSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * The minimum size of each block, in cell units\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
		{ "ToolTip", "The minimum size of each block, in cell units" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxBlockSize = { "MaxBlockSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityConfig, MaxBlockSize), METADATA_PARAMS(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxBlockSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxBlockSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_BiggerHouseProbability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * The probability that a bigger house would spawn.  Valid range is from [0..1]\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
		{ "ToolTip", "The probability that a bigger house would spawn.  Valid range is from [0..1]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_BiggerHouseProbability = { "BiggerHouseProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityConfig, BiggerHouseProbability), METADATA_PARAMS(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_BiggerHouseProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_BiggerHouseProbability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_RoadEdgeRemovalProbability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * Randomly removes certain straight lines of roads to create an uneven and more natural looking city (value between 0..1)\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
		{ "ToolTip", "Randomly removes certain straight lines of roads to create an uneven and more natural looking city (value between 0..1)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_RoadEdgeRemovalProbability = { "RoadEdgeRemovalProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityConfig, RoadEdgeRemovalProbability), METADATA_PARAMS(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_RoadEdgeRemovalProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_RoadEdgeRemovalProbability_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions_Inner = { "CityBlockDimensions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCityBlockDimension, METADATA_PARAMS(nullptr, 0) }; // 3200831706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions = { "CityBlockDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityConfig, CityBlockDimensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions_MetaData)) }; // 3200831706
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCityConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinCitySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxCitySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinBlockSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxBlockSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_BiggerHouseProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_RoadEdgeRemovalProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleCityConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityConfig_Statics::ClassParams = {
		&USimpleCityConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleCityConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleCityConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleCityConfig()
	{
		if (!Z_Registration_Info_UClass_USimpleCityConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityConfig.OuterSingleton, Z_Construct_UClass_USimpleCityConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleCityConfig.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityConfig>()
	{
		return USimpleCityConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityConfig);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityConfig, USimpleCityConfig::StaticClass, TEXT("USimpleCityConfig"), &Z_Registration_Info_UClass_USimpleCityConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityConfig), 288270413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityConfig_h_3374145387(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
