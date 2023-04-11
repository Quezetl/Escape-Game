// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreatePath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutTaskCreatePath() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreatePath();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings();
// End Cross Module References
	void UGridFlowLayoutTaskCreatePath::StaticRegisterNativesUGridFlowLayoutTaskCreatePath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutTaskCreatePath);
	UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_NoRegister()
	{
		return UGridFlowLayoutTaskCreatePath::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleporterPlacement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeleporterPlacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreatePath.h" },
		{ "MenuPriority", "1200" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreatePath.h" },
		{ "Title", "Create Path" },
		{ "Tooltip", "Create a path on an existing network" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::NewProp_TeleporterPlacement_MetaData[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/**\n        The marker to spawn for the teleporter\n\n        Variable Name: TeleporterMarkerName\n    */" },
		{ "EditCondition", "bEnterThroughTeleporter" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "The marker to spawn for the teleporter\n\nVariable Name: TeleporterMarkerName" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::NewProp_TeleporterPlacement = { "TeleporterPlacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowLayoutTaskCreatePath, TeleporterPlacement), Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings, METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::NewProp_TeleporterPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::NewProp_TeleporterPlacement_MetaData)) }; // 2906296440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::NewProp_TeleporterPlacement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutTaskCreatePath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::ClassParams = {
		&UGridFlowLayoutTaskCreatePath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreatePath()
	{
		if (!Z_Registration_Info_UClass_UGridFlowLayoutTaskCreatePath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutTaskCreatePath.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowLayoutTaskCreatePath.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowLayoutTaskCreatePath>()
	{
		return UGridFlowLayoutTaskCreatePath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutTaskCreatePath);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreatePath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreatePath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutTaskCreatePath, UGridFlowLayoutTaskCreatePath::StaticClass, TEXT("UGridFlowLayoutTaskCreatePath"), &Z_Registration_Info_UClass_UGridFlowLayoutTaskCreatePath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutTaskCreatePath), 1224763596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreatePath_h_406047050(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreatePath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreatePath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
