// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapAsset() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapAsset_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGraphGrammar_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void USnapMapAsset::StaticRegisterNativesUSnapMapAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapAsset);
	UClass* Z_Construct_UClass_USnapMapAsset_NoRegister()
	{
		return USnapMapAsset::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissionGrammar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MissionGrammar;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewDungeonConfigCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewDungeonConfigCopy;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This class represents the data model for the dungeon flow graph */" },
		{ "IncludePath", "Builders/SnapMap/SnapMapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapAsset.h" },
		{ "ToolTip", "This class represents the data model for the dungeon flow graph" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapAsset_Statics::NewProp_MissionGrammar_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapAsset_Statics::NewProp_MissionGrammar = { "MissionGrammar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapAsset, MissionGrammar), Z_Construct_UClass_UGraphGrammar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapMapAsset_Statics::NewProp_MissionGrammar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAsset_Statics::NewProp_MissionGrammar_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapAsset_Statics::NewProp_PreviewDungeonConfigCopy_MetaData[] = {
		{ "Comment", "// Save a copy of the editor's preview dungeon so when it is reopened, the config is restored\n" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapAsset.h" },
		{ "ToolTip", "Save a copy of the editor's preview dungeon so when it is reopened, the config is restored" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapAsset_Statics::NewProp_PreviewDungeonConfigCopy = { "PreviewDungeonConfigCopy", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapAsset, PreviewDungeonConfigCopy), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapMapAsset_Statics::NewProp_PreviewDungeonConfigCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAsset_Statics::NewProp_PreviewDungeonConfigCopy_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapAsset_Statics::NewProp_MissionGrammar,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapAsset_Statics::NewProp_PreviewDungeonConfigCopy,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapAsset_Statics::ClassParams = {
		&USnapMapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapMapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapAsset()
	{
		if (!Z_Registration_Info_UClass_USnapMapAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapAsset.OuterSingleton, Z_Construct_UClass_USnapMapAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapAsset.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapAsset>()
	{
		return USnapMapAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapAsset);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapAsset, USnapMapAsset::StaticClass, TEXT("USnapMapAsset"), &Z_Registration_Info_UClass_USnapMapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapAsset), 1906765307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapAsset_h_3029265973(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
