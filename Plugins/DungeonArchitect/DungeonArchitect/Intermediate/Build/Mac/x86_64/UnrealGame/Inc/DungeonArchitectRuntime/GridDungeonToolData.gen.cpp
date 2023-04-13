// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonToolData() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridToolPaintStrokeData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridToolRectStrokeData();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRectangle();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonToolData_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonToolData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonToolData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridPaintToolCellType;
	static UEnum* EGridPaintToolCellType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGridPaintToolCellType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGridPaintToolCellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridPaintToolCellType"));
		}
		return Z_Registration_Info_UEnum_EGridPaintToolCellType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridPaintToolCellType>()
	{
		return EGridPaintToolCellType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType_Statics::Enumerators[] = {
		{ "EGridPaintToolCellType::Corridor", (int64)EGridPaintToolCellType::Corridor },
		{ "EGridPaintToolCellType::Room", (int64)EGridPaintToolCellType::Room },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Corridor.DisplayName", "Corridor" },
		{ "Corridor.Name", "EGridPaintToolCellType::Corridor" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
		{ "Room.DisplayName", "Room" },
		{ "Room.Name", "EGridPaintToolCellType::Room" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EGridPaintToolCellType",
		"EGridPaintToolCellType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType()
	{
		if (!Z_Registration_Info_UEnum_EGridPaintToolCellType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridPaintToolCellType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGridPaintToolCellType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridToolPaintStrokeData;
class UScriptStruct* FGridToolPaintStrokeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridToolPaintStrokeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridToolPaintStrokeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridToolPaintStrokeData, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridToolPaintStrokeData"));
	}
	return Z_Registration_Info_UScriptStruct_GridToolPaintStrokeData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridToolPaintStrokeData>()
{
	return FGridToolPaintStrokeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridToolPaintStrokeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridToolPaintStrokeData, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridToolPaintStrokeData, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_CellType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_CellType_MetaData)) }; // 506985233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewProp_CellType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"GridToolPaintStrokeData",
		sizeof(FGridToolPaintStrokeData),
		alignof(FGridToolPaintStrokeData),
		Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridToolPaintStrokeData()
	{
		if (!Z_Registration_Info_UScriptStruct_GridToolPaintStrokeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridToolPaintStrokeData.InnerSingleton, Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridToolPaintStrokeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridToolRectStrokeData;
class UScriptStruct* FGridToolRectStrokeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridToolRectStrokeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridToolRectStrokeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridToolRectStrokeData, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridToolRectStrokeData"));
	}
	return Z_Registration_Info_UScriptStruct_GridToolRectStrokeData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridToolRectStrokeData>()
{
	return FGridToolRectStrokeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rectangle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rectangle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridToolRectStrokeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_Rectangle_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_Rectangle = { "Rectangle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridToolRectStrokeData, Rectangle), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_Rectangle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_Rectangle_MetaData)) }; // 946287433
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridToolRectStrokeData, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_CellType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_CellType_MetaData)) }; // 506985233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_Rectangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewProp_CellType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"GridToolRectStrokeData",
		sizeof(FGridToolRectStrokeData),
		alignof(FGridToolRectStrokeData),
		Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridToolRectStrokeData()
	{
		if (!Z_Registration_Info_UScriptStruct_GridToolRectStrokeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridToolRectStrokeData.InnerSingleton, Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridToolRectStrokeData.InnerSingleton;
	}
	void UGridDungeonToolData::StaticRegisterNativesUGridDungeonToolData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonToolData);
	UClass* Z_Construct_UClass_UGridDungeonToolData_NoRegister()
	{
		return UGridDungeonToolData::StaticClass();
	}
	struct Z_Construct_UClass_UGridDungeonToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaintedCells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintedCells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintedCells;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rectangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rectangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rectangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Borders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Borders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Borders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridDungeonToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonToolData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Grid/GridDungeonToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_PaintedCells_Inner = { "PaintedCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGridToolPaintStrokeData, METADATA_PARAMS(nullptr, 0) }; // 651125918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_PaintedCells_MetaData[] = {
		{ "Comment", "// The cells painted by the \"Paint\" tool\n" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
		{ "ToolTip", "The cells painted by the \"Paint\" tool" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_PaintedCells = { "PaintedCells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonToolData, PaintedCells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_PaintedCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_PaintedCells_MetaData)) }; // 651125918
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Rectangles_Inner = { "Rectangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGridToolRectStrokeData, METADATA_PARAMS(nullptr, 0) }; // 3482001602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Rectangles_MetaData[] = {
		{ "Comment", "// The platform rectangles defined in the scene using the \"Rectangle\" tool\n" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
		{ "ToolTip", "The platform rectangles defined in the scene using the \"Rectangle\" tool" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Rectangles = { "Rectangles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonToolData, Rectangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Rectangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Rectangles_MetaData)) }; // 3482001602
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Borders_Inner = { "Borders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGridToolRectStrokeData, METADATA_PARAMS(nullptr, 0) }; // 3482001602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Borders_MetaData[] = {
		{ "Comment", "// The platform borders defined in the scene using the \"Border\" tool\n" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonToolData.h" },
		{ "ToolTip", "The platform borders defined in the scene using the \"Border\" tool" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Borders = { "Borders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonToolData, Borders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Borders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Borders_MetaData)) }; // 3482001602
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonToolData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_PaintedCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_PaintedCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Rectangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Rectangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Borders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonToolData_Statics::NewProp_Borders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridDungeonToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonToolData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonToolData_Statics::ClassParams = {
		&UGridDungeonToolData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridDungeonToolData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonToolData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridDungeonToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridDungeonToolData()
	{
		if (!Z_Registration_Info_UClass_UGridDungeonToolData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonToolData.OuterSingleton, Z_Construct_UClass_UGridDungeonToolData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridDungeonToolData.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonToolData>()
	{
		return UGridDungeonToolData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonToolData);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics::EnumInfo[] = {
		{ EGridPaintToolCellType_StaticEnum, TEXT("EGridPaintToolCellType"), &Z_Registration_Info_UEnum_EGridPaintToolCellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 506985233U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics::ScriptStructInfo[] = {
		{ FGridToolPaintStrokeData::StaticStruct, Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics::NewStructOps, TEXT("GridToolPaintStrokeData"), &Z_Registration_Info_UScriptStruct_GridToolPaintStrokeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridToolPaintStrokeData), 651125918U) },
		{ FGridToolRectStrokeData::StaticStruct, Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics::NewStructOps, TEXT("GridToolRectStrokeData"), &Z_Registration_Info_UScriptStruct_GridToolRectStrokeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridToolRectStrokeData), 3482001602U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonToolData, UGridDungeonToolData::StaticClass, TEXT("UGridDungeonToolData"), &Z_Registration_Info_UClass_UGridDungeonToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonToolData), 1233813940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_58948643(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
