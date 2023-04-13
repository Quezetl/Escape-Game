// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/GraphGrammar/Script/GrammarRuleScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrammarRuleScript() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarRuleScriptGraphNode_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarRuleScriptGraphNode();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraphNode();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarNodeType_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarRuleScript_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarRuleScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraph_NoRegister();
// End Cross Module References
	void UGrammarRuleScriptGraphNode::StaticRegisterNativesUGrammarRuleScriptGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrammarRuleScriptGraphNode);
	UClass* Z_Construct_UClass_UGrammarRuleScriptGraphNode_NoRegister()
	{
		return UGrammarRuleScriptGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGrammarScriptGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_TypeInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_TypeInfo = { "TypeInfo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarRuleScriptGraphNode, TypeInfo), Z_Construct_UClass_UGrammarNodeType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_TypeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_TypeInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarRuleScriptGraphNode, Index), METADATA_PARAMS(Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_bDisplayIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
	};
#endif
	void Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_bDisplayIndex_SetBit(void* Obj)
	{
		((UGrammarRuleScriptGraphNode*)Obj)->bDisplayIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_bDisplayIndex = { "bDisplayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrammarRuleScriptGraphNode), &Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_bDisplayIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_bDisplayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_bDisplayIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_TypeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::NewProp_bDisplayIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrammarRuleScriptGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::ClassParams = {
		&UGrammarRuleScriptGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrammarRuleScriptGraphNode()
	{
		if (!Z_Registration_Info_UClass_UGrammarRuleScriptGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrammarRuleScriptGraphNode.OuterSingleton, Z_Construct_UClass_UGrammarRuleScriptGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrammarRuleScriptGraphNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGrammarRuleScriptGraphNode>()
	{
		return UGrammarRuleScriptGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrammarRuleScriptGraphNode);
	void UGrammarRuleScript::StaticRegisterNativesUGrammarRuleScript()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrammarRuleScript);
	UClass* Z_Construct_UClass_UGrammarRuleScript_NoRegister()
	{
		return UGrammarRuleScript::StaticClass();
	}
	struct Z_Construct_UClass_UGrammarRuleScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EdGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScriptGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrammarRuleScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarRuleScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_EdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_EdGraph = { "EdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarRuleScript, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_EdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_EdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarRuleScript, Weight), METADATA_PARAMS(Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_ScriptGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarRuleScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_ScriptGraph = { "ScriptGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarRuleScript, ScriptGraph), Z_Construct_UClass_UGrammarScriptGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_ScriptGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_ScriptGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrammarRuleScript_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_EdGraph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarRuleScript_Statics::NewProp_ScriptGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrammarRuleScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrammarRuleScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrammarRuleScript_Statics::ClassParams = {
		&UGrammarRuleScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrammarRuleScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScript_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGrammarRuleScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarRuleScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrammarRuleScript()
	{
		if (!Z_Registration_Info_UClass_UGrammarRuleScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrammarRuleScript.OuterSingleton, Z_Construct_UClass_UGrammarRuleScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrammarRuleScript.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGrammarRuleScript>()
	{
		return UGrammarRuleScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrammarRuleScript);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarRuleScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarRuleScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrammarRuleScriptGraphNode, UGrammarRuleScriptGraphNode::StaticClass, TEXT("UGrammarRuleScriptGraphNode"), &Z_Registration_Info_UClass_UGrammarRuleScriptGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrammarRuleScriptGraphNode), 303485297U) },
		{ Z_Construct_UClass_UGrammarRuleScript, UGrammarRuleScript::StaticClass, TEXT("UGrammarRuleScript"), &Z_Registration_Info_UClass_UGrammarRuleScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrammarRuleScript), 611281878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarRuleScript_h_1312456759(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarRuleScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarRuleScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
