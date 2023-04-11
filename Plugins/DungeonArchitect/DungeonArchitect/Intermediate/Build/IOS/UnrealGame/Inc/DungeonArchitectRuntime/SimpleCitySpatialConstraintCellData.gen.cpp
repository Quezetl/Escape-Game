// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraintCellData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCitySpatialConstraintCellData() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleCitySpatialCellOccupation;
	static UEnum* ESimpleCitySpatialCellOccupation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleCitySpatialCellOccupation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleCitySpatialCellOccupation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ESimpleCitySpatialCellOccupation"));
		}
		return Z_Registration_Info_UEnum_ESimpleCitySpatialCellOccupation.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESimpleCitySpatialCellOccupation>()
	{
		return ESimpleCitySpatialCellOccupation_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation_Statics::Enumerators[] = {
		{ "ESimpleCitySpatialCellOccupation::Ignore", (int64)ESimpleCitySpatialCellOccupation::Ignore },
		{ "ESimpleCitySpatialCellOccupation::Road", (int64)ESimpleCitySpatialCellOccupation::Road },
		{ "ESimpleCitySpatialCellOccupation::House", (int64)ESimpleCitySpatialCellOccupation::House },
		{ "ESimpleCitySpatialCellOccupation::Park", (int64)ESimpleCitySpatialCellOccupation::Park },
		{ "ESimpleCitySpatialCellOccupation::Outskirts", (int64)ESimpleCitySpatialCellOccupation::Outskirts },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "House.DisplayName", "House" },
		{ "House.Name", "ESimpleCitySpatialCellOccupation::House" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "ESimpleCitySpatialCellOccupation::Ignore" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraintCellData.h" },
		{ "Outskirts.DisplayName", "Outskirts" },
		{ "Outskirts.Name", "ESimpleCitySpatialCellOccupation::Outskirts" },
		{ "Park.DisplayName", "Park" },
		{ "Park.Name", "ESimpleCitySpatialCellOccupation::Park" },
		{ "Road.DisplayName", "Road" },
		{ "Road.Name", "ESimpleCitySpatialCellOccupation::Road" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"ESimpleCitySpatialCellOccupation",
		"ESimpleCitySpatialCellOccupation",
		Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation()
	{
		if (!Z_Registration_Info_UEnum_ESimpleCitySpatialCellOccupation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleCitySpatialCellOccupation.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleCitySpatialCellOccupation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraintCellData;
class UScriptStruct* FSimpleCitySpatialConstraintCellData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraintCellData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraintCellData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SimpleCitySpatialConstraintCellData"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraintCellData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSimpleCitySpatialConstraintCellData>()
{
	return FSimpleCitySpatialConstraintCellData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraintCellData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleCitySpatialConstraintCellData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::NewProp_OccupationConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::NewProp_OccupationConstraint_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraintCellData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::NewProp_OccupationConstraint = { "OccupationConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCitySpatialConstraintCellData, OccupationConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCitySpatialCellOccupation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::NewProp_OccupationConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::NewProp_OccupationConstraint_MetaData)) }; // 2429066286
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::NewProp_OccupationConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::NewProp_OccupationConstraint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SimpleCitySpatialConstraintCellData",
		sizeof(FSimpleCitySpatialConstraintCellData),
		alignof(FSimpleCitySpatialConstraintCellData),
		Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraintCellData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraintCellData.InnerSingleton, Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraintCellData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h_Statics::EnumInfo[] = {
		{ ESimpleCitySpatialCellOccupation_StaticEnum, TEXT("ESimpleCitySpatialCellOccupation"), &Z_Registration_Info_UEnum_ESimpleCitySpatialCellOccupation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2429066286U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h_Statics::ScriptStructInfo[] = {
		{ FSimpleCitySpatialConstraintCellData::StaticStruct, Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData_Statics::NewStructOps, TEXT("SimpleCitySpatialConstraintCellData"), &Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraintCellData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleCitySpatialConstraintCellData), 1367798497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h_1427985175(TEXT("/Script/DungeonArchitectRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraintCellData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
