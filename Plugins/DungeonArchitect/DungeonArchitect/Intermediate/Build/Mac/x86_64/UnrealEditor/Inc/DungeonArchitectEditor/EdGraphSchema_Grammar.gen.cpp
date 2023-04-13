// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/RuleGraph/EdGraphSchema_Grammar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_Grammar() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_Grammar_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_Grammar();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode();
// End Cross Module References
	void UEdGraphSchema_Grammar::StaticRegisterNativesUEdGraphSchema_Grammar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_Grammar);
	UClass* Z_Construct_UClass_UEdGraphSchema_Grammar_NoRegister()
	{
		return UEdGraphSchema_Grammar::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_Grammar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_Grammar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_Grammar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/RuleGraph/EdGraphSchema_Grammar.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/EdGraphSchema_Grammar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_Grammar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_Grammar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_Grammar_Statics::ClassParams = {
		&UEdGraphSchema_Grammar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_Grammar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_Grammar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_Grammar()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_Grammar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_Grammar.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_Grammar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_Grammar.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphSchema_Grammar>()
	{
		return UEdGraphSchema_Grammar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_Grammar);

static_assert(std::is_polymorphic<FGrammarSchemaAction_NewNode>() == std::is_polymorphic<FDungeonSchemaAction_NewNode>(), "USTRUCT FGrammarSchemaAction_NewNode cannot be polymorphic unless super FDungeonSchemaAction_NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrammarSchemaAction_NewNode;
class UScriptStruct* FGrammarSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrammarSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrammarSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("GrammarSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_GrammarSchemaAction_NewNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FGrammarSchemaAction_NewNode>()
{
	return FGrammarSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/EdGraphSchema_Grammar.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrammarSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode,
		&NewStructOps,
		"GrammarSchemaAction_NewNode",
		sizeof(FGrammarSchemaAction_NewNode),
		alignof(FGrammarSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GrammarSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrammarSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GrammarSchemaAction_NewNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraphSchema_Grammar_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraphSchema_Grammar_h_Statics::ScriptStructInfo[] = {
		{ FGrammarSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FGrammarSchemaAction_NewNode_Statics::NewStructOps, TEXT("GrammarSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_GrammarSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrammarSchemaAction_NewNode), 2185426699U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraphSchema_Grammar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_Grammar, UEdGraphSchema_Grammar::StaticClass, TEXT("UEdGraphSchema_Grammar"), &Z_Registration_Info_UClass_UEdGraphSchema_Grammar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_Grammar), 3468680805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraphSchema_Grammar_h_556389090(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraphSchema_Grammar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraphSchema_Grammar_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraphSchema_Grammar_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraphSchema_Grammar_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
