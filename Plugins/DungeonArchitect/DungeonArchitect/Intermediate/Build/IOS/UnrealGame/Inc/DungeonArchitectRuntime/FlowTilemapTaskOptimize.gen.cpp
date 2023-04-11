// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskOptimize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTilemapTaskOptimize() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskOptimize_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskOptimize();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTask();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UFlowTilemapTaskOptimize::StaticRegisterNativesUFlowTilemapTaskOptimize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemapTaskOptimize);
	UClass* Z_Construct_UClass_UFlowTilemapTaskOptimize_NoRegister()
	{
		return UFlowTilemapTaskOptimize::StaticClass();
	}
	struct Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscardDistanceFromLayout_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DiscardDistanceFromLayout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowTilemapTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskOptimize.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskOptimize.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::NewProp_DiscardDistanceFromLayout_MetaData[] = {
		{ "Category", "Optimize" },
		{ "Comment", "/**\n\x09\x09If the distance of a tile from the nearest layout tile is\n\x09\x09greater than the specified amount, it is discarded\n\n\x09\x09Variable Name: DiscardDistanceFromLayout\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskOptimize.h" },
		{ "ToolTip", "If the distance of a tile from the nearest layout tile is\ngreater than the specified amount, it is discarded\n\nVariable Name: DiscardDistanceFromLayout" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::NewProp_DiscardDistanceFromLayout = { "DiscardDistanceFromLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemapTaskOptimize, DiscardDistanceFromLayout), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::NewProp_DiscardDistanceFromLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::NewProp_DiscardDistanceFromLayout_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::NewProp_DiscardDistanceFromLayout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemapTaskOptimize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::ClassParams = {
		&UFlowTilemapTaskOptimize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowTilemapTaskOptimize()
	{
		if (!Z_Registration_Info_UClass_UFlowTilemapTaskOptimize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemapTaskOptimize.OuterSingleton, Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowTilemapTaskOptimize.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowTilemapTaskOptimize>()
	{
		return UFlowTilemapTaskOptimize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemapTaskOptimize);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskOptimize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskOptimize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowTilemapTaskOptimize, UFlowTilemapTaskOptimize::StaticClass, TEXT("UFlowTilemapTaskOptimize"), &Z_Registration_Info_UClass_UFlowTilemapTaskOptimize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemapTaskOptimize), 896594236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskOptimize_h_657624217(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskOptimize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskOptimize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
