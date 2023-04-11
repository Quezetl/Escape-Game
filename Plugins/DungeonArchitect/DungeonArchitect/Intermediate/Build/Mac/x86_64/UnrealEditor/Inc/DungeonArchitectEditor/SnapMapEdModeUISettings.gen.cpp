// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Builders/SnapMap/EditorMode/UI/SnapMapEdModeUISettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapEdModeUISettings() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEdModeUISettings_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEdModeUISettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void USnapMapEdModeUISettings::StaticRegisterNativesUSnapMapEdModeUISettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapEdModeUISettings);
	UClass* Z_Construct_UClass_USnapMapEdModeUISettings_NoRegister()
	{
		return USnapMapEdModeUISettings::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapEdModeUISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeonVisuals_MetaData[];
#endif
		static void NewProp_bNeonVisuals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeonVisuals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapEdModeUISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapEdModeUISettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/SnapMap/EditorMode/UI/SnapMapEdModeUISettings.h" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/EditorMode/UI/SnapMapEdModeUISettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "Comment", "/** Lets you emit your own markers into the scene */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/EditorMode/UI/SnapMapEdModeUISettings.h" },
		{ "ToolTip", "Lets you emit your own markers into the scene" },
	};
#endif
	void Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals_SetBit(void* Obj)
	{
		((USnapMapEdModeUISettings*)Obj)->bNeonVisuals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals = { "bNeonVisuals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapMapEdModeUISettings), &Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapEdModeUISettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapEdModeUISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapEdModeUISettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapEdModeUISettings_Statics::ClassParams = {
		&USnapMapEdModeUISettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapMapEdModeUISettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeUISettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapEdModeUISettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeUISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapEdModeUISettings()
	{
		if (!Z_Registration_Info_UClass_USnapMapEdModeUISettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapEdModeUISettings.OuterSingleton, Z_Construct_UClass_USnapMapEdModeUISettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapEdModeUISettings.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapEdModeUISettings>()
	{
		return USnapMapEdModeUISettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapEdModeUISettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_UI_SnapMapEdModeUISettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_UI_SnapMapEdModeUISettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapEdModeUISettings, USnapMapEdModeUISettings::StaticClass, TEXT("USnapMapEdModeUISettings"), &Z_Registration_Info_UClass_USnapMapEdModeUISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapEdModeUISettings), 1774764981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_UI_SnapMapEdModeUISettings_h_367966658(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_UI_SnapMapEdModeUISettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_UI_SnapMapEdModeUISettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
