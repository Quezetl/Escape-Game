// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_GrammarNode() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarNode_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarNode();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarBase();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarNodeType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UEdGraphNode_GrammarNode::StaticRegisterNativesUEdGraphNode_GrammarNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_GrammarNode);
	UClass* Z_Construct_UClass_UEdGraphNode_GrammarNode_NoRegister()
	{
		return UEdGraphNode_GrammarNode::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TypeInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayIndex_MetaData[];
#endif
		static void NewProp_bDisplayIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DependentNodes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependentNodes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DependentNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode_GrammarBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_TypeInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_TypeInfo = { "TypeInfo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_GrammarNode, TypeInfo), Z_Construct_UClass_UGrammarNodeType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_TypeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_TypeInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Grammar" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_GrammarNode, Index), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex_MetaData[] = {
		{ "Category", "Grammar" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex_SetBit(void* Obj)
	{
		((UEdGraphNode_GrammarNode*)Obj)->bDisplayIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex = { "bDisplayIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEdGraphNode_GrammarNode), &Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_GrammarNode, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_NodeId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes_ElementProp = { "DependentNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes_MetaData[] = {
		{ "Comment", "/** The nodes in this list will be dependent on this node to be processed first */" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
		{ "ToolTip", "The nodes in this list will be dependent on this node to be processed first" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FGuid>::Value, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes = { "DependentNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_GrammarNode, DependentNodes), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_TypeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_GrammarNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::ClassParams = {
		&UEdGraphNode_GrammarNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_GrammarNode()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_GrammarNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_GrammarNode.OuterSingleton, Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_GrammarNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_GrammarNode>()
	{
		return UEdGraphNode_GrammarNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_GrammarNode);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Nodes_EdGraphNode_GrammarNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Nodes_EdGraphNode_GrammarNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_GrammarNode, UEdGraphNode_GrammarNode::StaticClass, TEXT("UEdGraphNode_GrammarNode"), &Z_Registration_Info_UClass_UEdGraphNode_GrammarNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_GrammarNode), 269648892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Nodes_EdGraphNode_GrammarNode_h_979531178(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Nodes_EdGraphNode_GrammarNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Nodes_EdGraphNode_GrammarNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
