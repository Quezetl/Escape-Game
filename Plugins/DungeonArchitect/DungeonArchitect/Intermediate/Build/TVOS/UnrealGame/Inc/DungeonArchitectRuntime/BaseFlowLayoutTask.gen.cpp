// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTask() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTask();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UBaseFlowLayoutTask::StaticRegisterNativesUBaseFlowLayoutTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTask);
	UClass* Z_Construct_UClass_UBaseFlowLayoutTask_NoRegister()
	{
		return UBaseFlowLayoutTask::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFlowLayoutTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowExecTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTask.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFlowLayoutTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTask_Statics::ClassParams = {
		&UBaseFlowLayoutTask::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFlowLayoutTask()
	{
		if (!Z_Registration_Info_UClass_UBaseFlowLayoutTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTask.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseFlowLayoutTask.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTask>()
	{
		return UBaseFlowLayoutTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTask);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTask, UBaseFlowLayoutTask::StaticClass, TEXT("UBaseFlowLayoutTask"), &Z_Registration_Info_UClass_UBaseFlowLayoutTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTask), 2511766449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTask_h_2858176800(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
