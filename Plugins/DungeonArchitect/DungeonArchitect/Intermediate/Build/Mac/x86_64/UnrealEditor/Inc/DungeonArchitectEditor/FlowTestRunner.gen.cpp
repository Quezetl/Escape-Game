// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/FlowEditor/FlowTestRunner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTestRunner() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowPerfEditorSettings_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowPerfEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UFlowPerfEditorSettings::StaticRegisterNativesUFlowPerfEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowPerfEditorSettings);
	UClass* Z_Construct_UClass_UFlowPerfEditorSettings_NoRegister()
	{
		return UFlowPerfEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFlowPerfEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTests_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRetries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRetries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassRetryThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PassRetryThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningRetryThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WarningRetryThreshold;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageCollectEveryNTests_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GarbageCollectEveryNTests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowPerfEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowPerfEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////// Flow Test Runner Framework ///////////////////// \n" },
		{ "IncludePath", "Core/Editors/FlowEditor/FlowTestRunner.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
		{ "ToolTip", "Flow Test Runner Framework" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_NumTests_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_NumTests = { "NumTests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, NumTests), METADATA_PARAMS(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_NumTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_NumTests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_MaxRetries_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_MaxRetries = { "MaxRetries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, MaxRetries), METADATA_PARAMS(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_MaxRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_MaxRetries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_PassRetryThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_PassRetryThreshold = { "PassRetryThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, PassRetryThreshold), METADATA_PARAMS(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_PassRetryThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_PassRetryThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_WarningRetryThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_WarningRetryThreshold = { "WarningRetryThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, WarningRetryThreshold), METADATA_PARAMS(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_WarningRetryThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_WarningRetryThreshold_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_ValueProp = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_Key_KeyProp = { "ParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, ParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** \n     Have the editor free up resources after every N tests\n     If you run a total of 2000 tests, and the specified value is 100,\n     the memory will be freed up at test number 100, 200, 300, and so on\n    */" },
		{ "ModuleRelativePath", "Public/Core/Editors/FlowEditor/FlowTestRunner.h" },
		{ "ToolTip", "Have the editor free up resources after every N tests\nIf you run a total of 2000 tests, and the specified value is 100,\nthe memory will be freed up at test number 100, 200, 300, and so on" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests = { "GarbageCollectEveryNTests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowPerfEditorSettings, GarbageCollectEveryNTests), METADATA_PARAMS(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowPerfEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_NumTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_MaxRetries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_PassRetryThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_WarningRetryThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_ParameterOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowPerfEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowPerfEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowPerfEditorSettings_Statics::ClassParams = {
		&UFlowPerfEditorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowPerfEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowPerfEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowPerfEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UFlowPerfEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowPerfEditorSettings.OuterSingleton, Z_Construct_UClass_UFlowPerfEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowPerfEditorSettings.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowPerfEditorSettings>()
	{
		return UFlowPerfEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowPerfEditorSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowTestRunner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowTestRunner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowPerfEditorSettings, UFlowPerfEditorSettings::StaticClass, TEXT("UFlowPerfEditorSettings"), &Z_Registration_Info_UClass_UFlowPerfEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowPerfEditorSettings), 2753050852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowTestRunner_h_1520248821(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowTestRunner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_FlowTestRunner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
