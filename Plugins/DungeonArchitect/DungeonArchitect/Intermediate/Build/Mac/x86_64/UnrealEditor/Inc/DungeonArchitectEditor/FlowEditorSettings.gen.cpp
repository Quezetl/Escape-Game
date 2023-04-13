// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/FlowEditor/FlowEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowEditorSettings() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorSettings_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UFlowEditorSettings::StaticRegisterNativesUFlowEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowEditorSettings);
	UClass* Z_Construct_UClass_UFlowEditorSettings_NoRegister()
	{
		return UFlowEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFlowEditorSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeSeedOnBuild_MetaData[];
#endif
		static void NewProp_bRandomizeSeedOnBuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeSeedOnBuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBuildRetries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBuildRetries;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTimeoutsRetriesAllowed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTimeoutsRetriesAllowed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/FlowEditor/FlowEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowEditorSettings, Seed), METADATA_PARAMS(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild_SetBit(void* Obj)
	{
		((UFlowEditorSettings*)Obj)->bRandomizeSeedOnBuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild = { "bRandomizeSeedOnBuild", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowEditorSettings), &Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_MaxBuildRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_MaxBuildRetries = { "MaxBuildRetries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowEditorSettings, MaxBuildRetries), METADATA_PARAMS(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_MaxBuildRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_MaxBuildRetries_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_ValueProp = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_Key_KeyProp = { "ParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowEditorSettings, ParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_NumTimeoutsRetriesAllowed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The number of timeouts allowed while building the dungeon with multiple retries */" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowEditorSettings.h" },
		{ "ToolTip", "The number of timeouts allowed while building the dungeon with multiple retries" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_NumTimeoutsRetriesAllowed = { "NumTimeoutsRetriesAllowed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowEditorSettings, NumTimeoutsRetriesAllowed), METADATA_PARAMS(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_NumTimeoutsRetriesAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_NumTimeoutsRetriesAllowed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_bRandomizeSeedOnBuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_MaxBuildRetries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_ParameterOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorSettings_Statics::NewProp_NumTimeoutsRetriesAllowed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowEditorSettings_Statics::ClassParams = {
		&UFlowEditorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UFlowEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowEditorSettings.OuterSingleton, Z_Construct_UClass_UFlowEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowEditorSettings.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowEditorSettings>()
	{
		return UFlowEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowEditorSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowEditorSettings, UFlowEditorSettings::StaticClass, TEXT("UFlowEditorSettings"), &Z_Registration_Info_UClass_UFlowEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowEditorSettings), 1610309488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowEditorSettings_h_436521126(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
