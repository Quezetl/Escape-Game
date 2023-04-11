// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityModel() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCityCell();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCityBlockDimension();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityModel();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleCityCellType;
	static UEnum* ESimpleCityCellType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleCityCellType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleCityCellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ESimpleCityCellType"));
		}
		return Z_Registration_Info_UEnum_ESimpleCityCellType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESimpleCityCellType>()
	{
		return ESimpleCityCellType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enumerators[] = {
		{ "ESimpleCityCellType::Road", (int64)ESimpleCityCellType::Road },
		{ "ESimpleCityCellType::House", (int64)ESimpleCityCellType::House },
		{ "ESimpleCityCellType::Park", (int64)ESimpleCityCellType::Park },
		{ "ESimpleCityCellType::UserDefined", (int64)ESimpleCityCellType::UserDefined },
		{ "ESimpleCityCellType::Empty", (int64)ESimpleCityCellType::Empty },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Empty.DisplayName", "Empty" },
		{ "Empty.Name", "ESimpleCityCellType::Empty" },
		{ "House.DisplayName", "House" },
		{ "House.Name", "ESimpleCityCellType::House" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
		{ "Park.DisplayName", "Park" },
		{ "Park.Name", "ESimpleCityCellType::Park" },
		{ "Road.DisplayName", "Road" },
		{ "Road.Name", "ESimpleCityCellType::Road" },
		{ "UserDefined.DisplayName", "UserDefined" },
		{ "UserDefined.Name", "ESimpleCityCellType::UserDefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"ESimpleCityCellType",
		"ESimpleCityCellType",
		Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleCityCellType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleCityCellType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleCityCellType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleCityCell;
class UScriptStruct* FSimpleCityCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleCityCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleCityCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCityCell, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SimpleCityCell"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleCityCell.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSimpleCityCell>()
{
	return FSimpleCityCell::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleCityCell_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerNameOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCityCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleCityCell>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCityCell, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCityCell, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_ESimpleCityCellType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType_MetaData)) }; // 1056883457
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCityCell, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_BlockSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCityCell, BlockSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_BlockSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_BlockSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_MarkerNameOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_MarkerNameOverride = { "MarkerNameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCityCell, MarkerNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_MarkerNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_MarkerNameOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleCityCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_CellType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_BlockSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewProp_MarkerNameOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleCityCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SimpleCityCell",
		sizeof(FSimpleCityCell),
		alignof(FSimpleCityCell),
		Z_Construct_UScriptStruct_FSimpleCityCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCityCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleCityCell()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleCityCell.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleCityCell.InnerSingleton, Z_Construct_UScriptStruct_FSimpleCityCell_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleCityCell.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CityBlockDimension;
class UScriptStruct* FCityBlockDimension::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CityBlockDimension.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CityBlockDimension.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCityBlockDimension, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CityBlockDimension"));
	}
	return Z_Registration_Info_UScriptStruct_CityBlockDimension.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCityBlockDimension>()
{
	return FCityBlockDimension::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCityBlockDimension_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityBlockDimension_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCityBlockDimension>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCityBlockDimension, MarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_MarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCityBlockDimension, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCityBlockDimension, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCityBlockDimension, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_Probability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCityBlockDimension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewProp_Probability,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCityBlockDimension_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"CityBlockDimension",
		sizeof(FCityBlockDimension),
		alignof(FCityBlockDimension),
		Z_Construct_UScriptStruct_FCityBlockDimension_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCityBlockDimension_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCityBlockDimension()
	{
		if (!Z_Registration_Info_UScriptStruct_CityBlockDimension.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CityBlockDimension.InnerSingleton, Z_Construct_UScriptStruct_FCityBlockDimension_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CityBlockDimension.InnerSingleton;
	}
	void USimpleCityModel::StaticRegisterNativesUSimpleCityModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityModel);
	UClass* Z_Construct_UClass_USimpleCityModel_NoRegister()
	{
		return USimpleCityModel::StaticClass();
	}
	struct Z_Construct_UClass_USimpleCityModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CityWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CityWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CityLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CityLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleCityModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonModel,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SimpleCity/SimpleCityModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityWidth = { "CityWidth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityModel, CityWidth), METADATA_PARAMS(Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityLength_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityLength = { "CityLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityModel, CityLength), METADATA_PARAMS(Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityLength_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimpleCityCell, METADATA_PARAMS(nullptr, 0) }; // 149776009
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCityModel, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells_MetaData)) }; // 149776009
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCityModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityModel_Statics::NewProp_CityLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityModel_Statics::NewProp_Cells,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleCityModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityModel_Statics::ClassParams = {
		&USimpleCityModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleCityModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleCityModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleCityModel()
	{
		if (!Z_Registration_Info_UClass_USimpleCityModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityModel.OuterSingleton, Z_Construct_UClass_USimpleCityModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleCityModel.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityModel>()
	{
		return USimpleCityModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityModel);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::EnumInfo[] = {
		{ ESimpleCityCellType_StaticEnum, TEXT("ESimpleCityCellType"), &Z_Registration_Info_UEnum_ESimpleCityCellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1056883457U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ScriptStructInfo[] = {
		{ FSimpleCityCell::StaticStruct, Z_Construct_UScriptStruct_FSimpleCityCell_Statics::NewStructOps, TEXT("SimpleCityCell"), &Z_Registration_Info_UScriptStruct_SimpleCityCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleCityCell), 149776009U) },
		{ FCityBlockDimension::StaticStruct, Z_Construct_UScriptStruct_FCityBlockDimension_Statics::NewStructOps, TEXT("CityBlockDimension"), &Z_Registration_Info_UScriptStruct_CityBlockDimension, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCityBlockDimension), 3200831706U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityModel, USimpleCityModel::StaticClass, TEXT("USimpleCityModel"), &Z_Registration_Info_UClass_USimpleCityModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityModel), 3035594566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_1646891870(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityModel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
