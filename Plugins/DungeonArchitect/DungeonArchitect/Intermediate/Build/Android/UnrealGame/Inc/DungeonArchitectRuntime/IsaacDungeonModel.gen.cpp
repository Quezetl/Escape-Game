// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacDungeonModel() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoomTile();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoomLayout();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoom();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacDoor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonModel();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsaacRoomType;
	static UEnum* EIsaacRoomType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIsaacRoomType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIsaacRoomType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EIsaacRoomType"));
		}
		return Z_Registration_Info_UEnum_EIsaacRoomType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EIsaacRoomType>()
	{
		return EIsaacRoomType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enumerators[] = {
		{ "EIsaacRoomType::Normal", (int64)EIsaacRoomType::Normal },
		{ "EIsaacRoomType::Spawn", (int64)EIsaacRoomType::Spawn },
		{ "EIsaacRoomType::Treasure", (int64)EIsaacRoomType::Treasure },
		{ "EIsaacRoomType::Boss", (int64)EIsaacRoomType::Boss },
		{ "EIsaacRoomType::Exit", (int64)EIsaacRoomType::Exit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boss.DisplayName", "Boss" },
		{ "Boss.Name", "EIsaacRoomType::Boss" },
		{ "Exit.DisplayName", "Exit" },
		{ "Exit.Name", "EIsaacRoomType::Exit" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EIsaacRoomType::Normal" },
		{ "Spawn.DisplayName", "Spawn" },
		{ "Spawn.Name", "EIsaacRoomType::Spawn" },
		{ "Treasure.DisplayName", "Treasure" },
		{ "Treasure.Name", "EIsaacRoomType::Treasure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EIsaacRoomType",
		"EIsaacRoomType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType()
	{
		if (!Z_Registration_Info_UEnum_EIsaacRoomType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsaacRoomType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIsaacRoomType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsaacRoomTileType;
	static UEnum* EIsaacRoomTileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIsaacRoomTileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIsaacRoomTileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EIsaacRoomTileType"));
		}
		return Z_Registration_Info_UEnum_EIsaacRoomTileType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EIsaacRoomTileType>()
	{
		return EIsaacRoomTileType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enumerators[] = {
		{ "EIsaacRoomTileType::Floor", (int64)EIsaacRoomTileType::Floor },
		{ "EIsaacRoomTileType::Door", (int64)EIsaacRoomTileType::Door },
		{ "EIsaacRoomTileType::Empty", (int64)EIsaacRoomTileType::Empty },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Door.DisplayName", "Door" },
		{ "Door.Name", "EIsaacRoomTileType::Door" },
		{ "Empty.DisplayName", "Empty" },
		{ "Empty.Name", "EIsaacRoomTileType::Empty" },
		{ "Floor.DisplayName", "Floor" },
		{ "Floor.Name", "EIsaacRoomTileType::Floor" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EIsaacRoomTileType",
		"EIsaacRoomTileType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType()
	{
		if (!Z_Registration_Info_UEnum_EIsaacRoomTileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsaacRoomTileType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIsaacRoomTileType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsaacRoomTile;
class UScriptStruct* FIsaacRoomTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacRoomTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsaacRoomTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsaacRoomTile, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("IsaacRoomTile"));
	}
	return Z_Registration_Info_UScriptStruct_IsaacRoomTile.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FIsaacRoomTile>()
{
	return FIsaacRoomTile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsaacRoomTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_tileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_tileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsaacRoomTile>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType = { "tileType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoomTile, tileType), Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomTileType, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType_MetaData)) }; // 2275809687
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewProp_tileType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"IsaacRoomTile",
		sizeof(FIsaacRoomTile),
		alignof(FIsaacRoomTile),
		Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoomTile()
	{
		if (!Z_Registration_Info_UScriptStruct_IsaacRoomTile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsaacRoomTile.InnerSingleton, Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsaacRoomTile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsaacRoomLayout;
class UScriptStruct* FIsaacRoomLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacRoomLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsaacRoomLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsaacRoomLayout, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("IsaacRoomLayout"));
	}
	return Z_Registration_Info_UScriptStruct_IsaacRoomLayout.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FIsaacRoomLayout>()
{
	return FIsaacRoomLayout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsaacRoomLayout>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIsaacRoomTile, METADATA_PARAMS(nullptr, 0) }; // 469609953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoomLayout, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles_MetaData)) }; // 469609953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoomLayout, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoomLayout, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Tiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"IsaacRoomLayout",
		sizeof(FIsaacRoomLayout),
		alignof(FIsaacRoomLayout),
		Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoomLayout()
	{
		if (!Z_Registration_Info_UScriptStruct_IsaacRoomLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsaacRoomLayout.InnerSingleton, Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsaacRoomLayout.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsaacRoom;
class UScriptStruct* FIsaacRoom::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacRoom.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsaacRoom.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsaacRoom, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("IsaacRoom"));
	}
	return Z_Registration_Info_UScriptStruct_IsaacRoom.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FIsaacRoom>()
{
	return FIsaacRoom::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsaacRoom_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layout;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AdjacentRooms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentRooms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdjacentRooms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoom_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsaacRoom>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoom, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoom, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoom, RoomType), Z_Construct_UEnum_DungeonArchitectRuntime_EIsaacRoomType, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType_MetaData)) }; // 1782818487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Layout_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoom, Layout), Z_Construct_UScriptStruct_FIsaacRoomLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Layout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Layout_MetaData)) }; // 2131364743
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms_Inner = { "AdjacentRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms = { "AdjacentRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoom, AdjacentRooms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions_Inner = { "DoorPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions = { "DoorPositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacRoom, DoorPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsaacRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_RoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_Layout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_AdjacentRooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewProp_DoorPositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsaacRoom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"IsaacRoom",
		sizeof(FIsaacRoom),
		alignof(FIsaacRoom),
		Z_Construct_UScriptStruct_FIsaacRoom_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacRoom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacRoom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoom()
	{
		if (!Z_Registration_Info_UScriptStruct_IsaacRoom.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsaacRoom.InnerSingleton, Z_Construct_UScriptStruct_FIsaacRoom_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsaacRoom.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsaacDoor;
class UScriptStruct* FIsaacDoor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsaacDoor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsaacDoor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsaacDoor, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("IsaacDoor"));
	}
	return Z_Registration_Info_UScriptStruct_IsaacDoor.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FIsaacDoor>()
{
	return FIsaacDoor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsaacDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_roomA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_roomA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_roomB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_roomB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ratio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacDoor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsaacDoor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomA_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomA = { "roomA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacDoor, roomA), METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomB_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomB = { "roomB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacDoor, roomB), METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_ratio_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_ratio = { "ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIsaacDoor, ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_ratio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsaacDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_roomB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewProp_ratio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsaacDoor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"IsaacDoor",
		sizeof(FIsaacDoor),
		alignof(FIsaacDoor),
		Z_Construct_UScriptStruct_FIsaacDoor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacDoor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsaacDoor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsaacDoor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsaacDoor()
	{
		if (!Z_Registration_Info_UScriptStruct_IsaacDoor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsaacDoor.InnerSingleton, Z_Construct_UScriptStruct_FIsaacDoor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsaacDoor.InnerSingleton;
	}
	DEFINE_FUNCTION(UIsaacDungeonModel::execRemoveStylingFromRoom)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RoomId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStylingFromRoom(Z_Param_RoomId);
		P_NATIVE_END;
	}
	void UIsaacDungeonModel::StaticRegisterNativesUIsaacDungeonModel()
	{
		UClass* Class = UIsaacDungeonModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveStylingFromRoom", &UIsaacDungeonModel::execRemoveStylingFromRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics
	{
		struct IsaacDungeonModel_eventRemoveStylingFromRoom_Parms
		{
			int32 RoomId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoomId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonModel_eventRemoveStylingFromRoom_Parms, RoomId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::NewProp_RoomId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonModel, nullptr, "RemoveStylingFromRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::IsaacDungeonModel_eventRemoveStylingFromRoom_Parms), Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacDungeonModel);
	UClass* Z_Construct_UClass_UIsaacDungeonModel_NoRegister()
	{
		return UIsaacDungeonModel::StaticClass();
	}
	struct Z_Construct_UClass_UIsaacDungeonModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rooms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsaacDungeonModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonModel,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsaacDungeonModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsaacDungeonModel_RemoveStylingFromRoom, "RemoveStylingFromRoom" }, // 1515675020
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09* \n\x09*/" },
		{ "IncludePath", "Builders/Isaac/IsaacDungeonModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIsaacRoom, METADATA_PARAMS(nullptr, 0) }; // 1396880240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsaacDungeonModel, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms_MetaData)) }; // 1396880240
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIsaacDoor, METADATA_PARAMS(nullptr, 0) }; // 3535723716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsaacDungeonModel, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors_MetaData)) }; // 3535723716
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsaacDungeonModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Rooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonModel_Statics::NewProp_Doors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsaacDungeonModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacDungeonModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacDungeonModel_Statics::ClassParams = {
		&UIsaacDungeonModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIsaacDungeonModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsaacDungeonModel()
	{
		if (!Z_Registration_Info_UClass_UIsaacDungeonModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacDungeonModel.OuterSingleton, Z_Construct_UClass_UIsaacDungeonModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsaacDungeonModel.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacDungeonModel>()
	{
		return UIsaacDungeonModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacDungeonModel);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::EnumInfo[] = {
		{ EIsaacRoomType_StaticEnum, TEXT("EIsaacRoomType"), &Z_Registration_Info_UEnum_EIsaacRoomType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1782818487U) },
		{ EIsaacRoomTileType_StaticEnum, TEXT("EIsaacRoomTileType"), &Z_Registration_Info_UEnum_EIsaacRoomTileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2275809687U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ScriptStructInfo[] = {
		{ FIsaacRoomTile::StaticStruct, Z_Construct_UScriptStruct_FIsaacRoomTile_Statics::NewStructOps, TEXT("IsaacRoomTile"), &Z_Registration_Info_UScriptStruct_IsaacRoomTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsaacRoomTile), 469609953U) },
		{ FIsaacRoomLayout::StaticStruct, Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics::NewStructOps, TEXT("IsaacRoomLayout"), &Z_Registration_Info_UScriptStruct_IsaacRoomLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsaacRoomLayout), 2131364743U) },
		{ FIsaacRoom::StaticStruct, Z_Construct_UScriptStruct_FIsaacRoom_Statics::NewStructOps, TEXT("IsaacRoom"), &Z_Registration_Info_UScriptStruct_IsaacRoom, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsaacRoom), 1396880240U) },
		{ FIsaacDoor::StaticStruct, Z_Construct_UScriptStruct_FIsaacDoor_Statics::NewStructOps, TEXT("IsaacDoor"), &Z_Registration_Info_UScriptStruct_IsaacDoor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsaacDoor), 3535723716U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacDungeonModel, UIsaacDungeonModel::StaticClass, TEXT("UIsaacDungeonModel"), &Z_Registration_Info_UClass_UIsaacDungeonModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacDungeonModel), 2927488469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_2679515302(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
