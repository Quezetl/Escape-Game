// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskFinalize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemapTaskFinalize() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskFinalize_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskFinalize();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTask();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UGridFlowTilemapTaskFinalize::StaticRegisterNativesUGridFlowTilemapTaskFinalize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapTaskFinalize);
	UClass* Z_Construct_UClass_UGridFlowTilemapTaskFinalize_NoRegister()
	{
		return UGridFlowTilemapTaskFinalize::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugUnwalkableCells_MetaData[];
#endif
		static void NewProp_bDebugUnwalkableCells_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugUnwalkableCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowTilemapTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskFinalize.h" },
		{ "MenuPriority", "2600" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskFinalize.h" },
		{ "TilemapTask", "" },
		{ "Title", "Finalize Tilemap" },
		{ "Tooltip", "Finalize Tilemap" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n        Debug: Show tiles that are not reachable due to overlays blocking them\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskFinalize.h" },
		{ "ToolTip", "Debug: Show tiles that are not reachable due to overlays blocking them\n\nVariable Name: [N/A]" },
	};
#endif
	void Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells_SetBit(void* Obj)
	{
		((UGridFlowTilemapTaskFinalize*)Obj)->bDebugUnwalkableCells = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells = { "bDebugUnwalkableCells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridFlowTilemapTaskFinalize), &Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::NewProp_bDebugUnwalkableCells,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapTaskFinalize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::ClassParams = {
		&UGridFlowTilemapTaskFinalize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowTilemapTaskFinalize()
	{
		if (!Z_Registration_Info_UClass_UGridFlowTilemapTaskFinalize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapTaskFinalize.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapTaskFinalize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowTilemapTaskFinalize.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapTaskFinalize>()
	{
		return UGridFlowTilemapTaskFinalize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapTaskFinalize);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskFinalize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskFinalize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemapTaskFinalize, UGridFlowTilemapTaskFinalize::StaticClass, TEXT("UGridFlowTilemapTaskFinalize"), &Z_Registration_Info_UClass_UGridFlowTilemapTaskFinalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapTaskFinalize), 894596080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskFinalize_h_1443189471(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskFinalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskFinalize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
