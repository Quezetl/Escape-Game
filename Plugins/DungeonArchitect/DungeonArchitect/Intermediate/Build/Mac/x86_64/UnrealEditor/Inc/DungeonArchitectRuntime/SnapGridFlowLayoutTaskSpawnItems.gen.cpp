// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskSpawnItems.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowLayoutTaskSpawnItems() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void USnapGridFlowLayoutTaskSpawnItems::StaticRegisterNativesUSnapGridFlowLayoutTaskSpawnItems()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowLayoutTaskSpawnItems);
	UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_NoRegister()
	{
		return USnapGridFlowLayoutTaskSpawnItems::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskSpawnItems.h" },
		{ "MenuPriority", "1300" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskSpawnItems.h" },
		{ "Title", "Spawn Items" },
		{ "Tooltip", "Spawn items in the layout nodes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowLayoutTaskSpawnItems>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::ClassParams = {
		&USnapGridFlowLayoutTaskSpawnItems::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowLayoutTaskSpawnItems.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowLayoutTaskSpawnItems.OuterSingleton, Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowLayoutTaskSpawnItems.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowLayoutTaskSpawnItems>()
	{
		return USnapGridFlowLayoutTaskSpawnItems::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowLayoutTaskSpawnItems);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskSpawnItems_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems, USnapGridFlowLayoutTaskSpawnItems::StaticClass, TEXT("USnapGridFlowLayoutTaskSpawnItems"), &Z_Registration_Info_UClass_USnapGridFlowLayoutTaskSpawnItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowLayoutTaskSpawnItems), 3138188798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskSpawnItems_h_2537523019(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
