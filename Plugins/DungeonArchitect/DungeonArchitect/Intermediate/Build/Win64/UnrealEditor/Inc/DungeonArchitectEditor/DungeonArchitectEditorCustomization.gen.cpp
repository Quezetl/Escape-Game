// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Customizations/DungeonArchitectEditorCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonArchitectEditorCustomization() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapGridFlowModuleDBImportSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void USnapGridFlowModuleDBImportSettings::StaticRegisterNativesUSnapGridFlowModuleDBImportSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModuleDBImportSettings);
	UClass* Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_NoRegister()
	{
		return USnapGridFlowModuleDBImportSettings::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRotation_MetaData[];
#endif
		static void NewProp_bAllowRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Customizations/DungeonArchitectEditorCustomization.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Customizations/DungeonArchitectEditorCustomization.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Customizations/DungeonArchitectEditorCustomization.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModuleDBImportSettings, Category), METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Customizations/DungeonArchitectEditorCustomization.h" },
	};
#endif
	void Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation_SetBit(void* Obj)
	{
		((USnapGridFlowModuleDBImportSettings*)Obj)->bAllowRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation = { "bAllowRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapGridFlowModuleDBImportSettings), &Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModuleDBImportSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::ClassParams = {
		&USnapGridFlowModuleDBImportSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowModuleDBImportSettings()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowModuleDBImportSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModuleDBImportSettings.OuterSingleton, Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowModuleDBImportSettings.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapGridFlowModuleDBImportSettings>()
	{
		return USnapGridFlowModuleDBImportSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModuleDBImportSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Customizations_DungeonArchitectEditorCustomization_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Customizations_DungeonArchitectEditorCustomization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowModuleDBImportSettings, USnapGridFlowModuleDBImportSettings::StaticClass, TEXT("USnapGridFlowModuleDBImportSettings"), &Z_Registration_Info_UClass_USnapGridFlowModuleDBImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModuleDBImportSettings), 1131160111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Customizations_DungeonArchitectEditorCustomization_h_3810433761(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Customizations_DungeonArchitectEditorCustomization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Customizations_DungeonArchitectEditorCustomization_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
