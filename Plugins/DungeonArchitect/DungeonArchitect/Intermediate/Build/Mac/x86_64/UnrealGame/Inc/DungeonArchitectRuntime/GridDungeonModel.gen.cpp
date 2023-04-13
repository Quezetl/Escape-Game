// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonModel() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_FCellType();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCell();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRectangle();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellDoor();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridCellInfo();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStairInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModel();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_DungeonModelBuildState;
	static UEnum* DungeonModelBuildState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_DungeonModelBuildState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_DungeonModelBuildState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonModelBuildState"));
		}
		return Z_Registration_Info_UEnum_DungeonModelBuildState.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<DungeonModelBuildState>()
	{
		return DungeonModelBuildState_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enumerators[] = {
		{ "DungeonModelBuildState::Initial", (int64)DungeonModelBuildState::Initial },
		{ "DungeonModelBuildState::Separation", (int64)DungeonModelBuildState::Separation },
		{ "DungeonModelBuildState::Triangulation", (int64)DungeonModelBuildState::Triangulation },
		{ "DungeonModelBuildState::SpanningTree", (int64)DungeonModelBuildState::SpanningTree },
		{ "DungeonModelBuildState::Corridors", (int64)DungeonModelBuildState::Corridors },
		{ "DungeonModelBuildState::Complete", (int64)DungeonModelBuildState::Complete },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Complete.DisplayName", "Complete" },
		{ "Complete.Name", "DungeonModelBuildState::Complete" },
		{ "Corridors.DisplayName", "Corridors" },
		{ "Corridors.Name", "DungeonModelBuildState::Corridors" },
		{ "Initial.DisplayName", "Initial" },
		{ "Initial.Name", "DungeonModelBuildState::Initial" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
		{ "Separation.DisplayName", "Separation" },
		{ "Separation.Name", "DungeonModelBuildState::Separation" },
		{ "SpanningTree.DisplayName", "SpanningTree" },
		{ "SpanningTree.Name", "DungeonModelBuildState::SpanningTree" },
		{ "Triangulation.DisplayName", "Triangulation" },
		{ "Triangulation.Name", "DungeonModelBuildState::Triangulation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"DungeonModelBuildState",
		"DungeonModelBuildState",
		Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState()
	{
		if (!Z_Registration_Info_UEnum_DungeonModelBuildState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DungeonModelBuildState.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_DungeonModelBuildState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FCellType;
	static UEnum* FCellType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FCellType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FCellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_FCellType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FCellType"));
		}
		return Z_Registration_Info_UEnum_FCellType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<FCellType>()
	{
		return FCellType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_FCellType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_FCellType_Statics::Enumerators[] = {
		{ "FCellType::Room", (int64)FCellType::Room },
		{ "FCellType::Corridor", (int64)FCellType::Corridor },
		{ "FCellType::CorridorPadding", (int64)FCellType::CorridorPadding },
		{ "FCellType::Unknown", (int64)FCellType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_FCellType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Corridor.DisplayName", "Corridor" },
		{ "Corridor.Name", "FCellType::Corridor" },
		{ "CorridorPadding.DisplayName", "CorridorPadding" },
		{ "CorridorPadding.Name", "FCellType::CorridorPadding" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
		{ "Room.DisplayName", "Room" },
		{ "Room.Name", "FCellType::Room" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "FCellType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_FCellType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"FCellType",
		"FCellType",
		Z_Construct_UEnum_DungeonArchitectRuntime_FCellType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_FCellType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_FCellType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_FCellType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_FCellType()
	{
		if (!Z_Registration_Info_UEnum_FCellType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FCellType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_FCellType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FCellType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Cell;
class UScriptStruct* FCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Cell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Cell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCell, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("Cell"));
	}
	return Z_Registration_Info_UScriptStruct_Cell.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCell>()
{
	return FCell::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCell_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefined_MetaData[];
#endif
		static void NewProp_UserDefined_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UserDefined;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectedRooms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedRooms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedRooms;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FixedRoomConnections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedRoomConnections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FixedRoomConnections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AdjacentCells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentCells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdjacentCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCell>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, Bounds), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_Bounds_MetaData)) }; // 946287433
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_FCellType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_CellType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_CellType_MetaData)) }; // 1492273055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_UserDefined_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCell_Statics::NewProp_UserDefined_SetBit(void* Obj)
	{
		((FCell*)Obj)->UserDefined = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_UserDefined = { "UserDefined", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCell), &Z_Construct_UScriptStruct_FCell_Statics::NewProp_UserDefined_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_UserDefined_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_UserDefined_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_ClusterId_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_ClusterId = { "ClusterId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, ClusterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_ClusterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_ClusterId_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_ConnectedRooms_Inner = { "ConnectedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_ConnectedRooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_ConnectedRooms = { "ConnectedRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, ConnectedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_ConnectedRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_ConnectedRooms_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_FixedRoomConnections_Inner = { "FixedRoomConnections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_FixedRoomConnections_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_FixedRoomConnections = { "FixedRoomConnections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, FixedRoomConnections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_FixedRoomConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_FixedRoomConnections_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_AdjacentCells_Inner = { "AdjacentCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCell_Statics::NewProp_AdjacentCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCell_Statics::NewProp_AdjacentCells = { "AdjacentCells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCell, AdjacentCells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::NewProp_AdjacentCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::NewProp_AdjacentCells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_CellType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_UserDefined,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_ClusterId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_ConnectedRooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_ConnectedRooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_FixedRoomConnections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_FixedRoomConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_AdjacentCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCell_Statics::NewProp_AdjacentCells,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"Cell",
		sizeof(FCell),
		alignof(FCell),
		Z_Construct_UScriptStruct_FCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCell()
	{
		if (!Z_Registration_Info_UScriptStruct_Cell.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Cell.InnerSingleton, Z_Construct_UScriptStruct_FCell_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Cell.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellDoor;
class UScriptStruct* FCellDoor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellDoor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellDoor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellDoor, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellDoor"));
	}
	return Z_Registration_Info_UScriptStruct_CellDoor.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellDoor>()
{
	return FCellDoor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCellDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCellDoor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCellDoor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellDoor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellDoor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"CellDoor",
		sizeof(FCellDoor),
		alignof(FCellDoor),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCellDoor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellDoor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCellDoor()
	{
		if (!Z_Registration_Info_UScriptStruct_CellDoor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellDoor.InnerSingleton, Z_Construct_UScriptStruct_FCellDoor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CellDoor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridCellInfo;
class UScriptStruct* FGridCellInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridCellInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridCellInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridCellInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridCellInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GridCellInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridCellInfo>()
{
	return FGridCellInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridCellInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainsDoor_MetaData[];
#endif
		static void NewProp_ContainsDoor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ContainsDoor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridCellInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Holds metadata about each occupied grid in the cell for quick reference from a lookup */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
		{ "ToolTip", "Holds metadata about each occupied grid in the cell for quick reference from a lookup" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridCellInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellId_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellId = { "CellId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridCellInfo, CellId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridCellInfo, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_FCellType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellType_MetaData)) }; // 1492273055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_ContainsDoor_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_ContainsDoor_SetBit(void* Obj)
	{
		((FGridCellInfo*)Obj)->ContainsDoor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_ContainsDoor = { "ContainsDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGridCellInfo), &Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_ContainsDoor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_ContainsDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_ContainsDoor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridCellInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_CellType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewProp_ContainsDoor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridCellInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"GridCellInfo",
		sizeof(FGridCellInfo),
		alignof(FGridCellInfo),
		Z_Construct_UScriptStruct_FGridCellInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridCellInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridCellInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GridCellInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridCellInfo.InnerSingleton, Z_Construct_UScriptStruct_FGridCellInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridCellInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StairInfo;
class UScriptStruct* FStairInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StairInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StairInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStairInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("StairInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StairInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FStairInfo>()
{
	return FStairInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStairInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCell_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OwnerCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedToCell_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectedToCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStairInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStairInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStairInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_OwnerCell_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_OwnerCell = { "OwnerCell", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStairInfo, OwnerCell), METADATA_PARAMS(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_OwnerCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_OwnerCell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_ConnectedToCell_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_ConnectedToCell = { "ConnectedToCell", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStairInfo, ConnectedToCell), METADATA_PARAMS(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_ConnectedToCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_ConnectedToCell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStairInfo, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStairInfo, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_IPosition_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_IPosition = { "IPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStairInfo, IPosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_IPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_IPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStairInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_OwnerCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_ConnectedToCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStairInfo_Statics::NewProp_IPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStairInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"StairInfo",
		sizeof(FStairInfo),
		alignof(FStairInfo),
		Z_Construct_UScriptStruct_FStairInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStairInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStairInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStairInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStairInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_StairInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StairInfo.InnerSingleton, Z_Construct_UScriptStruct_FStairInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StairInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UGridDungeonModel::execGetGridCellLookup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridCellInfo*)Z_Param__Result=P_THIS->GetGridCellLookup(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	void UGridDungeonModel::StaticRegisterNativesUGridDungeonModel()
	{
		UClass* Class = UGridDungeonModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGridCellLookup", &UGridDungeonModel::execGetGridCellLookup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics
	{
		struct GridDungeonModel_eventGetGridCellLookup_Parms
		{
			int32 x;
			int32 y;
			FGridCellInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonModel_eventGetGridCellLookup_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonModel_eventGetGridCellLookup_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonModel_eventGetGridCellLookup_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridCellInfo, METADATA_PARAMS(nullptr, 0) }; // 1661337245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonModel, nullptr, "GetGridCellLookup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::GridDungeonModel_eventGetGridCellLookup_Parms), Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonModel);
	UClass* Z_Construct_UClass_UGridDungeonModel_NoRegister()
	{
		return UGridDungeonModel::StaticClass();
	}
	struct Z_Construct_UClass_UGridDungeonModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stairs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stairs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stairs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridDungeonModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonModel,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridDungeonModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridDungeonModel_GetGridCellLookup, "GetGridCellLookup" }, // 1868183773
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09* \n\x09*/" },
		{ "IncludePath", "Builders/Grid/GridDungeonModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState = { "BuildState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonModel, BuildState), Z_Construct_UEnum_DungeonArchitectRuntime_DungeonModelBuildState, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState_MetaData)) }; // 4222657760
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCell, METADATA_PARAMS(nullptr, 0) }; // 1107040313
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonModel, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells_MetaData)) }; // 1107040313
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCellDoor, METADATA_PARAMS(nullptr, 0) }; // 625907176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonModel, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors_MetaData)) }; // 625907176
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs_Inner = { "Stairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStairInfo, METADATA_PARAMS(nullptr, 0) }; // 678527234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs = { "Stairs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonModel, Stairs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs_MetaData)) }; // 678527234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_BuildState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Cells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Doors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonModel_Statics::NewProp_Stairs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridDungeonModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonModel_Statics::ClassParams = {
		&UGridDungeonModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridDungeonModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridDungeonModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridDungeonModel()
	{
		if (!Z_Registration_Info_UClass_UGridDungeonModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonModel.OuterSingleton, Z_Construct_UClass_UGridDungeonModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridDungeonModel.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonModel>()
	{
		return UGridDungeonModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonModel);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::EnumInfo[] = {
		{ DungeonModelBuildState_StaticEnum, TEXT("DungeonModelBuildState"), &Z_Registration_Info_UEnum_DungeonModelBuildState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4222657760U) },
		{ FCellType_StaticEnum, TEXT("FCellType"), &Z_Registration_Info_UEnum_FCellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1492273055U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ScriptStructInfo[] = {
		{ FCell::StaticStruct, Z_Construct_UScriptStruct_FCell_Statics::NewStructOps, TEXT("Cell"), &Z_Registration_Info_UScriptStruct_Cell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCell), 1107040313U) },
		{ FCellDoor::StaticStruct, Z_Construct_UScriptStruct_FCellDoor_Statics::NewStructOps, TEXT("CellDoor"), &Z_Registration_Info_UScriptStruct_CellDoor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellDoor), 625907176U) },
		{ FGridCellInfo::StaticStruct, Z_Construct_UScriptStruct_FGridCellInfo_Statics::NewStructOps, TEXT("GridCellInfo"), &Z_Registration_Info_UScriptStruct_GridCellInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridCellInfo), 1661337245U) },
		{ FStairInfo::StaticStruct, Z_Construct_UScriptStruct_FStairInfo_Statics::NewStructOps, TEXT("StairInfo"), &Z_Registration_Info_UScriptStruct_StairInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStairInfo), 678527234U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonModel, UGridDungeonModel::StaticClass, TEXT("UGridDungeonModel"), &Z_Registration_Info_UClass_UGridDungeonModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonModel), 416949806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_2803140059(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
