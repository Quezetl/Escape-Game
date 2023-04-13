// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/GridFlow/GridFlowQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowQuery() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowChunkQueryResult();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowQuery_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowQuery();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCell();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractNode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowModel_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridFlowChunkQueryResult;
class UScriptStruct* FGridFlowChunkQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowChunkQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridFlowChunkQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridFlowChunkQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_GridFlowChunkQueryResult.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridFlowChunkQueryResult>()
{
	return FGridFlowChunkQueryResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutNodeCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayoutNodeCoord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilemapCoordStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TilemapCoordStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilemapCoordEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TilemapCoordEnd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileCoords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TileCoords;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PathIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathLength_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PathLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridFlowChunkQueryResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_LayoutNodeCoord_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_LayoutNodeCoord = { "LayoutNodeCoord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowChunkQueryResult, LayoutNodeCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_LayoutNodeCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_LayoutNodeCoord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordStart_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordStart = { "TilemapCoordStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowChunkQueryResult, TilemapCoordStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordEnd_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordEnd = { "TilemapCoordEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowChunkQueryResult, TilemapCoordEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordEnd_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TileCoords_Inner = { "TileCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TileCoords_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TileCoords = { "TileCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowChunkQueryResult, TileCoords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TileCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TileCoords_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_RoomType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowChunkQueryResult, RoomType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_RoomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_RoomType_MetaData)) }; // 3530564837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowChunkQueryResult, PathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathIndex_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathIndex = { "PathIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowChunkQueryResult, PathIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathLength_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathLength = { "PathLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGridFlowChunkQueryResult, PathLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_LayoutNodeCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TilemapCoordEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TileCoords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_TileCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_RoomType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_RoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewProp_PathLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"GridFlowChunkQueryResult",
		sizeof(FGridFlowChunkQueryResult),
		alignof(FGridFlowChunkQueryResult),
		Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridFlowChunkQueryResult()
	{
		if (!Z_Registration_Info_UScriptStruct_GridFlowChunkQueryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridFlowChunkQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridFlowChunkQueryResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execIsNearMarker)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CurrentMarkerTransform);
		P_GET_PROPERTY(FStrProperty,Z_Param_NearbyMarkerName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NearbyDistance);
		P_GET_OBJECT(UDungeonBuilder,Z_Param_Builder);
		P_GET_UBOOL_REF(Z_Param_Out_bIsNear);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGridFlowQuery::IsNearMarker(Z_Param_Out_CurrentMarkerTransform,Z_Param_NearbyMarkerName,Z_Param_NearbyDistance,Z_Param_Builder,Z_Param_Out_bIsNear,Z_Param_Out_NumFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execGetDungeonBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoundsCenter);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoundsExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDungeonBounds(Z_Param_Out_BoundsCenter,Z_Param_Out_BoundsExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execGetAllChunksOfType)
	{
		P_GET_ENUM(EGridFlowAbstractNodeRoomType,Z_Param_RoomType);
		P_GET_TARRAY_REF(FGridFlowChunkQueryResult,Z_Param_Out_OutChunks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllChunksOfType(EGridFlowAbstractNodeRoomType(Z_Param_RoomType),Z_Param_Out_OutChunks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execGetChunkAtLayoutNodeCoord)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLayoutNodeCoord);
		P_GET_STRUCT_REF(FGridFlowChunkQueryResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetChunkAtLayoutNodeCoord(Z_Param_Out_InLayoutNodeCoord,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execGetChunkAtLayoutNode)
	{
		P_GET_OBJECT(UFlowAbstractNode,Z_Param_InLayoutNode);
		P_GET_STRUCT_REF(FGridFlowChunkQueryResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGridFlowQuery::GetChunkAtLayoutNode(Z_Param_InLayoutNode,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execGetChunkAtWorldCoord)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldCoord);
		P_GET_STRUCT_REF(FGridFlowChunkQueryResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetChunkAtWorldCoord(Z_Param_Out_InWorldCoord,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execGetFreeTileLocation)
	{
		P_GET_TARRAY(EGridFlowAbstractNodeRoomType,Z_Param_AllowedRoomTypes);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Random);
		P_GET_UBOOL_REF(Z_Param_Out_OutSuccess);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldCoord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFreeTileLocation(Z_Param_AllowedRoomTypes,Z_Param_Out_Random,Z_Param_Out_OutSuccess,Z_Param_Out_OutWorldCoord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execGetCellRoomType)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldCoord);
		P_GET_ENUM_REF(EGridFlowAbstractNodeRoomType,Z_Param_Out_OutRoomType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCellRoomType(Z_Param_Out_WorldCoord,(EGridFlowAbstractNodeRoomType&)(Z_Param_Out_OutRoomType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execGetCellAtWorldCoord)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldCoord);
		P_GET_STRUCT_REF(FFlowTilemapCell,Z_Param_Out_OutCell);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCellAtWorldCoord(Z_Param_Out_WorldCoord,Z_Param_Out_OutCell);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execGetCellAtTileCoord)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TileCoord);
		P_GET_STRUCT_REF(FFlowTilemapCell,Z_Param_Out_OutCell);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCellAtTileCoord(Z_Param_Out_TileCoord,Z_Param_Out_OutCell);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execConvertWorldToTileCoord)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldCoords);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConvertWorldToTileCoord(Z_Param_Out_WorldCoords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFlowQuery::execConvertTileToWorldCoord)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TileCoord);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConvertTileToWorldCoord(Z_Param_Out_TileCoord);
		P_NATIVE_END;
	}
	void UGridFlowQuery::StaticRegisterNativesUGridFlowQuery()
	{
		UClass* Class = UGridFlowQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertTileToWorldCoord", &UGridFlowQuery::execConvertTileToWorldCoord },
			{ "ConvertWorldToTileCoord", &UGridFlowQuery::execConvertWorldToTileCoord },
			{ "GetAllChunksOfType", &UGridFlowQuery::execGetAllChunksOfType },
			{ "GetCellAtTileCoord", &UGridFlowQuery::execGetCellAtTileCoord },
			{ "GetCellAtWorldCoord", &UGridFlowQuery::execGetCellAtWorldCoord },
			{ "GetCellRoomType", &UGridFlowQuery::execGetCellRoomType },
			{ "GetChunkAtLayoutNode", &UGridFlowQuery::execGetChunkAtLayoutNode },
			{ "GetChunkAtLayoutNodeCoord", &UGridFlowQuery::execGetChunkAtLayoutNodeCoord },
			{ "GetChunkAtWorldCoord", &UGridFlowQuery::execGetChunkAtWorldCoord },
			{ "GetDungeonBounds", &UGridFlowQuery::execGetDungeonBounds },
			{ "GetFreeTileLocation", &UGridFlowQuery::execGetFreeTileLocation },
			{ "IsNearMarker", &UGridFlowQuery::execIsNearMarker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics
	{
		struct GridFlowQuery_eventConvertTileToWorldCoord_Parms
		{
			FVector TileCoord;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoord;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::NewProp_TileCoord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::NewProp_TileCoord = { "TileCoord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventConvertTileToWorldCoord_Parms, TileCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::NewProp_TileCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::NewProp_TileCoord_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventConvertTileToWorldCoord_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::NewProp_TileCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "ConvertTileToWorldCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::GridFlowQuery_eventConvertTileToWorldCoord_Parms), Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics
	{
		struct GridFlowQuery_eventConvertWorldToTileCoord_Parms
		{
			FVector WorldCoords;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldCoords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldCoords;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::NewProp_WorldCoords_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::NewProp_WorldCoords = { "WorldCoords", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventConvertWorldToTileCoord_Parms, WorldCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::NewProp_WorldCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::NewProp_WorldCoords_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventConvertWorldToTileCoord_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::NewProp_WorldCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "ConvertWorldToTileCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::GridFlowQuery_eventConvertWorldToTileCoord_Parms), Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics
	{
		struct GridFlowQuery_eventGetAllChunksOfType_Parms
		{
			EGridFlowAbstractNodeRoomType RoomType;
			TArray<FGridFlowChunkQueryResult> OutChunks;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutChunks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutChunks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetAllChunksOfType_Parms, RoomType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType, METADATA_PARAMS(nullptr, 0) }; // 3530564837
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::NewProp_OutChunks_Inner = { "OutChunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGridFlowChunkQueryResult, METADATA_PARAMS(nullptr, 0) }; // 1160849364
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::NewProp_OutChunks = { "OutChunks", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetAllChunksOfType_Parms, OutChunks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1160849364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::NewProp_RoomType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::NewProp_RoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::NewProp_OutChunks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::NewProp_OutChunks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "GetAllChunksOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::GridFlowQuery_eventGetAllChunksOfType_Parms), Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics
	{
		struct GridFlowQuery_eventGetCellAtTileCoord_Parms
		{
			FVector TileCoord;
			FFlowTilemapCell OutCell;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoord;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCell;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_TileCoord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_TileCoord = { "TileCoord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetCellAtTileCoord_Parms, TileCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_TileCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_TileCoord_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_OutCell = { "OutCell", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetCellAtTileCoord_Parms, OutCell), Z_Construct_UScriptStruct_FFlowTilemapCell, METADATA_PARAMS(nullptr, 0) }; // 3359540048
	void Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridFlowQuery_eventGetCellAtTileCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridFlowQuery_eventGetCellAtTileCoord_Parms), &Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_TileCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_OutCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "GetCellAtTileCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::GridFlowQuery_eventGetCellAtTileCoord_Parms), Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics
	{
		struct GridFlowQuery_eventGetCellAtWorldCoord_Parms
		{
			FVector WorldCoord;
			FFlowTilemapCell OutCell;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldCoord;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCell;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_WorldCoord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_WorldCoord = { "WorldCoord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetCellAtWorldCoord_Parms, WorldCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_WorldCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_WorldCoord_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_OutCell = { "OutCell", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetCellAtWorldCoord_Parms, OutCell), Z_Construct_UScriptStruct_FFlowTilemapCell, METADATA_PARAMS(nullptr, 0) }; // 3359540048
	void Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridFlowQuery_eventGetCellAtWorldCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridFlowQuery_eventGetCellAtWorldCoord_Parms), &Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_WorldCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_OutCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "GetCellAtWorldCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::GridFlowQuery_eventGetCellAtWorldCoord_Parms), Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics
	{
		struct GridFlowQuery_eventGetCellRoomType_Parms
		{
			FVector WorldCoord;
			EGridFlowAbstractNodeRoomType OutRoomType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldCoord;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutRoomType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutRoomType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_WorldCoord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_WorldCoord = { "WorldCoord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetCellRoomType_Parms, WorldCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_WorldCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_WorldCoord_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_OutRoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_OutRoomType = { "OutRoomType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetCellRoomType_Parms, OutRoomType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType, METADATA_PARAMS(nullptr, 0) }; // 3530564837
	void Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridFlowQuery_eventGetCellRoomType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridFlowQuery_eventGetCellRoomType_Parms), &Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_WorldCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_OutRoomType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_OutRoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "GetCellRoomType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::GridFlowQuery_eventGetCellRoomType_Parms), Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics
	{
		struct GridFlowQuery_eventGetChunkAtLayoutNode_Parms
		{
			const UFlowAbstractNode* InLayoutNode;
			FGridFlowChunkQueryResult Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLayoutNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLayoutNode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::NewProp_InLayoutNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::NewProp_InLayoutNode = { "InLayoutNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetChunkAtLayoutNode_Parms, InLayoutNode), Z_Construct_UClass_UFlowAbstractNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::NewProp_InLayoutNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::NewProp_InLayoutNode_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetChunkAtLayoutNode_Parms, Result), Z_Construct_UScriptStruct_FGridFlowChunkQueryResult, METADATA_PARAMS(nullptr, 0) }; // 1160849364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::NewProp_InLayoutNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "GetChunkAtLayoutNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::GridFlowQuery_eventGetChunkAtLayoutNode_Parms), Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics
	{
		struct GridFlowQuery_eventGetChunkAtLayoutNodeCoord_Parms
		{
			FVector InLayoutNodeCoord;
			FGridFlowChunkQueryResult Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLayoutNodeCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLayoutNodeCoord;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_InLayoutNodeCoord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_InLayoutNodeCoord = { "InLayoutNodeCoord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetChunkAtLayoutNodeCoord_Parms, InLayoutNodeCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_InLayoutNodeCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_InLayoutNodeCoord_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetChunkAtLayoutNodeCoord_Parms, Result), Z_Construct_UScriptStruct_FGridFlowChunkQueryResult, METADATA_PARAMS(nullptr, 0) }; // 1160849364
	void Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridFlowQuery_eventGetChunkAtLayoutNodeCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridFlowQuery_eventGetChunkAtLayoutNodeCoord_Parms), &Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_InLayoutNodeCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "GetChunkAtLayoutNodeCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::GridFlowQuery_eventGetChunkAtLayoutNodeCoord_Parms), Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics
	{
		struct GridFlowQuery_eventGetChunkAtWorldCoord_Parms
		{
			FVector InWorldCoord;
			FGridFlowChunkQueryResult Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWorldCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWorldCoord;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_InWorldCoord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_InWorldCoord = { "InWorldCoord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetChunkAtWorldCoord_Parms, InWorldCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_InWorldCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_InWorldCoord_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetChunkAtWorldCoord_Parms, Result), Z_Construct_UScriptStruct_FGridFlowChunkQueryResult, METADATA_PARAMS(nullptr, 0) }; // 1160849364
	void Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridFlowQuery_eventGetChunkAtWorldCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridFlowQuery_eventGetChunkAtWorldCoord_Parms), &Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_InWorldCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "GetChunkAtWorldCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::GridFlowQuery_eventGetChunkAtWorldCoord_Parms), Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics
	{
		struct GridFlowQuery_eventGetDungeonBounds_Parms
		{
			FVector BoundsCenter;
			FVector BoundsExtent;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsCenter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::NewProp_BoundsCenter = { "BoundsCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetDungeonBounds_Parms, BoundsCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::NewProp_BoundsExtent = { "BoundsExtent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetDungeonBounds_Parms, BoundsExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::NewProp_BoundsCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::NewProp_BoundsExtent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "GetDungeonBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::GridFlowQuery_eventGetDungeonBounds_Parms), Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics
	{
		struct GridFlowQuery_eventGetFreeTileLocation_Parms
		{
			TArray<EGridFlowAbstractNodeRoomType> AllowedRoomTypes;
			FRandomStream Random;
			bool OutSuccess;
			FVector OutWorldCoord;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedRoomTypes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedRoomTypes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedRoomTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Random_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Random;
		static void NewProp_OutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWorldCoord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_AllowedRoomTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_AllowedRoomTypes_Inner = { "AllowedRoomTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowAbstractNodeRoomType, METADATA_PARAMS(nullptr, 0) }; // 3530564837
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_AllowedRoomTypes = { "AllowedRoomTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetFreeTileLocation_Parms, AllowedRoomTypes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3530564837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_Random_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_Random = { "Random", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetFreeTileLocation_Parms, Random), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_Random_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_Random_MetaData)) };
	void Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_OutSuccess_SetBit(void* Obj)
	{
		((GridFlowQuery_eventGetFreeTileLocation_Parms*)Obj)->OutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_OutSuccess = { "OutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridFlowQuery_eventGetFreeTileLocation_Parms), &Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_OutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_OutWorldCoord = { "OutWorldCoord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventGetFreeTileLocation_Parms, OutWorldCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_AllowedRoomTypes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_AllowedRoomTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_AllowedRoomTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_Random,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_OutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::NewProp_OutWorldCoord,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "GetFreeTileLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::GridFlowQuery_eventGetFreeTileLocation_Parms), Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics
	{
		struct GridFlowQuery_eventIsNearMarker_Parms
		{
			FTransform CurrentMarkerTransform;
			FString NearbyMarkerName;
			float NearbyDistance;
			UDungeonBuilder* Builder;
			bool bIsNear;
			int32 NumFound;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMarkerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMarkerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearbyMarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NearbyMarkerName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearbyDistance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
		static void NewProp_bIsNear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNear;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform = { "CurrentMarkerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventIsNearMarker_Parms, CurrentMarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName = { "NearbyMarkerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventIsNearMarker_Parms, NearbyMarkerName), METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_NearbyDistance = { "NearbyDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventIsNearMarker_Parms, NearbyDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventIsNearMarker_Parms, Builder), Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_bIsNear_SetBit(void* Obj)
	{
		((GridFlowQuery_eventIsNearMarker_Parms*)Obj)->bIsNear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_bIsNear = { "bIsNear", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridFlowQuery_eventIsNearMarker_Parms), &Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_bIsNear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_NumFound = { "NumFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowQuery_eventIsNearMarker_Parms, NumFound), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_NearbyDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_Builder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_bIsNear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::NewProp_NumFound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowQuery, nullptr, "IsNearMarker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::GridFlowQuery_eventIsNearMarker_Parms), Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowQuery_IsNearMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowQuery_IsNearMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowQuery);
	UClass* Z_Construct_UClass_UGridFlowQuery_NoRegister()
	{
		return UGridFlowQuery::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridFlowQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridFlowQuery_ConvertTileToWorldCoord, "ConvertTileToWorldCoord" }, // 3077262004
		{ &Z_Construct_UFunction_UGridFlowQuery_ConvertWorldToTileCoord, "ConvertWorldToTileCoord" }, // 624448190
		{ &Z_Construct_UFunction_UGridFlowQuery_GetAllChunksOfType, "GetAllChunksOfType" }, // 1117559657
		{ &Z_Construct_UFunction_UGridFlowQuery_GetCellAtTileCoord, "GetCellAtTileCoord" }, // 2230383672
		{ &Z_Construct_UFunction_UGridFlowQuery_GetCellAtWorldCoord, "GetCellAtWorldCoord" }, // 841491787
		{ &Z_Construct_UFunction_UGridFlowQuery_GetCellRoomType, "GetCellRoomType" }, // 339003067
		{ &Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNode, "GetChunkAtLayoutNode" }, // 369828975
		{ &Z_Construct_UFunction_UGridFlowQuery_GetChunkAtLayoutNodeCoord, "GetChunkAtLayoutNodeCoord" }, // 2929600770
		{ &Z_Construct_UFunction_UGridFlowQuery_GetChunkAtWorldCoord, "GetChunkAtWorldCoord" }, // 1686973160
		{ &Z_Construct_UFunction_UGridFlowQuery_GetDungeonBounds, "GetDungeonBounds" }, // 1091264220
		{ &Z_Construct_UFunction_UGridFlowQuery_GetFreeTileLocation, "GetFreeTileLocation" }, // 2320449763
		{ &Z_Construct_UFunction_UGridFlowQuery_IsNearMarker, "IsNearMarker" }, // 2745518368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/GridFlow/GridFlowQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowQuery, Config), Z_Construct_UClass_UGridFlowConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowQuery, Model), Z_Construct_UClass_UGridFlowModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowQuery_Statics::NewProp_Model,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowQuery_Statics::ClassParams = {
		&UGridFlowQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridFlowQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowQuery_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowQuery()
	{
		if (!Z_Registration_Info_UClass_UGridFlowQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowQuery.OuterSingleton, Z_Construct_UClass_UGridFlowQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowQuery.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowQuery>()
	{
		return UGridFlowQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowQuery);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_Statics::ScriptStructInfo[] = {
		{ FGridFlowChunkQueryResult::StaticStruct, Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics::NewStructOps, TEXT("GridFlowChunkQueryResult"), &Z_Registration_Info_UScriptStruct_GridFlowChunkQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridFlowChunkQueryResult), 1160849364U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowQuery, UGridFlowQuery::StaticClass, TEXT("UGridFlowQuery"), &Z_Registration_Info_UClass_UGridFlowQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowQuery), 1619106230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_241040430(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
