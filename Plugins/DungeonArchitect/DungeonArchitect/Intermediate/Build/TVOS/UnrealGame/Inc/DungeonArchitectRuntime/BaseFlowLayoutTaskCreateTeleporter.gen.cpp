// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskCreateTeleporter() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UBaseFlowLayoutTaskCreateTeleporter::StaticRegisterNativesUBaseFlowLayoutTaskCreateTeleporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskCreateTeleporter);
	UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_NoRegister()
	{
		return UBaseFlowLayoutTaskCreateTeleporter::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FirstPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SecondPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleporterMarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TeleporterMarkerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_FirstPathName_MetaData[] = {
		{ "Category", "Create Teleporter" },
		{ "Comment", "/**\n       The name of the path the first linked item should be spawned to\n\n        Variable Name: FirstItemPathName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
		{ "ToolTip", "The name of the path the first linked item should be spawned to\n\n Variable Name: FirstItemPathName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_FirstPathName = { "FirstPathName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateTeleporter, FirstPathName), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_FirstPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_FirstPathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_SecondPathName_MetaData[] = {
		{ "Category", "Create Teleporter" },
		{ "Comment", "/**\n        The name of the path the second linked item should be spawned to\n\n        Variable Name: SecondItemPathName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
		{ "ToolTip", "The name of the path the second linked item should be spawned to\n\nVariable Name: SecondItemPathName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_SecondPathName = { "SecondPathName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateTeleporter, SecondPathName), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_SecondPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_SecondPathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_TeleporterMarkerName_MetaData[] = {
		{ "Category", "Create Teleporter" },
		{ "Comment", "/**\n        The marker name to spawn for the first linked item\n\n        Variable Name: FirstItemMarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
		{ "ToolTip", "The marker name to spawn for the first linked item\n\nVariable Name: FirstItemMarkerName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_TeleporterMarkerName = { "TeleporterMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateTeleporter, TeleporterMarkerName), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_TeleporterMarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_TeleporterMarkerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_FirstPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_SecondPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_TeleporterMarkerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskCreateTeleporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::ClassParams = {
		&UBaseFlowLayoutTaskCreateTeleporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter()
	{
		if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateTeleporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateTeleporter.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateTeleporter.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskCreateTeleporter>()
	{
		return UBaseFlowLayoutTaskCreateTeleporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskCreateTeleporter);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateTeleporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateTeleporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter, UBaseFlowLayoutTaskCreateTeleporter::StaticClass, TEXT("UBaseFlowLayoutTaskCreateTeleporter"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateTeleporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskCreateTeleporter), 2974452518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateTeleporter_h_2464685361(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateTeleporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskCreateTeleporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
