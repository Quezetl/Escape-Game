// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/PatternScript/PatternScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternScript() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScript_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_Result_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_OnPass_NoRegister();
// End Cross Module References
	void UMGPatternScript::StaticRegisterNativesUMGPatternScript()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScript);
	UClass* Z_Construct_UClass_UMGPatternScript_NoRegister()
	{
		return UMGPatternScript::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultNode_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ResultNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassEventNode_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PassEventNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGPatternScript_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMGPatternScriptNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScript_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGPatternScript_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScript, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMGPatternScript_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScript_Statics::NewProp_Nodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScript_Statics::NewProp_ResultNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScript.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMGPatternScript_Statics::NewProp_ResultNode = { "ResultNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScript, ResultNode), Z_Construct_UClass_UMGPatternScriptNode_Result_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMGPatternScript_Statics::NewProp_ResultNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScript_Statics::NewProp_ResultNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScript_Statics::NewProp_PassEventNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScript.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMGPatternScript_Statics::NewProp_PassEventNode = { "PassEventNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScript, PassEventNode), Z_Construct_UClass_UMGPatternScriptNode_OnPass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMGPatternScript_Statics::NewProp_PassEventNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScript_Statics::NewProp_PassEventNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScript_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScript_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScript_Statics::NewProp_ResultNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScript_Statics::NewProp_PassEventNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScript_Statics::ClassParams = {
		&UMGPatternScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGPatternScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScript_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScript()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScript.OuterSingleton, Z_Construct_UClass_UMGPatternScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScript.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScript>()
	{
		return UMGPatternScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScript);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternScript, UMGPatternScript::StaticClass, TEXT("UMGPatternScript"), &Z_Registration_Info_UClass_UMGPatternScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScript), 3988269789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScript_h_2464259927(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
