// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecEntryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_ExecEntryNode() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_ExecEntryNode_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_ExecEntryNode();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_ExecNodeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UEdGraphNode_ExecEntryNode::StaticRegisterNativesUEdGraphNode_ExecEntryNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_ExecEntryNode);
	UClass* Z_Construct_UClass_UEdGraphNode_ExecEntryNode_NoRegister()
	{
		return UEdGraphNode_ExecEntryNode::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_ExecEntryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_ExecEntryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode_ExecNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_ExecEntryNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecEntryNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecEntryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_ExecEntryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_ExecEntryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_ExecEntryNode_Statics::ClassParams = {
		&UEdGraphNode_ExecEntryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_ExecEntryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_ExecEntryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_ExecEntryNode()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_ExecEntryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_ExecEntryNode.OuterSingleton, Z_Construct_UClass_UEdGraphNode_ExecEntryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_ExecEntryNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_ExecEntryNode>()
	{
		return UEdGraphNode_ExecEntryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_ExecEntryNode);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecEntryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecEntryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_ExecEntryNode, UEdGraphNode_ExecEntryNode::StaticClass, TEXT("UEdGraphNode_ExecEntryNode"), &Z_Registration_Info_UClass_UEdGraphNode_ExecEntryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_ExecEntryNode), 1387091331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecEntryNode_h_3476967027(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecEntryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecEntryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
