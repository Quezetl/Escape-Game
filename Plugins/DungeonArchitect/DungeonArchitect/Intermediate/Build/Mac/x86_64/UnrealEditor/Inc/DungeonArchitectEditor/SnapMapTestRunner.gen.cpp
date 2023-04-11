// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapTestRunner() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapPerfEditorSettings_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapPerfEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapModuleDatabase_NoRegister();
// End Cross Module References
	void USnapMapPerfEditorSettings::StaticRegisterNativesUSnapMapPerfEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapPerfEditorSettings);
	UClass* Z_Construct_UClass_USnapMapPerfEditorSettings_NoRegister()
	{
		return USnapMapPerfEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapPerfEditorSettings_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageCollectEveryNTests_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GarbageCollectEveryNTests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleDatabase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModuleDatabase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowModuleRotations_MetaData[];
#endif
		static void NewProp_bAllowModuleRotations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowModuleRotations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTestContraction_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionTestContraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxProcessingTimeSecs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProcessingTimeSecs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_NumTests_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_NumTests = { "NumTests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, NumTests), METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_NumTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_NumTests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxRetries_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxRetries = { "MaxRetries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, MaxRetries), METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxRetries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_PassRetryThreshold_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_PassRetryThreshold = { "PassRetryThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, PassRetryThreshold), METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_PassRetryThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_PassRetryThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_WarningRetryThreshold_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_WarningRetryThreshold = { "WarningRetryThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, WarningRetryThreshold), METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_WarningRetryThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_WarningRetryThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests_MetaData[] = {
		{ "Category", "Test Settings" },
		{ "Comment", "/** \n    Have the editor free up resources after every N tests\n    If you run a total of 2000 tests, and the specified value is 100,\n    the memory will be freed up at test number 100, 200, 300, and so on\n    */" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
		{ "ToolTip", "Have the editor free up resources after every N tests\nIf you run a total of 2000 tests, and the specified value is 100,\nthe memory will be freed up at test number 100, 200, 300, and so on" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests = { "GarbageCollectEveryNTests", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, GarbageCollectEveryNTests), METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_ModuleDatabase_MetaData[] = {
		{ "Category", "Snap Config" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_ModuleDatabase = { "ModuleDatabase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, ModuleDatabase), Z_Construct_UClass_USnapMapModuleDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_ModuleDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_ModuleDatabase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_bAllowModuleRotations_MetaData[] = {
		{ "Category", "Snap Config" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
#endif
	void Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_bAllowModuleRotations_SetBit(void* Obj)
	{
		((USnapMapPerfEditorSettings*)Obj)->bAllowModuleRotations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_bAllowModuleRotations = { "bAllowModuleRotations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapMapPerfEditorSettings), &Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_bAllowModuleRotations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_bAllowModuleRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_bAllowModuleRotations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_CollisionTestContraction_MetaData[] = {
		{ "Category", "Snap Config" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_CollisionTestContraction = { "CollisionTestContraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, CollisionTestContraction), METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_CollisionTestContraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_CollisionTestContraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxProcessingTimeSecs_MetaData[] = {
		{ "Category", "Snap Config" },
		{ "Comment", "/** The max time allotted per test before it is considered a failure */" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/SnapMapTestRunner.h" },
		{ "ToolTip", "The max time allotted per test before it is considered a failure" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxProcessingTimeSecs = { "MaxProcessingTimeSecs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapMapPerfEditorSettings, MaxProcessingTimeSecs), METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxProcessingTimeSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxProcessingTimeSecs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_NumTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxRetries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_PassRetryThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_WarningRetryThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_GarbageCollectEveryNTests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_ModuleDatabase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_bAllowModuleRotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_CollisionTestContraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::NewProp_MaxProcessingTimeSecs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapPerfEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::ClassParams = {
		&USnapMapPerfEditorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapPerfEditorSettings()
	{
		if (!Z_Registration_Info_UClass_USnapMapPerfEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapPerfEditorSettings.OuterSingleton, Z_Construct_UClass_USnapMapPerfEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapPerfEditorSettings.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapPerfEditorSettings>()
	{
		return USnapMapPerfEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapPerfEditorSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapTestRunner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapTestRunner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapPerfEditorSettings, USnapMapPerfEditorSettings::StaticClass, TEXT("USnapMapPerfEditorSettings"), &Z_Registration_Info_UClass_USnapMapPerfEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapPerfEditorSettings), 652682118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapTestRunner_h_3333061635(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapTestRunner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_SnapMapTestRunner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
