// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/Domains/AbstractGraph/GridFlowAbstractEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowAbstractEdGraph() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowAbstractEdGraph_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowAbstractEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UGridFlowAbstractEdGraph::StaticRegisterNativesUGridFlowAbstractEdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowAbstractEdGraph);
	UClass* Z_Construct_UClass_UGridFlowAbstractEdGraph_NoRegister()
	{
		return UGridFlowAbstractEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowAbstractEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowAbstractEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowAbstractEdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/GridFlowAbstractEdGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/GridFlowAbstractEdGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowAbstractEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowAbstractEdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowAbstractEdGraph_Statics::ClassParams = {
		&UGridFlowAbstractEdGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowAbstractEdGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractEdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowAbstractEdGraph()
	{
		if (!Z_Registration_Info_UClass_UGridFlowAbstractEdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowAbstractEdGraph.OuterSingleton, Z_Construct_UClass_UGridFlowAbstractEdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowAbstractEdGraph.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowAbstractEdGraph>()
	{
		return UGridFlowAbstractEdGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowAbstractEdGraph);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowAbstractEdGraph, UGridFlowAbstractEdGraph::StaticClass, TEXT("UGridFlowAbstractEdGraph"), &Z_Registration_Info_UClass_UGridFlowAbstractEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowAbstractEdGraph), 599742496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraph_h_475360926(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_AbstractGraph_GridFlowAbstractEdGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
