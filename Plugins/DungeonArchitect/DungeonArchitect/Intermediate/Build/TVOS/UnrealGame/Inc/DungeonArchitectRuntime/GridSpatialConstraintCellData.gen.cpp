// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSpatialConstraintCellData() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintCellData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridSpatialCellOccupation;
	static UEnum* EGridSpatialCellOccupation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGridSpatialCellOccupation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGridSpatialCellOccupation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridSpatialCellOccupation"));
		}
		return Z_Registration_Info_UEnum_EGridSpatialCellOccupation.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridSpatialCellOccupation>()
	{
		return EGridSpatialCellOccupation_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enumerators[] = {
		{ "EGridSpatialCellOccupation::DontCare", (int64)EGridSpatialCellOccupation::DontCare },
		{ "EGridSpatialCellOccupation::Occupied", (int64)EGridSpatialCellOccupation::Occupied },
		{ "EGridSpatialCellOccupation::Empty", (int64)EGridSpatialCellOccupation::Empty },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontCare.DisplayName", "Ignore" },
		{ "DontCare.Name", "EGridSpatialCellOccupation::DontCare" },
		{ "Empty.DisplayName", "Empty" },
		{ "Empty.Name", "EGridSpatialCellOccupation::Empty" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h" },
		{ "Occupied.DisplayName", "Occupied" },
		{ "Occupied.Name", "EGridSpatialCellOccupation::Occupied" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EGridSpatialCellOccupation",
		"EGridSpatialCellOccupation",
		Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation()
	{
		if (!Z_Registration_Info_UEnum_EGridSpatialCellOccupation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridSpatialCellOccupation.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGridSpatialCellOccupation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData;
class UScriptStruct* FGridSpatialConstraintCellData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridSpatialConstraintCellData"));
	}
	return Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridSpatialConstraintCellData>()
{
	return FGridSpatialConstraintCellData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_OccupationConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OccupationConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OccupationConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridSpatialConstraintCellData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint = { "OccupationConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridSpatialConstraintCellData, OccupationConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint_MetaData)) }; // 2526705007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"GridSpatialConstraintCellData",
		sizeof(FGridSpatialConstraintCellData),
		alignof(FGridSpatialConstraintCellData),
		Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintCellData()
	{
		if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.InnerSingleton, Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::EnumInfo[] = {
		{ EGridSpatialCellOccupation_StaticEnum, TEXT("EGridSpatialCellOccupation"), &Z_Registration_Info_UEnum_EGridSpatialCellOccupation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2526705007U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::ScriptStructInfo[] = {
		{ FGridSpatialConstraintCellData::StaticStruct, Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewStructOps, TEXT("GridSpatialConstraintCellData"), &Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridSpatialConstraintCellData), 1394707160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_299041386(TEXT("/Script/DungeonArchitectRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
