// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskCreateKeyLock() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UBaseFlowLayoutTaskCreateKeyLock::StaticRegisterNativesUBaseFlowLayoutTaskCreateKeyLock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskCreateKeyLock);
	UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_NoRegister()
	{
		return UBaseFlowLayoutTaskCreateKeyLock::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LockPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyMarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockMarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LockMarkerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyPath_MetaData[] = {
		{ "Category", "Create Key-Lock" },
		{ "Comment", "/**\n        The path where the key resides\n\n        Variable Name: KeyPath\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ToolTip", "The path where the key resides\n\nVariable Name: KeyPath" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyPath = { "KeyPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateKeyLock, KeyPath), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockPath_MetaData[] = {
		{ "Category", "Create Key-Lock" },
		{ "Comment", "/**\n        The path where the lock resides\n\n        Variable Name: LockPath\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ToolTip", "The path where the lock resides\n\nVariable Name: LockPath" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockPath = { "LockPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateKeyLock, LockPath), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyMarkerName_MetaData[] = {
		{ "Category", "Create Key-Lock" },
		{ "Comment", "/**\n        The Key marker name.  Create this marker in the theme file and add your key asset\n\n        Variable Name: KeyMarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ToolTip", "The Key marker name.  Create this marker in the theme file and add your key asset\n\nVariable Name: KeyMarkerName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyMarkerName = { "KeyMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateKeyLock, KeyMarkerName), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyMarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyMarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockMarkerName_MetaData[] = {
		{ "Category", "Create Key-Lock" },
		{ "Comment", "/**\n        The Lock marker name.  Create this marker in the theme file and add your locked door asset\n\n        Variable Name: LockMarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateKeyLock.h" },
		{ "ToolTip", "The Lock marker name.  Create this marker in the theme file and add your locked door asset\n\nVariable Name: LockMarkerName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockMarkerName = { "LockMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateKeyLock, LockMarkerName), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockMarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockMarkerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_KeyMarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::NewProp_LockMarkerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskCreateKeyLock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::ClassParams = {
		&UBaseFlowLayoutTaskCreateKeyLock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock()
	{
		if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateKeyLock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateKeyLock.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateKeyLock.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskCreateKeyLock>()
	{
		return UBaseFlowLayoutTaskCreateKeyLock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskCreateKeyLock);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateKeyLock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateKeyLock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskCreateKeyLock, UBaseFlowLayoutTaskCreateKeyLock::StaticClass, TEXT("UBaseFlowLayoutTaskCreateKeyLock"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateKeyLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskCreateKeyLock), 3131411863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateKeyLock_h_1721237579(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateKeyLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateKeyLock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
