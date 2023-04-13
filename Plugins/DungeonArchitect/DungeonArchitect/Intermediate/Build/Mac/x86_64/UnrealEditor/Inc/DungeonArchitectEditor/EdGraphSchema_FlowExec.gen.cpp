// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraphSchema_FlowExec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_FlowExec() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_FlowExec_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_FlowExec();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode();
// End Cross Module References
	void UEdGraphSchema_FlowExec::StaticRegisterNativesUEdGraphSchema_FlowExec()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_FlowExec);
	UClass* Z_Construct_UClass_UEdGraphSchema_FlowExec_NoRegister()
	{
		return UEdGraphSchema_FlowExec::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_FlowExec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_FlowExec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_FlowExec_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/ExecutionGraph/EdGraphSchema_FlowExec.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraphSchema_FlowExec.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_FlowExec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_FlowExec>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_FlowExec_Statics::ClassParams = {
		&UEdGraphSchema_FlowExec::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_FlowExec_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_FlowExec_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_FlowExec()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_FlowExec.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_FlowExec.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_FlowExec_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_FlowExec.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphSchema_FlowExec>()
	{
		return UEdGraphSchema_FlowExec::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_FlowExec);

static_assert(std::is_polymorphic<FFlowExecSchemaAction_NewNode>() == std::is_polymorphic<FDungeonSchemaAction_NewNode>(), "USTRUCT FFlowExecSchemaAction_NewNode cannot be polymorphic unless super FDungeonSchemaAction_NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode;
class UScriptStruct* FFlowExecSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("FlowExecSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FFlowExecSchemaAction_NewNode>()
{
	return FFlowExecSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/EdGraphSchema_FlowExec.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowExecSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode,
		&NewStructOps,
		"FlowExecSchemaAction_NewNode",
		sizeof(FFlowExecSchemaAction_NewNode),
		alignof(FFlowExecSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_FlowExec_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_FlowExec_h_Statics::ScriptStructInfo[] = {
		{ FFlowExecSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FFlowExecSchemaAction_NewNode_Statics::NewStructOps, TEXT("FlowExecSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_FlowExecSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowExecSchemaAction_NewNode), 3887249009U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_FlowExec_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_FlowExec, UEdGraphSchema_FlowExec::StaticClass, TEXT("UEdGraphSchema_FlowExec"), &Z_Registration_Info_UClass_UEdGraphSchema_FlowExec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_FlowExec), 1150919384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_FlowExec_h_4043733962(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_FlowExec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_FlowExec_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_FlowExec_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_EdGraphSchema_FlowExec_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
