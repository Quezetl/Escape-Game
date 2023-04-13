// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/FlowEditor/BaseEditors/SnapGridFlowEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowEditor() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapGridFlowEditorSettings_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapGridFlowEditorSettings();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorSettings();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister();
// End Cross Module References
	void USnapGridFlowEditorSettings::StaticRegisterNativesUSnapGridFlowEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowEditorSettings);
	UClass* Z_Construct_UClass_USnapGridFlowEditorSettings_NoRegister()
	{
		return USnapGridFlowEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleDatabase_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModuleDatabase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportDoorCategories_MetaData[];
#endif
		static void NewProp_bSupportDoorCategories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportDoorCategories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowEditorSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////// Snap Grid Flow Editor ///////////////////\n" },
		{ "IncludePath", "Core/Editors/FlowEditor/BaseEditors/SnapGridFlowEditor.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/BaseEditors/SnapGridFlowEditor.h" },
		{ "ToolTip", "/ Snap Grid Flow Editor /" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_ModuleDatabase_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/BaseEditors/SnapGridFlowEditor.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_ModuleDatabase = { "ModuleDatabase", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowEditorSettings, ModuleDatabase), Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_ModuleDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_ModuleDatabase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_bSupportDoorCategories_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     * Supports door categories. When stitching the modules, only connections with the same door categories will be stitched together\n     * This will require more processing power, use it only when required\n     */" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/BaseEditors/SnapGridFlowEditor.h" },
		{ "ToolTip", "Supports door categories. When stitching the modules, only connections with the same door categories will be stitched together\nThis will require more processing power, use it only when required" },
	};
#endif
	void Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_bSupportDoorCategories_SetBit(void* Obj)
	{
		((USnapGridFlowEditorSettings*)Obj)->bSupportDoorCategories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_bSupportDoorCategories = { "bSupportDoorCategories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapGridFlowEditorSettings), &Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_bSupportDoorCategories_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_bSupportDoorCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_bSupportDoorCategories_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_ModuleDatabase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::NewProp_bSupportDoorCategories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::ClassParams = {
		&USnapGridFlowEditorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowEditorSettings()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowEditorSettings.OuterSingleton, Z_Construct_UClass_USnapGridFlowEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowEditorSettings.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapGridFlowEditorSettings>()
	{
		return USnapGridFlowEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowEditorSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_SnapGridFlowEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_SnapGridFlowEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowEditorSettings, USnapGridFlowEditorSettings::StaticClass, TEXT("USnapGridFlowEditorSettings"), &Z_Registration_Info_UClass_USnapGridFlowEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowEditorSettings), 3619622209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_SnapGridFlowEditor_h_2073370323(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_SnapGridFlowEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_SnapGridFlowEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
