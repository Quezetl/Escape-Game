// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTilemapGraphInfrastructure() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowTilemapEdGraph_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowTilemapEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowTilemapEdGraphNode_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowTilemapEdGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowTilemapEdGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
	void UGridFlowTilemapEdGraph::StaticRegisterNativesUGridFlowTilemapEdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapEdGraph);
	UClass* Z_Construct_UClass_UGridFlowTilemapEdGraph_NoRegister()
	{
		return UGridFlowTilemapEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////// Graph /////////////////// \n" },
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ToolTip", "/ Graph /" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::NewProp_PreviewNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::NewProp_PreviewNode = { "PreviewNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapEdGraph, PreviewNode), Z_Construct_UClass_UGridFlowTilemapEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::NewProp_PreviewNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::NewProp_PreviewNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::NewProp_PreviewNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapEdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::ClassParams = {
		&UGridFlowTilemapEdGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowTilemapEdGraph()
	{
		if (!Z_Registration_Info_UClass_UGridFlowTilemapEdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapEdGraph.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapEdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowTilemapEdGraph.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowTilemapEdGraph>()
	{
		return UGridFlowTilemapEdGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapEdGraph);
	void UGridFlowTilemapEdGraphNode::StaticRegisterNativesUGridFlowTilemapEdGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapEdGraphNode);
	UClass* Z_Construct_UClass_UGridFlowTilemapEdGraphNode_NoRegister()
	{
		return UGridFlowTilemapEdGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////// Graph Node /////////////////// \n" },
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ToolTip", "/ Graph Node /" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::NewProp_PreviewTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::NewProp_PreviewTexture = { "PreviewTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapEdGraphNode, PreviewTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::NewProp_PreviewTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::NewProp_PreviewTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::NewProp_PreviewTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapEdGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::ClassParams = {
		&UGridFlowTilemapEdGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowTilemapEdGraphNode()
	{
		if (!Z_Registration_Info_UClass_UGridFlowTilemapEdGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapEdGraphNode.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapEdGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowTilemapEdGraphNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowTilemapEdGraphNode>()
	{
		return UGridFlowTilemapEdGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapEdGraphNode);
	void UGridFlowTilemapEdGraphSchema::StaticRegisterNativesUGridFlowTilemapEdGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapEdGraphSchema);
	UClass* Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_NoRegister()
	{
		return UGridFlowTilemapEdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////// Graph Schema /////////////////// \n" },
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Graph/TilemapGraphInfrastructure.h" },
		{ "ToolTip", "/ Graph Schema /" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapEdGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_Statics::ClassParams = {
		&UGridFlowTilemapEdGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowTilemapEdGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UGridFlowTilemapEdGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapEdGraphSchema.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapEdGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowTilemapEdGraphSchema.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowTilemapEdGraphSchema>()
	{
		return UGridFlowTilemapEdGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapEdGraphSchema);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_Tilemap_Graph_TilemapGraphInfrastructure_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_Tilemap_Graph_TilemapGraphInfrastructure_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemapEdGraph, UGridFlowTilemapEdGraph::StaticClass, TEXT("UGridFlowTilemapEdGraph"), &Z_Registration_Info_UClass_UGridFlowTilemapEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapEdGraph), 921484777U) },
		{ Z_Construct_UClass_UGridFlowTilemapEdGraphNode, UGridFlowTilemapEdGraphNode::StaticClass, TEXT("UGridFlowTilemapEdGraphNode"), &Z_Registration_Info_UClass_UGridFlowTilemapEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapEdGraphNode), 1484883146U) },
		{ Z_Construct_UClass_UGridFlowTilemapEdGraphSchema, UGridFlowTilemapEdGraphSchema::StaticClass, TEXT("UGridFlowTilemapEdGraphSchema"), &Z_Registration_Info_UClass_UGridFlowTilemapEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapEdGraphSchema), 780895495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_Tilemap_Graph_TilemapGraphInfrastructure_h_999367844(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_Tilemap_Graph_TilemapGraphInfrastructure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_Tilemap_Graph_TilemapGraphInfrastructure_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
