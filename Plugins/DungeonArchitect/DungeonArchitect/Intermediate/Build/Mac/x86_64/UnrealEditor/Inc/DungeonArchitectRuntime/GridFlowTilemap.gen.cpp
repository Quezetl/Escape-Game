// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemap() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemap_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemap();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemap();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapUserData_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapUserData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFANodeTilemapDomainData_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFANodeTilemapDomainData();
// End Cross Module References
	void UGridFlowTilemap::StaticRegisterNativesUGridFlowTilemap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemap);
	UClass* Z_Construct_UClass_UGridFlowTilemap_NoRegister()
	{
		return UGridFlowTilemap::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowTilemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowTilemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowTilemap,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////// Grid Flow Implementation Structs ///////////////////////////////////////\n" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ToolTip", "Grid Flow Implementation Structs" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowTilemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemap_Statics::ClassParams = {
		&UGridFlowTilemap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowTilemap()
	{
		if (!Z_Registration_Info_UClass_UGridFlowTilemap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemap.OuterSingleton, Z_Construct_UClass_UGridFlowTilemap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowTilemap.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemap>()
	{
		return UGridFlowTilemap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemap);
	void UGridFlowTilemapUserData::StaticRegisterNativesUGridFlowTilemapUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapUserData);
	UClass* Z_Construct_UClass_UGridFlowTilemapUserData_NoRegister()
	{
		return UGridFlowTilemapUserData::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowTilemapUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWallsAsEdges_MetaData[];
#endif
		static void NewProp_bWallsAsEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallsAsEdges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowTilemapUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapUserData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif
	void Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges_SetBit(void* Obj)
	{
		((UGridFlowTilemapUserData*)Obj)->bWallsAsEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges = { "bWallsAsEdges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridFlowTilemapUserData), &Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowTilemapUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapUserData_Statics::NewProp_bWallsAsEdges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowTilemapUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapUserData_Statics::ClassParams = {
		&UGridFlowTilemapUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowTilemapUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapUserData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowTilemapUserData()
	{
		if (!Z_Registration_Info_UClass_UGridFlowTilemapUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapUserData.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowTilemapUserData.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapUserData>()
	{
		return UGridFlowTilemapUserData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapUserData);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType;
	static UEnum* EGridFlowAbstractNodeRoomType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridFlowAbstractNodeRoomType"));
		}
		return Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridFlowAbstractNodeRoomType>()
	{
		return EGridFlowAbstractNodeRoomType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enumerators[] = {
		{ "EGridFlowAbstractNodeRoomType::Unknown", (int64)EGridFlowAbstractNodeRoomType::Unknown },
		{ "EGridFlowAbstractNodeRoomType::Room", (int64)EGridFlowAbstractNodeRoomType::Room },
		{ "EGridFlowAbstractNodeRoomType::Corridor", (int64)EGridFlowAbstractNodeRoomType::Corridor },
		{ "EGridFlowAbstractNodeRoomType::Cave", (int64)EGridFlowAbstractNodeRoomType::Cave },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cave.Name", "EGridFlowAbstractNodeRoomType::Cave" },
		{ "Corridor.Name", "EGridFlowAbstractNodeRoomType::Corridor" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "Room.Name", "EGridFlowAbstractNodeRoomType::Room" },
		{ "Unknown.Name", "EGridFlowAbstractNodeRoomType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EGridFlowAbstractNodeRoomType",
		"EGridFlowAbstractNodeRoomType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType()
	{
		if (!Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata;
class UScriptStruct* FGridFlowAbstractNodeTilemapMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridFlowAbstractNodeTilemapMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridFlowAbstractNodeTilemapMetadata>()
{
	return FGridFlowAbstractNodeTilemapMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileCoordStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoordStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileCoordEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoordEnd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridFlowAbstractNodeTilemapMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordStart_MetaData[] = {
		{ "Comment", "/** The coordinate in the tilemap where the chunk representing this layout node starts */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ToolTip", "The coordinate in the tilemap where the chunk representing this layout node starts" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordStart = { "TileCoordStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowAbstractNodeTilemapMetadata, TileCoordStart), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordEnd_MetaData[] = {
		{ "Comment", "/** The coordinate in the tilemap where the chunk representing this layout node end */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ToolTip", "The coordinate in the tilemap where the chunk representing this layout node end" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordEnd = { "TileCoordEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowAbstractNodeTilemapMetadata, TileCoordEnd), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordEnd_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowAbstractNodeTilemapMetadata, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_TileCoordEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewProp_Tiles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"GridFlowAbstractNodeTilemapMetadata",
		sizeof(FGridFlowAbstractNodeTilemapMetadata),
		alignof(FGridFlowAbstractNodeTilemapMetadata),
		Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.InnerSingleton, Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata.InnerSingleton;
	}
	void UFANodeTilemapDomainData::StaticRegisterNativesUFANodeTilemapDomainData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFANodeTilemapDomainData);
	UClass* Z_Construct_UClass_UFANodeTilemapDomainData_NoRegister()
	{
		return UFANodeTilemapDomainData::StaticClass();
	}
	struct Z_Construct_UClass_UFANodeTilemapDomainData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilemapMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TilemapMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePerturb_MetaData[];
#endif
		static void NewProp_bDisablePerturb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePerturb;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFANodeTilemapDomainData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFANodeTilemapDomainData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09Tilemap domain specific data that is attached to the abstract graph nodes\n*/" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
		{ "ToolTip", "Tilemap domain specific data that is attached to the abstract graph nodes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_TilemapMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_TilemapMetadata = { "TilemapMetadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFANodeTilemapDomainData, TilemapMetadata), Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata, METADATA_PARAMS(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_TilemapMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_TilemapMetadata_MetaData)) }; // 4100458978
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif
	void Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb_SetBit(void* Obj)
	{
		((UFANodeTilemapDomainData*)Obj)->bDisablePerturb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb = { "bDisablePerturb", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFANodeTilemapDomainData), &Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/GridFlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFANodeTilemapDomainData, RoomType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType, METADATA_PARAMS(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType_MetaData)) }; // 3530564837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFANodeTilemapDomainData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_TilemapMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_bDisablePerturb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFANodeTilemapDomainData_Statics::NewProp_RoomType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFANodeTilemapDomainData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFANodeTilemapDomainData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFANodeTilemapDomainData_Statics::ClassParams = {
		&UFANodeTilemapDomainData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFANodeTilemapDomainData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFANodeTilemapDomainData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFANodeTilemapDomainData()
	{
		if (!Z_Registration_Info_UClass_UFANodeTilemapDomainData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFANodeTilemapDomainData.OuterSingleton, Z_Construct_UClass_UFANodeTilemapDomainData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFANodeTilemapDomainData.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFANodeTilemapDomainData>()
	{
		return UFANodeTilemapDomainData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFANodeTilemapDomainData);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::EnumInfo[] = {
		{ EGridFlowAbstractNodeRoomType_StaticEnum, TEXT("EGridFlowAbstractNodeRoomType"), &Z_Registration_Info_UEnum_EGridFlowAbstractNodeRoomType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3530564837U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ScriptStructInfo[] = {
		{ FGridFlowAbstractNodeTilemapMetadata::StaticStruct, Z_Construct_UScriptStruct_FGridFlowAbstractNodeTilemapMetadata_Statics::NewStructOps, TEXT("GridFlowAbstractNodeTilemapMetadata"), &Z_Registration_Info_UScriptStruct_GridFlowAbstractNodeTilemapMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridFlowAbstractNodeTilemapMetadata), 4100458978U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemap, UGridFlowTilemap::StaticClass, TEXT("UGridFlowTilemap"), &Z_Registration_Info_UClass_UGridFlowTilemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemap), 854062829U) },
		{ Z_Construct_UClass_UGridFlowTilemapUserData, UGridFlowTilemapUserData::StaticClass, TEXT("UGridFlowTilemapUserData"), &Z_Registration_Info_UClass_UGridFlowTilemapUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapUserData), 2277809309U) },
		{ Z_Construct_UClass_UFANodeTilemapDomainData, UFANodeTilemapDomainData::StaticClass, TEXT("UFANodeTilemapDomainData"), &Z_Registration_Info_UClass_UFANodeTilemapDomainData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFANodeTilemapDomainData), 1601632241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_1937462373(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_GridFlowTilemap_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
