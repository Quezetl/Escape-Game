// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrammarExecutionScript() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarExecutionScriptEntryNode_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarExecutionScriptEntryNode();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraphNode();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarExecutionScriptRuleNode_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarExecutionScriptRuleNode();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGraphGrammarProduction_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarExecutionScript_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarExecutionScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarScriptGraph_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuleNodeExecutionMode;
	static UEnum* ERuleNodeExecutionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuleNodeExecutionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuleNodeExecutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ERuleNodeExecutionMode"));
		}
		return Z_Registration_Info_UEnum_ERuleNodeExecutionMode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ERuleNodeExecutionMode>()
	{
		return ERuleNodeExecutionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode_Statics::Enumerators[] = {
		{ "ERuleNodeExecutionMode::RunOnce", (int64)ERuleNodeExecutionMode::RunOnce },
		{ "ERuleNodeExecutionMode::RunWithProbability", (int64)ERuleNodeExecutionMode::RunWithProbability },
		{ "ERuleNodeExecutionMode::Iterate", (int64)ERuleNodeExecutionMode::Iterate },
		{ "ERuleNodeExecutionMode::IterateRange", (int64)ERuleNodeExecutionMode::IterateRange },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode_Statics::Enum_MetaDataParams[] = {
		{ "Iterate.DisplayName", "Iterate N times" },
		{ "Iterate.Name", "ERuleNodeExecutionMode::Iterate" },
		{ "IterateRange.DisplayName", "Iterate anywhere between N-M times" },
		{ "IterateRange.Name", "ERuleNodeExecutionMode::IterateRange" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
		{ "RunOnce.DisplayName", "Run Once" },
		{ "RunOnce.Name", "ERuleNodeExecutionMode::RunOnce" },
		{ "RunWithProbability.DisplayName", "Run with Probability" },
		{ "RunWithProbability.Name", "ERuleNodeExecutionMode::RunWithProbability" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"ERuleNodeExecutionMode",
		"ERuleNodeExecutionMode",
		Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode()
	{
		if (!Z_Registration_Info_UEnum_ERuleNodeExecutionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuleNodeExecutionMode.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuleNodeExecutionMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuleNodeExecutionModeConfig;
class UScriptStruct* FRuleNodeExecutionModeConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuleNodeExecutionModeConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuleNodeExecutionModeConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("RuleNodeExecutionModeConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RuleNodeExecutionModeConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FRuleNodeExecutionModeConfig>()
{
	return FRuleNodeExecutionModeConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunProbability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IterationCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationCountMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IterationCountMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationCountMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IterationCountMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuleNodeExecutionModeConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_RunProbability_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_RunProbability = { "RunProbability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuleNodeExecutionModeConfig, RunProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_RunProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_RunProbability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCount_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCount = { "IterationCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuleNodeExecutionModeConfig, IterationCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMin_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMin = { "IterationCountMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuleNodeExecutionModeConfig, IterationCountMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMax_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMax = { "IterationCountMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuleNodeExecutionModeConfig, IterationCountMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_RunProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewProp_IterationCountMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"RuleNodeExecutionModeConfig",
		sizeof(FRuleNodeExecutionModeConfig),
		alignof(FRuleNodeExecutionModeConfig),
		Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_RuleNodeExecutionModeConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuleNodeExecutionModeConfig.InnerSingleton, Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuleNodeExecutionModeConfig.InnerSingleton;
	}
	void UGrammarExecutionScriptEntryNode::StaticRegisterNativesUGrammarExecutionScriptEntryNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrammarExecutionScriptEntryNode);
	UClass* Z_Construct_UClass_UGrammarExecutionScriptEntryNode_NoRegister()
	{
		return UGrammarExecutionScriptEntryNode::StaticClass();
	}
	struct Z_Construct_UClass_UGrammarExecutionScriptEntryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrammarExecutionScriptEntryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGrammarScriptGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarExecutionScriptEntryNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrammarExecutionScriptEntryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrammarExecutionScriptEntryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrammarExecutionScriptEntryNode_Statics::ClassParams = {
		&UGrammarExecutionScriptEntryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGrammarExecutionScriptEntryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScriptEntryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrammarExecutionScriptEntryNode()
	{
		if (!Z_Registration_Info_UClass_UGrammarExecutionScriptEntryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrammarExecutionScriptEntryNode.OuterSingleton, Z_Construct_UClass_UGrammarExecutionScriptEntryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrammarExecutionScriptEntryNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGrammarExecutionScriptEntryNode>()
	{
		return UGrammarExecutionScriptEntryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrammarExecutionScriptEntryNode);
	void UGrammarExecutionScriptRuleNode::StaticRegisterNativesUGrammarExecutionScriptRuleNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrammarExecutionScriptRuleNode);
	UClass* Z_Construct_UClass_UGrammarExecutionScriptRuleNode_NoRegister()
	{
		return UGrammarExecutionScriptRuleNode::StaticClass();
	}
	struct Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics
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
	UObject* (*const Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGrammarScriptGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_Rule_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarExecutionScriptRuleNode, Rule), Z_Construct_UClass_UGraphGrammarProduction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_Rule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_Rule_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarExecutionScriptRuleNode, ExecutionMode), Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode, METADATA_PARAMS(Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionMode_MetaData)) }; // 2180678085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionConfig = { "ExecutionConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarExecutionScriptRuleNode, ExecutionConfig), Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig, METADATA_PARAMS(Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionConfig_MetaData)) }; // 3242878150
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::NewProp_ExecutionConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrammarExecutionScriptRuleNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::ClassParams = {
		&UGrammarExecutionScriptRuleNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrammarExecutionScriptRuleNode()
	{
		if (!Z_Registration_Info_UClass_UGrammarExecutionScriptRuleNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrammarExecutionScriptRuleNode.OuterSingleton, Z_Construct_UClass_UGrammarExecutionScriptRuleNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrammarExecutionScriptRuleNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGrammarExecutionScriptRuleNode>()
	{
		return UGrammarExecutionScriptRuleNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrammarExecutionScriptRuleNode);
	void UGrammarExecutionScript::StaticRegisterNativesUGrammarExecutionScript()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrammarExecutionScript);
	UClass* Z_Construct_UClass_UGrammarExecutionScript_NoRegister()
	{
		return UGrammarExecutionScript::StaticClass();
	}
	struct Z_Construct_UClass_UGrammarExecutionScript_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScriptGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrammarExecutionScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarExecutionScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EdGraph = { "EdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarExecutionScript, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_ScriptGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_ScriptGraph = { "ScriptGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarExecutionScript, ScriptGraph), Z_Construct_UClass_UGrammarScriptGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_ScriptGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_ScriptGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EntryNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrammarExecutionScript, EntryNode), Z_Construct_UClass_UGrammarExecutionScriptEntryNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EntryNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EntryNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrammarExecutionScript_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EdGraph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_ScriptGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrammarExecutionScript_Statics::NewProp_EntryNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrammarExecutionScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrammarExecutionScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrammarExecutionScript_Statics::ClassParams = {
		&UGrammarExecutionScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrammarExecutionScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScript_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGrammarExecutionScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrammarExecutionScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrammarExecutionScript()
	{
		if (!Z_Registration_Info_UClass_UGrammarExecutionScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrammarExecutionScript.OuterSingleton, Z_Construct_UClass_UGrammarExecutionScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrammarExecutionScript.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGrammarExecutionScript>()
	{
		return UGrammarExecutionScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrammarExecutionScript);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics::EnumInfo[] = {
		{ ERuleNodeExecutionMode_StaticEnum, TEXT("ERuleNodeExecutionMode"), &Z_Registration_Info_UEnum_ERuleNodeExecutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2180678085U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics::ScriptStructInfo[] = {
		{ FRuleNodeExecutionModeConfig::StaticStruct, Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig_Statics::NewStructOps, TEXT("RuleNodeExecutionModeConfig"), &Z_Registration_Info_UScriptStruct_RuleNodeExecutionModeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuleNodeExecutionModeConfig), 3242878150U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrammarExecutionScriptEntryNode, UGrammarExecutionScriptEntryNode::StaticClass, TEXT("UGrammarExecutionScriptEntryNode"), &Z_Registration_Info_UClass_UGrammarExecutionScriptEntryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrammarExecutionScriptEntryNode), 2565667511U) },
		{ Z_Construct_UClass_UGrammarExecutionScriptRuleNode, UGrammarExecutionScriptRuleNode::StaticClass, TEXT("UGrammarExecutionScriptRuleNode"), &Z_Registration_Info_UClass_UGrammarExecutionScriptRuleNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrammarExecutionScriptRuleNode), 1128309779U) },
		{ Z_Construct_UClass_UGrammarExecutionScript, UGrammarExecutionScript::StaticClass, TEXT("UGrammarExecutionScript"), &Z_Registration_Info_UClass_UGrammarExecutionScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrammarExecutionScript), 2829244627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_1219004424(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_GraphGrammar_Script_GrammarExecutionScript_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
