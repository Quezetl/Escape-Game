// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_Grammar() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_Grammar_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_Grammar();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UEdGraph_Grammar::StaticRegisterNativesUEdGraph_Grammar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_Grammar);
	UClass* Z_Construct_UClass_UEdGraph_Grammar_NoRegister()
	{
		return UEdGraph_Grammar::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraph_Grammar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraph_Grammar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Grammar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraph_Grammar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_Grammar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_Grammar_Statics::ClassParams = {
		&UEdGraph_Grammar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Grammar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Grammar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraph_Grammar()
	{
		if (!Z_Registration_Info_UClass_UEdGraph_Grammar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_Grammar.OuterSingleton, Z_Construct_UClass_UEdGraph_Grammar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraph_Grammar.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraph_Grammar>()
	{
		return UEdGraph_Grammar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_Grammar);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraph_Grammar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraph_Grammar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph_Grammar, UEdGraph_Grammar::StaticClass, TEXT("UEdGraph_Grammar"), &Z_Registration_Info_UClass_UEdGraph_Grammar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_Grammar), 2436216921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraph_Grammar_h_1782481606(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraph_Grammar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraph_Grammar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
