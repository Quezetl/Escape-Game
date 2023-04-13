// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowAbstractGraph() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowAbstractGraph_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowAbstractGraph();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractGraphBase();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecCloneableState_NoRegister();
// End Cross Module References
	void UGridFlowAbstractGraph::StaticRegisterNativesUGridFlowAbstractGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowAbstractGraph);
	UClass* Z_Construct_UClass_UGridFlowAbstractGraph_NoRegister()
	{
		return UGridFlowAbstractGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowAbstractGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowAbstractGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowAbstractGraphBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowAbstractGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////// Grid Flow Abstract Graph /////////////////////////////\n" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h" },
		{ "ToolTip", "Grid Flow Abstract Graph" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowAbstractGraph_Statics::NewProp_GridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowAbstractGraph_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowAbstractGraph, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UGridFlowAbstractGraph_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractGraph_Statics::NewProp_GridSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowAbstractGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowAbstractGraph_Statics::NewProp_GridSize,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGridFlowAbstractGraph_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFlowExecCloneableState_NoRegister, (int32)VTABLE_OFFSET(UGridFlowAbstractGraph, IFlowExecCloneableState), false },  // 147651041
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowAbstractGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowAbstractGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowAbstractGraph_Statics::ClassParams = {
		&UGridFlowAbstractGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowAbstractGraph_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractGraph_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowAbstractGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowAbstractGraph()
	{
		if (!Z_Registration_Info_UClass_UGridFlowAbstractGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowAbstractGraph.OuterSingleton, Z_Construct_UClass_UGridFlowAbstractGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowAbstractGraph.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowAbstractGraph>()
	{
		return UGridFlowAbstractGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowAbstractGraph);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_GridFlowAbstractGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_GridFlowAbstractGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowAbstractGraph, UGridFlowAbstractGraph::StaticClass, TEXT("UGridFlowAbstractGraph"), &Z_Registration_Info_UClass_UGridFlowAbstractGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowAbstractGraph), 4256046904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_GridFlowAbstractGraph_h_3953920439(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_GridFlowAbstractGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_GridFlowAbstractGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
