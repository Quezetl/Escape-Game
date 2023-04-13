// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutTaskCreateGrid() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	void UGridFlowLayoutTaskCreateGrid::StaticRegisterNativesUGridFlowLayoutTaskCreateGrid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutTaskCreateGrid);
	UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_NoRegister()
	{
		return UGridFlowLayoutTaskCreateGrid::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeparationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SeparationDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateGrid.h" },
		{ "MenuPriority", "1000" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateGrid.h" },
		{ "Title", "Create Grid" },
		{ "Tooltip", "Create a grid to work with" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Create Grid" },
		{ "Comment", "/** \n    The size of the initial layout grid \n\n    Variable Name: GridSize\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateGrid.h" },
		{ "ToolTip", "The size of the initial layout grid\n\nVariable Name: GridSize" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowLayoutTaskCreateGrid, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/**\n    Controls how far the nodes are. Only for preview purpose \n\n    Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateGrid.h" },
		{ "ToolTip", "Controls how far the nodes are. Only for preview purpose\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance = { "SeparationDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowLayoutTaskCreateGrid, SeparationDistance), METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutTaskCreateGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::ClassParams = {
		&UGridFlowLayoutTaskCreateGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid()
	{
		if (!Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateGrid.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateGrid.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowLayoutTaskCreateGrid>()
	{
		return UGridFlowLayoutTaskCreateGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutTaskCreateGrid);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutTaskCreateGrid, UGridFlowLayoutTaskCreateGrid::StaticClass, TEXT("UGridFlowLayoutTaskCreateGrid"), &Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutTaskCreateGrid), 3107857995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateGrid_h_2736233221(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
