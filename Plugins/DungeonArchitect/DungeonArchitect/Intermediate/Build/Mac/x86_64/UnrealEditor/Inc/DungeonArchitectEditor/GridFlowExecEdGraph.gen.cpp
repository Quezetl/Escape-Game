// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/ExecGraph/GridFlowExecEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowExecEdGraph() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraph_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_NoRegister();
// End Cross Module References
	void UGridFlowExecEdGraph::StaticRegisterNativesUGridFlowExecEdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowExecEdGraph);
	UClass* Z_Construct_UClass_UGridFlowExecEdGraph_NoRegister()
	{
		return UGridFlowExecEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowExecEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowExecEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowExecEdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/GridFlowExecEdGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/GridFlowExecEdGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowExecEdGraph_Statics::NewProp_ResultNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/GridFlowExecEdGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowExecEdGraph_Statics::NewProp_ResultNode = { "ResultNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowExecEdGraph, ResultNode), Z_Construct_UClass_UGridFlowExecEdGraphNode_Result_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridFlowExecEdGraph_Statics::NewProp_ResultNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowExecEdGraph_Statics::NewProp_ResultNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowExecEdGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowExecEdGraph_Statics::NewProp_ResultNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowExecEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowExecEdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowExecEdGraph_Statics::ClassParams = {
		&UGridFlowExecEdGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowExecEdGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowExecEdGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowExecEdGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowExecEdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowExecEdGraph()
	{
		if (!Z_Registration_Info_UClass_UGridFlowExecEdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowExecEdGraph.OuterSingleton, Z_Construct_UClass_UGridFlowExecEdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowExecEdGraph.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowExecEdGraph>()
	{
		return UGridFlowExecEdGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowExecEdGraph);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowExecEdGraph, UGridFlowExecEdGraph::StaticClass, TEXT("UGridFlowExecEdGraph"), &Z_Registration_Info_UClass_UGridFlowExecEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowExecEdGraph), 180562531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraph_h_944563641(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_GridFlowExecEdGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
