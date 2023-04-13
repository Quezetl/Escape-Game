// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecRuleNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_ExecRuleNode() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_ExecRuleNode_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_ExecRuleNode();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_ExecNodeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGraphGrammarProduction_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig();
// End Cross Module References
	void UEdGraphNode_ExecRuleNode::StaticRegisterNativesUEdGraphNode_ExecRuleNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_ExecRuleNode);
	UClass* Z_Construct_UClass_UEdGraphNode_ExecRuleNode_NoRegister()
	{
		return UEdGraphNode_ExecRuleNode::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rule_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Rule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode_ExecNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecRuleNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecRuleNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_Rule_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecRuleNode.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_ExecRuleNode, Rule), Z_Construct_UClass_UGraphGrammarProduction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_Rule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_Rule_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionMode_MetaData[] = {
		{ "Category", "Grammar" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecRuleNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_ExecRuleNode, ExecutionMode), Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionMode_MetaData)) }; // 2180678085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecRuleNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionConfig = { "ExecutionConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_ExecRuleNode, ExecutionConfig), Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionConfig_MetaData)) }; // 3242878150
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::NewProp_ExecutionConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_ExecRuleNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::ClassParams = {
		&UEdGraphNode_ExecRuleNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_ExecRuleNode()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_ExecRuleNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_ExecRuleNode.OuterSingleton, Z_Construct_UClass_UEdGraphNode_ExecRuleNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_ExecRuleNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_ExecRuleNode>()
	{
		return UEdGraphNode_ExecRuleNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_ExecRuleNode);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecRuleNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecRuleNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_ExecRuleNode, UEdGraphNode_ExecRuleNode::StaticClass, TEXT("UEdGraphNode_ExecRuleNode"), &Z_Registration_Info_UClass_UEdGraphNode_ExecRuleNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_ExecRuleNode), 2251699766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecRuleNode_h_3800374975(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecRuleNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_ExecRuleNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
