// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonConfig() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonConfig();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapModuleDatabase_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapAsset_NoRegister();
// End Cross Module References
	void USnapMapDungeonConfig::StaticRegisterNativesUSnapMapDungeonConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonConfig);
	UClass* Z_Construct_UClass_USnapMapDungeonConfig_NoRegister()
	{
		return USnapMapDungeonConfig::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapDungeonConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleDatabase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModuleDatabase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DungeonFlowGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonFlowGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowModuleRotations_MetaData[];
#endif
		static void NewProp_bAllowModuleRotations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowModuleRotations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTestContraction_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionTestContraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxProcessingTimeSecs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProcessingTimeSecs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportBuildRetries_MetaData[];
#endif
		static void NewProp_bSupportBuildRetries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportBuildRetries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBuildRetries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBuildRetries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSinglePersistentDungeon_MetaData[];
#endif
		static void NewProp_bGenerateSinglePersistentDungeon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSinglePersistentDungeon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapDungeonConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_ModuleDatabase_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** A module database asset that contains the references of the modules to use for building the dungeon */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "A module database asset that contains the references of the modules to use for building the dungeon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_ModuleDatabase = { "ModuleDatabase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapDungeonConfig, ModuleDatabase), Z_Construct_UClass_USnapMapModuleDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_ModuleDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_ModuleDatabase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_DungeonFlowGraph_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_DungeonFlowGraph = { "DungeonFlowGraph", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapDungeonConfig, DungeonFlowGraph), Z_Construct_UClass_USnapMapAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_DungeonFlowGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_DungeonFlowGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bAllowModuleRotations_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** \n       Can the rooms / modules be rotated while stitching them together. Disable this for isometric / platformer games \n       where the rooms are designed to be viewed at a certain angle \n    */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "Can the rooms / modules be rotated while stitching them together. Disable this for isometric / platformer games\nwhere the rooms are designed to be viewed at a certain angle" },
	};
#endif
	void Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bAllowModuleRotations_SetBit(void* Obj)
	{
		((USnapMapDungeonConfig*)Obj)->bAllowModuleRotations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bAllowModuleRotations = { "bAllowModuleRotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapMapDungeonConfig), &Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bAllowModuleRotations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bAllowModuleRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bAllowModuleRotations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_CollisionTestContraction_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     When modules are stitched together, the builder makes sure they do not overlap.  This parameter is used to \n     control the tolerance level.  If set to 0, even the slightest overlap with a nearby module would not create an adjacent module\n     Leaving to a small number like 100, would tolerate an overlap with nearby module by 100 unreal units.\n     Adjust this depending on your art asset\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "When modules are stitched together, the builder makes sure they do not overlap.  This parameter is used to\ncontrol the tolerance level.  If set to 0, even the slightest overlap with a nearby module would not create an adjacent module\nLeaving to a small number like 100, would tolerate an overlap with nearby module by 100 unreal units.\nAdjust this depending on your art asset" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_CollisionTestContraction = { "CollisionTestContraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapDungeonConfig, CollisionTestContraction), METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_CollisionTestContraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_CollisionTestContraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_MaxProcessingTimeSecs_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The max processing time (in seconds) before bailing out. This keeps the build function from hanging if it doesn't find a solution */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "The max processing time (in seconds) before bailing out. This keeps the build function from hanging if it doesn't find a solution" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_MaxProcessingTimeSecs = { "MaxProcessingTimeSecs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapDungeonConfig, MaxProcessingTimeSecs), METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_MaxProcessingTimeSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_MaxProcessingTimeSecs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** If the dungeon build fails, it will be retried with another seed multiple times (see field NumBuildRetries) */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "If the dungeon build fails, it will be retried with another seed multiple times (see field NumBuildRetries)" },
	};
#endif
	void Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries_SetBit(void* Obj)
	{
		((USnapMapDungeonConfig*)Obj)->bSupportBuildRetries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries = { "bSupportBuildRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapMapDungeonConfig), &Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_NumBuildRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** If the dungeon build fails, it will be retried with another seed multiple tiles based on this count */" },
		{ "EditCondition", "bSupportBuildRetries" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "If the dungeon build fails, it will be retried with another seed multiple tiles based on this count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_NumBuildRetries = { "NumBuildRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapDungeonConfig, NumBuildRetries), METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_NumBuildRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_NumBuildRetries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n\x09* Build the entire dungeon in the main level by copying over the module actors to the persistent level. This will disable level streaming\n\x09* and is meant to be used in the editor only.  You may bake your lightmaps with this method\n\x09**/" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "Build the entire dungeon in the main level by copying over the module actors to the persistent level. This will disable level streaming\nand is meant to be used in the editor only.  You may bake your lightmaps with this method" },
	};
#endif
	void Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_SetBit(void* Obj)
	{
		((USnapMapDungeonConfig*)Obj)->bGenerateSinglePersistentDungeon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bGenerateSinglePersistentDungeon = { "bGenerateSinglePersistentDungeon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapMapDungeonConfig), &Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapDungeonConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_ModuleDatabase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_DungeonFlowGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bAllowModuleRotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_CollisionTestContraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_MaxProcessingTimeSecs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_NumBuildRetries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bGenerateSinglePersistentDungeon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapDungeonConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::ClassParams = {
		&USnapMapDungeonConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapMapDungeonConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapDungeonConfig()
	{
		if (!Z_Registration_Info_UClass_USnapMapDungeonConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonConfig.OuterSingleton, Z_Construct_UClass_USnapMapDungeonConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapDungeonConfig.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonConfig>()
	{
		return USnapMapDungeonConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonConfig);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonConfig, USnapMapDungeonConfig::StaticClass, TEXT("USnapMapDungeonConfig"), &Z_Registration_Info_UClass_USnapMapDungeonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonConfig), 2583696881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonConfig_h_1116834556(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
