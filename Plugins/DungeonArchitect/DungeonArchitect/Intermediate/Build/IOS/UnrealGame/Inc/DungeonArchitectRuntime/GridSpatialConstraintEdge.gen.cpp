// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSpatialConstraintEdge() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintCellData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridSpatialConstraintEdge_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridSpatialConstraintEdge();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpatialConstraint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData;
class UScriptStruct* FGridSpatialConstraintEdgeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridSpatialConstraintEdgeData"));
	}
	return Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridSpatialConstraintEdgeData>()
{
	return FGridSpatialConstraintEdgeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridSpatialConstraintEdgeData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGridSpatialConstraintCellData, METADATA_PARAMS(nullptr, 0) }; // 1394707160
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridSpatialConstraintEdgeData, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells_MetaData)) }; // 1394707160
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"GridSpatialConstraintEdgeData",
		sizeof(FGridSpatialConstraintEdgeData),
		alignof(FGridSpatialConstraintEdgeData),
		Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData()
	{
		if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.InnerSingleton, Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.InnerSingleton;
	}
	void UGridSpatialConstraintEdge::StaticRegisterNativesUGridSpatialConstraintEdge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridSpatialConstraintEdge);
	UClass* Z_Construct_UClass_UGridSpatialConstraintEdge_NoRegister()
	{
		return UGridSpatialConstraintEdge::StaticClass();
	}
	struct Z_Construct_UClass_UGridSpatialConstraintEdge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonSpatialConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridSpatialConstraintEdge, Configuration), Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData, METADATA_PARAMS(Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::NewProp_Configuration_MetaData)) }; // 2448409162
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::NewProp_Configuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridSpatialConstraintEdge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::ClassParams = {
		&UGridSpatialConstraintEdge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridSpatialConstraintEdge()
	{
		if (!Z_Registration_Info_UClass_UGridSpatialConstraintEdge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridSpatialConstraintEdge.OuterSingleton, Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridSpatialConstraintEdge.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridSpatialConstraintEdge>()
	{
		return UGridSpatialConstraintEdge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSpatialConstraintEdge);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ScriptStructInfo[] = {
		{ FGridSpatialConstraintEdgeData::StaticStruct, Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewStructOps, TEXT("GridSpatialConstraintEdgeData"), &Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridSpatialConstraintEdgeData), 2448409162U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridSpatialConstraintEdge, UGridSpatialConstraintEdge::StaticClass, TEXT("UGridSpatialConstraintEdge"), &Z_Registration_Info_UClass_UGridSpatialConstraintEdge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridSpatialConstraintEdge), 759352431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_3981953300(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
