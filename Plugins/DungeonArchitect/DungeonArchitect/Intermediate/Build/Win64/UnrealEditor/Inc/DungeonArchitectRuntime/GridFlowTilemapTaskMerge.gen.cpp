// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskMerge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemapTaskMerge() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskMerge_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskMerge();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskMerge();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UGridFlowTilemapTaskMerge::StaticRegisterNativesUGridFlowTilemapTaskMerge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapTaskMerge);
	UClass* Z_Construct_UClass_UGridFlowTilemapTaskMerge_NoRegister()
	{
		return UGridFlowTilemapTaskMerge::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowTilemapTaskMerge,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskMerge.h" },
		{ "MenuPriority", "2400" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskMerge.h" },
		{ "TilemapTask", "" },
		{ "Title", "Merge Tilemaps" },
		{ "Tooltip", "Merge Tilemaps" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapTaskMerge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::ClassParams = {
		&UGridFlowTilemapTaskMerge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowTilemapTaskMerge()
	{
		if (!Z_Registration_Info_UClass_UGridFlowTilemapTaskMerge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapTaskMerge.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowTilemapTaskMerge.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapTaskMerge>()
	{
		return UGridFlowTilemapTaskMerge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapTaskMerge);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskMerge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskMerge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemapTaskMerge, UGridFlowTilemapTaskMerge::StaticClass, TEXT("UGridFlowTilemapTaskMerge"), &Z_Registration_Info_UClass_UGridFlowTilemapTaskMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapTaskMerge), 2683104577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskMerge_h_440331599(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskMerge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskMerge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
