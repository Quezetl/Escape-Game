// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/DungeonThemeAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonThemeAsset() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPropTypeData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEditorViewportProperties_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClusterThemeInfo();
// End Cross Module References
	void UDungeonThemeAsset::StaticRegisterNativesUDungeonThemeAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonThemeAsset);
	UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister()
	{
		return UDungeonThemeAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonThemeAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Props_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Props_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Props;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerGenerationModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerGenerationModel;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewViewportProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewViewportProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonThemeAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonThemeAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A Dungeon Theme asset lets you design the look and feel of you dungeon with an intuitive graph based approach */" },
		{ "IncludePath", "Frameworks/ThemeEngine/DungeonThemeAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
		{ "ToolTip", "A Dungeon Theme asset lets you design the look and feel of you dungeon with an intuitive graph based approach" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props_Inner = { "Props", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropTypeData, METADATA_PARAMS(nullptr, 0) }; // 2548122646
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props = { "Props", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonThemeAsset, Props), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props_MetaData)) }; // 2548122646
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_MarkerGenerationModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_MarkerGenerationModel = { "MarkerGenerationModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonThemeAsset, MarkerGenerationModel), Z_Construct_UClass_UMarkerGenModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_MarkerGenerationModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_MarkerGenerationModel_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_UpdateGraph_MetaData[] = {
		{ "Comment", "/** EdGraph based representation */" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
		{ "ToolTip", "EdGraph based representation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_UpdateGraph = { "UpdateGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonThemeAsset, UpdateGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_UpdateGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_UpdateGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_PreviewViewportProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_PreviewViewportProperties = { "PreviewViewportProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonThemeAsset, PreviewViewportProperties), Z_Construct_UClass_UDungeonEditorViewportProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_PreviewViewportProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_PreviewViewportProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonThemeAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_MarkerGenerationModel,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_UpdateGraph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_PreviewViewportProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonThemeAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonThemeAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonThemeAsset_Statics::ClassParams = {
		&UDungeonThemeAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonThemeAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonThemeAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonThemeAsset()
	{
		if (!Z_Registration_Info_UClass_UDungeonThemeAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonThemeAsset.OuterSingleton, Z_Construct_UClass_UDungeonThemeAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonThemeAsset.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonThemeAsset>()
	{
		return UDungeonThemeAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonThemeAsset);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterThemeInfo;
class UScriptStruct* FClusterThemeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterThemeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterThemeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterThemeInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ClusterThemeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterThemeInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FClusterThemeInfo>()
{
	return FClusterThemeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClusterThemeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterThemeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClusterThemeName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Themes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Themes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Themes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nA dungeon builder can cluster different parts of the dungeon into groups where different themes can be applied to each group\nThis registry contains the theme registration for each group\n*/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
		{ "ToolTip", "A dungeon builder can cluster different parts of the dungeon into groups where different themes can be applied to each group\nThis registry contains the theme registration for each group" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterThemeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_ClusterThemeName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_ClusterThemeName = { "ClusterThemeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterThemeInfo, ClusterThemeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_ClusterThemeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_ClusterThemeName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes_Inner = { "Themes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonThemeAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes = { "Themes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterThemeInfo, Themes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_ClusterThemeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"ClusterThemeInfo",
		sizeof(FClusterThemeInfo),
		alignof(FClusterThemeInfo),
		Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClusterThemeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ClusterThemeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterThemeInfo.InnerSingleton, Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClusterThemeInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ScriptStructInfo[] = {
		{ FClusterThemeInfo::StaticStruct, Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewStructOps, TEXT("ClusterThemeInfo"), &Z_Registration_Info_UScriptStruct_ClusterThemeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterThemeInfo), 1941195972U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonThemeAsset, UDungeonThemeAsset::StaticClass, TEXT("UDungeonThemeAsset"), &Z_Registration_Info_UClass_UDungeonThemeAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonThemeAsset), 2586651091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_1393514016(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
