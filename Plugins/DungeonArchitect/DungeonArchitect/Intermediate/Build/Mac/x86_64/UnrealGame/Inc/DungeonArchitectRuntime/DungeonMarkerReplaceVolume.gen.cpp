// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Volumes/DungeonMarkerReplaceVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMarkerReplaceVolume() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerReplaceEntry();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMarkerReplaceVolume_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMarkerReplaceVolume();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MarkerReplaceEntry;
class UScriptStruct* FMarkerReplaceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarkerReplaceEntry, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("MarkerReplaceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FMarkerReplaceEntry>()
{
	return FMarkerReplaceEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReplacementName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarkerReplaceEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMarkerReplaceEntry, MarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_MarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_ReplacementName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_ReplacementName = { "ReplacementName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMarkerReplaceEntry, ReplacementName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_ReplacementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_ReplacementName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewProp_ReplacementName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"MarkerReplaceEntry",
		sizeof(FMarkerReplaceEntry),
		alignof(FMarkerReplaceEntry),
		Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMarkerReplaceEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.InnerSingleton, Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MarkerReplaceEntry.InnerSingleton;
	}
	void ADungeonMarkerReplaceVolume::StaticRegisterNativesADungeonMarkerReplaceVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonMarkerReplaceVolume);
	UClass* Z_Construct_UClass_ADungeonMarkerReplaceVolume_NoRegister()
	{
		return ADungeonMarkerReplaceVolume::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Replacements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Replacements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Replacements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Core/Volumes/DungeonMarkerReplaceVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements_Inner = { "Replacements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMarkerReplaceEntry, METADATA_PARAMS(nullptr, 0) }; // 1649779809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Indicates if the negation should be reversed, i.e. everything outside this volume is negated */" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMarkerReplaceVolume.h" },
		{ "ToolTip", "Indicates if the negation should be reversed, i.e. everything outside this volume is negated" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements = { "Replacements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonMarkerReplaceVolume, Replacements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements_MetaData)) }; // 1649779809
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::NewProp_Replacements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonMarkerReplaceVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::ClassParams = {
		&ADungeonMarkerReplaceVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonMarkerReplaceVolume()
	{
		if (!Z_Registration_Info_UClass_ADungeonMarkerReplaceVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonMarkerReplaceVolume.OuterSingleton, Z_Construct_UClass_ADungeonMarkerReplaceVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonMarkerReplaceVolume.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonMarkerReplaceVolume>()
	{
		return ADungeonMarkerReplaceVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonMarkerReplaceVolume);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ScriptStructInfo[] = {
		{ FMarkerReplaceEntry::StaticStruct, Z_Construct_UScriptStruct_FMarkerReplaceEntry_Statics::NewStructOps, TEXT("MarkerReplaceEntry"), &Z_Registration_Info_UScriptStruct_MarkerReplaceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMarkerReplaceEntry), 1649779809U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonMarkerReplaceVolume, ADungeonMarkerReplaceVolume::StaticClass, TEXT("ADungeonMarkerReplaceVolume"), &Z_Registration_Info_UClass_ADungeonMarkerReplaceVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonMarkerReplaceVolume), 3076005682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_4205564076(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMarkerReplaceVolume_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
