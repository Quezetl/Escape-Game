// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/MarkerGenPattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarkerGenPattern() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPatternRule_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPatternRule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScript_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPattern_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPattern();
// End Cross Module References
	void UMarkerGenPatternRule::StaticRegisterNativesUMarkerGenPatternRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenPatternRule);
	UClass* Z_Construct_UClass_UMarkerGenPatternRule_NoRegister()
	{
		return UMarkerGenPatternRule::StaticClass();
	}
	struct Z_Construct_UClass_UMarkerGenPatternRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHintWillInsertAssetHere_MetaData[];
#endif
		static void NewProp_bHintWillInsertAssetHere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHintWillInsertAssetHere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuleScript;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisuallyDominant_MetaData[];
#endif
		static void NewProp_bVisuallyDominant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisuallyDominant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleEdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuleEdGraph;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarkerGenPatternRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenPatternRule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleId = { "RuleId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenPatternRule, RuleId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere_MetaData[] = {
		{ "Category", "Pattern Rule" },
		{ "Comment", "/**\n\x09 * Tell the system that you'll be inserting an art asset at this location\n\x09 * By default, if the rule graph emits a marker (EmitMarker action node), it would know that this position would be occupied by an art asset.\n\x09 * In cases where you'd insert a larger asset, e.g. a 2x2 tile, you'd use the EmitMarker node in one of the 2x2 position and the system\n\x09 * needs to know that the nearby 3 tiles would also be occupied. Go to each one and set this hint so your final result does not have overlaps\n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ToolTip", "Tell the system that you'll be inserting an art asset at this location\nBy default, if the rule graph emits a marker (EmitMarker action node), it would know that this position would be occupied by an art asset.\nIn cases where you'd insert a larger asset, e.g. a 2x2 tile, you'd use the EmitMarker node in one of the 2x2 position and the system\nneeds to know that the nearby 3 tiles would also be occupied. Go to each one and set this hint so your final result does not have overlaps" },
	};
#endif
	void Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere_SetBit(void* Obj)
	{
		((UMarkerGenPatternRule*)Obj)->bHintWillInsertAssetHere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere = { "bHintWillInsertAssetHere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMarkerGenPatternRule), &Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleScript_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleScript = { "RuleScript", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenPatternRule, RuleScript), Z_Construct_UClass_UMGPatternScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleScript_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant_MetaData[] = {
		{ "Category", "Visuals" },
		{ "Comment", "// Make the editor rule block pop out in the scene.   This is purely visual, disable it for blocks whose visuals get in the way and don't really contribute to the pattern you're looking for\n" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ToolTip", "Make the editor rule block pop out in the scene.   This is purely visual, disable it for blocks whose visuals get in the way and don't really contribute to the pattern you're looking for" },
	};
#endif
	void Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant_SetBit(void* Obj)
	{
		((UMarkerGenPatternRule*)Obj)->bVisuallyDominant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant = { "bVisuallyDominant", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMarkerGenPatternRule), &Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenPatternRule, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleEdGraph_MetaData[] = {
		{ "Comment", "/** EdGraph based representation */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ToolTip", "EdGraph based representation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleEdGraph = { "RuleEdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenPatternRule, RuleEdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleEdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleEdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarkerGenPatternRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleScript,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleEdGraph,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarkerGenPatternRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenPatternRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::ClassParams = {
		&UMarkerGenPatternRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMarkerGenPatternRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMarkerGenPatternRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMarkerGenPatternRule()
	{
		if (!Z_Registration_Info_UClass_UMarkerGenPatternRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenPatternRule.OuterSingleton, Z_Construct_UClass_UMarkerGenPatternRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMarkerGenPatternRule.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenPatternRule>()
	{
		return UMarkerGenPatternRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenPatternRule);
	void UMarkerGenPattern::StaticRegisterNativesUMarkerGenPattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenPattern);
	UClass* Z_Construct_UClass_UMarkerGenPattern_NoRegister()
	{
		return UMarkerGenPattern::StaticClass();
	}
	struct Z_Construct_UClass_UMarkerGenPattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarkerGenPattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenPattern_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMarkerGenPatternRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenPattern, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarkerGenPattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarkerGenPattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenPattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenPattern_Statics::ClassParams = {
		&UMarkerGenPattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMarkerGenPattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPattern_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMarkerGenPattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMarkerGenPattern()
	{
		if (!Z_Registration_Info_UClass_UMarkerGenPattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenPattern.OuterSingleton, Z_Construct_UClass_UMarkerGenPattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMarkerGenPattern.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenPattern>()
	{
		return UMarkerGenPattern::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenPattern);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenPattern_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenPattern_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMarkerGenPatternRule, UMarkerGenPatternRule::StaticClass, TEXT("UMarkerGenPatternRule"), &Z_Registration_Info_UClass_UMarkerGenPatternRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenPatternRule), 1467319903U) },
		{ Z_Construct_UClass_UMarkerGenPattern, UMarkerGenPattern::StaticClass, TEXT("UMarkerGenPattern"), &Z_Registration_Info_UClass_UMarkerGenPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenPattern), 748052548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenPattern_h_3834389877(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenPattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenPattern_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
