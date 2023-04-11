// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowLayoutTaskCreateGrid() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	void USnapGridFlowLayoutTaskCreateGrid::StaticRegisterNativesUSnapGridFlowLayoutTaskCreateGrid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowLayoutTaskCreateGrid);
	UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_NoRegister()
	{
		return USnapGridFlowLayoutTaskCreateGrid::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics
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
	UObject* (*const Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateGrid.h" },
		{ "MenuPriority", "1000" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateGrid.h" },
		{ "Title", "Create Grid 3D" },
		{ "Tooltip", "Create a grid to work with" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Create Grid 3D" },
		{ "Comment", "/** \n    The size of the initial layout grid \n\n    Variable Name: GridSize\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateGrid.h" },
		{ "ToolTip", "The size of the initial layout grid\n\nVariable Name: GridSize" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreateGrid, GridSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/**\n    Controls how far the nodes are. Only for preview purpose \n\n    Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskCreateGrid.h" },
		{ "ToolTip", "Controls how far the nodes are. Only for preview purpose\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance = { "SeparationDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowLayoutTaskCreateGrid, SeparationDistance), METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::NewProp_SeparationDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowLayoutTaskCreateGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::ClassParams = {
		&USnapGridFlowLayoutTaskCreateGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreateGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreateGrid.OuterSingleton, Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreateGrid.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowLayoutTaskCreateGrid>()
	{
		return USnapGridFlowLayoutTaskCreateGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowLayoutTaskCreateGrid);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowLayoutTaskCreateGrid, USnapGridFlowLayoutTaskCreateGrid::StaticClass, TEXT("USnapGridFlowLayoutTaskCreateGrid"), &Z_Registration_Info_UClass_USnapGridFlowLayoutTaskCreateGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowLayoutTaskCreateGrid), 1250786413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateGrid_h_2465749183(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskCreateGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
