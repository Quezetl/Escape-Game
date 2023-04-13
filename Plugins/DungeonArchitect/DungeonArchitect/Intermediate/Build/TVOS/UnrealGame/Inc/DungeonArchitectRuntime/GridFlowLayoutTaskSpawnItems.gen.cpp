// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskSpawnItems.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutTaskSpawnItems() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings();
// End Cross Module References
	void UGridFlowLayoutTaskSpawnItems::StaticRegisterNativesUGridFlowLayoutTaskSpawnItems()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutTaskSpawnItems);
	UClass* Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_NoRegister()
	{
		return UGridFlowLayoutTaskSpawnItems::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskSpawnItems.h" },
		{ "MenuPriority", "1300" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskSpawnItems.h" },
		{ "Title", "Spawn Items" },
		{ "Tooltip", "Spawn items in the layout nodes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::NewProp_PlacementSettings_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskSpawnItems.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::NewProp_PlacementSettings = { "PlacementSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowLayoutTaskSpawnItems, PlacementSettings), Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings, METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::NewProp_PlacementSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::NewProp_PlacementSettings_MetaData)) }; // 2906296440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::NewProp_PlacementSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutTaskSpawnItems>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::ClassParams = {
		&UGridFlowLayoutTaskSpawnItems::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems()
	{
		if (!Z_Registration_Info_UClass_UGridFlowLayoutTaskSpawnItems.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutTaskSpawnItems.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowLayoutTaskSpawnItems.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowLayoutTaskSpawnItems>()
	{
		return UGridFlowLayoutTaskSpawnItems::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutTaskSpawnItems);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskSpawnItems_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems, UGridFlowLayoutTaskSpawnItems::StaticClass, TEXT("UGridFlowLayoutTaskSpawnItems"), &Z_Registration_Info_UClass_UGridFlowLayoutTaskSpawnItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutTaskSpawnItems), 393292963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskSpawnItems_h_3984756698(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
