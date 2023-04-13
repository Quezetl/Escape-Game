// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/SnapMapEditor/AppModes/GraphDesignAppMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphDesignAppMode() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void USnapMapEditor_GraphDesignAppModeSettings::StaticRegisterNativesUSnapMapEditor_GraphDesignAppModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapEditor_GraphDesignAppModeSettings);
	UClass* Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_NoRegister()
	{
		return USnapMapEditor_GraphDesignAppModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeSeed_MetaData[];
#endif
		static void NewProp_bRandomizeSeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoZoomResultGraph_MetaData[];
#endif
		static void NewProp_bAutoZoomResultGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoZoomResultGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/SnapMapEditor/AppModes/GraphDesignAppMode.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/GraphDesignAppMode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/GraphDesignAppMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapEditor_GraphDesignAppModeSettings, Seed), METADATA_PARAMS(Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bRandomizeSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/GraphDesignAppMode.h" },
	};
#endif
	void Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bRandomizeSeed_SetBit(void* Obj)
	{
		((USnapMapEditor_GraphDesignAppModeSettings*)Obj)->bRandomizeSeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bRandomizeSeed = { "bRandomizeSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapMapEditor_GraphDesignAppModeSettings), &Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bRandomizeSeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bRandomizeSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bRandomizeSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bAutoZoomResultGraph_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Automatically zoom's and fits the result graph when clicking build */" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/GraphDesignAppMode.h" },
		{ "ToolTip", "Automatically zoom's and fits the result graph when clicking build" },
	};
#endif
	void Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bAutoZoomResultGraph_SetBit(void* Obj)
	{
		((USnapMapEditor_GraphDesignAppModeSettings*)Obj)->bAutoZoomResultGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bAutoZoomResultGraph = { "bAutoZoomResultGraph", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapMapEditor_GraphDesignAppModeSettings), &Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bAutoZoomResultGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bAutoZoomResultGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bAutoZoomResultGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bRandomizeSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::NewProp_bAutoZoomResultGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapEditor_GraphDesignAppModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::ClassParams = {
		&USnapMapEditor_GraphDesignAppModeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings()
	{
		if (!Z_Registration_Info_UClass_USnapMapEditor_GraphDesignAppModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapEditor_GraphDesignAppModeSettings.OuterSingleton, Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapEditor_GraphDesignAppModeSettings.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapEditor_GraphDesignAppModeSettings>()
	{
		return USnapMapEditor_GraphDesignAppModeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapEditor_GraphDesignAppModeSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_GraphDesignAppMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_GraphDesignAppMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapEditor_GraphDesignAppModeSettings, USnapMapEditor_GraphDesignAppModeSettings::StaticClass, TEXT("USnapMapEditor_GraphDesignAppModeSettings"), &Z_Registration_Info_UClass_USnapMapEditor_GraphDesignAppModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapEditor_GraphDesignAppModeSettings), 3955952662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_GraphDesignAppMode_h_691184797(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_GraphDesignAppMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_GraphDesignAppMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
