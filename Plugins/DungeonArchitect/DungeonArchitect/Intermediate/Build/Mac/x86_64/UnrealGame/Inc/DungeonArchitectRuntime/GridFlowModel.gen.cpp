// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/GridFlow/GridFlowModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowModel() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowModel();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowAbstractGraph_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemap_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	void UGridFlowModel::StaticRegisterNativesUGridFlowModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowModel);
	UClass* Z_Construct_UClass_UGridFlowModel_NoRegister()
	{
		return UGridFlowModel::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbstractGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbstractGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tilemap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tilemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildTileOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildTileOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWallsAsEdges_MetaData[];
#endif
		static void NewProp_bWallsAsEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallsAsEdges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonModel,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/GridFlow/GridFlowModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowModel_Statics::NewProp_AbstractGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowModel_Statics::NewProp_AbstractGraph = { "AbstractGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowModel, AbstractGraph), Z_Construct_UClass_UGridFlowAbstractGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridFlowModel_Statics::NewProp_AbstractGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::NewProp_AbstractGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowModel_Statics::NewProp_Tilemap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowModel_Statics::NewProp_Tilemap = { "Tilemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowModel, Tilemap), Z_Construct_UClass_UGridFlowTilemap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridFlowModel_Statics::NewProp_Tilemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::NewProp_Tilemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowModel_Statics::NewProp_BuildTileOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowModel_Statics::NewProp_BuildTileOffset = { "BuildTileOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowModel, BuildTileOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UGridFlowModel_Statics::NewProp_BuildTileOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::NewProp_BuildTileOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowModel_Statics::NewProp_bWallsAsEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowModel.h" },
	};
#endif
	void Z_Construct_UClass_UGridFlowModel_Statics::NewProp_bWallsAsEdges_SetBit(void* Obj)
	{
		((UGridFlowModel*)Obj)->bWallsAsEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowModel_Statics::NewProp_bWallsAsEdges = { "bWallsAsEdges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridFlowModel), &Z_Construct_UClass_UGridFlowModel_Statics::NewProp_bWallsAsEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridFlowModel_Statics::NewProp_bWallsAsEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::NewProp_bWallsAsEdges_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowModel_Statics::NewProp_AbstractGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowModel_Statics::NewProp_Tilemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowModel_Statics::NewProp_BuildTileOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowModel_Statics::NewProp_bWallsAsEdges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowModel_Statics::ClassParams = {
		&UGridFlowModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowModel()
	{
		if (!Z_Registration_Info_UClass_UGridFlowModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowModel.OuterSingleton, Z_Construct_UClass_UGridFlowModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowModel.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowModel>()
	{
		return UGridFlowModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowModel);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowModel, UGridFlowModel::StaticClass, TEXT("UGridFlowModel"), &Z_Registration_Info_UClass_UGridFlowModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowModel), 902104820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_2279041833(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
