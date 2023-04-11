// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/SnapMapEditor/SnapMapEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapEditor() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEditorCallbackHandler_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEditorCallbackHandler();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorDebugAppModeSettings_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowEditorDebugAppModeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	void USnapMapEditorCallbackHandler::StaticRegisterNativesUSnapMapEditorCallbackHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapEditorCallbackHandler);
	UClass* Z_Construct_UClass_USnapMapEditorCallbackHandler_NoRegister()
	{
		return USnapMapEditorCallbackHandler::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonEventListener,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/SnapMapEditor/SnapMapEditor.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapEditor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapEditorCallbackHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::ClassParams = {
		&USnapMapEditorCallbackHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapEditorCallbackHandler()
	{
		if (!Z_Registration_Info_UClass_USnapMapEditorCallbackHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapEditorCallbackHandler.OuterSingleton, Z_Construct_UClass_USnapMapEditorCallbackHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapEditorCallbackHandler.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapEditorCallbackHandler>()
	{
		return USnapMapEditorCallbackHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapEditorCallbackHandler);
	void UFlowEditorDebugAppModeSettings::StaticRegisterNativesUFlowEditorDebugAppModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowEditorDebugAppModeSettings);
	UClass* Z_Construct_UClass_UFlowEditorDebugAppModeSettings_NoRegister()
	{
		return UFlowEditorDebugAppModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingVertical_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingVertical;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/SnapMapEditor/SnapMapEditor.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapEditor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingHorizontal_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapEditor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingHorizontal = { "SpacingHorizontal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowEditorDebugAppModeSettings, SpacingHorizontal), METADATA_PARAMS(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingVertical_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapEditor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingVertical = { "SpacingVertical", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowEditorDebugAppModeSettings, SpacingVertical), METADATA_PARAMS(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingVertical_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::NewProp_SpacingVertical,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowEditorDebugAppModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::ClassParams = {
		&UFlowEditorDebugAppModeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowEditorDebugAppModeSettings()
	{
		if (!Z_Registration_Info_UClass_UFlowEditorDebugAppModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowEditorDebugAppModeSettings.OuterSingleton, Z_Construct_UClass_UFlowEditorDebugAppModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowEditorDebugAppModeSettings.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowEditorDebugAppModeSettings>()
	{
		return UFlowEditorDebugAppModeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowEditorDebugAppModeSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapEditorCallbackHandler, USnapMapEditorCallbackHandler::StaticClass, TEXT("USnapMapEditorCallbackHandler"), &Z_Registration_Info_UClass_USnapMapEditorCallbackHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapEditorCallbackHandler), 1925165757U) },
		{ Z_Construct_UClass_UFlowEditorDebugAppModeSettings, UFlowEditorDebugAppModeSettings::StaticClass, TEXT("UFlowEditorDebugAppModeSettings"), &Z_Registration_Info_UClass_UFlowEditorDebugAppModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowEditorDebugAppModeSettings), 2858593771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapEditor_h_3023183036(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
