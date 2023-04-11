// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskFinalize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowLayoutTaskFinalize() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void USnapGridFlowLayoutTaskFinalize::StaticRegisterNativesUSnapGridFlowLayoutTaskFinalize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowLayoutTaskFinalize);
	UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_NoRegister()
	{
		return USnapGridFlowLayoutTaskFinalize::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskFinalize,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_Statics::Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskFinalize.h" },
		{ "MenuPriority", "1500" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskFinalize.h" },
		{ "Title", "Finalize Graph" },
		{ "Tooltip", "Call this to finalize the layout graph" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowLayoutTaskFinalize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_Statics::ClassParams = {
		&USnapGridFlowLayoutTaskFinalize::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowLayoutTaskFinalize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowLayoutTaskFinalize.OuterSingleton, Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowLayoutTaskFinalize.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowLayoutTaskFinalize>()
	{
		return USnapGridFlowLayoutTaskFinalize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowLayoutTaskFinalize);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskFinalize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskFinalize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowLayoutTaskFinalize, USnapGridFlowLayoutTaskFinalize::StaticClass, TEXT("USnapGridFlowLayoutTaskFinalize"), &Z_Registration_Info_UClass_USnapGridFlowLayoutTaskFinalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowLayoutTaskFinalize), 3731306375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskFinalize_h_3286286193(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskFinalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskFinalize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
