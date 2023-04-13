// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTilemap() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCoord();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapEdge();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellOverlay();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCell();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemap_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowTilemapCellType;
	static UEnum* EFlowTilemapCellType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlowTilemapCellType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlowTilemapCellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EFlowTilemapCellType"));
		}
		return Z_Registration_Info_UEnum_EFlowTilemapCellType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowTilemapCellType>()
	{
		return EFlowTilemapCellType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enumerators[] = {
		{ "EFlowTilemapCellType::Empty", (int64)EFlowTilemapCellType::Empty },
		{ "EFlowTilemapCellType::Floor", (int64)EFlowTilemapCellType::Floor },
		{ "EFlowTilemapCellType::Wall", (int64)EFlowTilemapCellType::Wall },
		{ "EFlowTilemapCellType::Door", (int64)EFlowTilemapCellType::Door },
		{ "EFlowTilemapCellType::Custom", (int64)EFlowTilemapCellType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Name", "EFlowTilemapCellType::Custom" },
		{ "Door.Name", "EFlowTilemapCellType::Door" },
		{ "Empty.Name", "EFlowTilemapCellType::Empty" },
		{ "Floor.Name", "EFlowTilemapCellType::Floor" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "Wall.Name", "EFlowTilemapCellType::Wall" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EFlowTilemapCellType",
		"EFlowTilemapCellType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType()
	{
		if (!Z_Registration_Info_UEnum_EFlowTilemapCellType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowTilemapCellType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlowTilemapCellType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowTilemapEdgeType;
	static UEnum* EFlowTilemapEdgeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlowTilemapEdgeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlowTilemapEdgeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EFlowTilemapEdgeType"));
		}
		return Z_Registration_Info_UEnum_EFlowTilemapEdgeType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowTilemapEdgeType>()
	{
		return EFlowTilemapEdgeType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enumerators[] = {
		{ "EFlowTilemapEdgeType::Empty", (int64)EFlowTilemapEdgeType::Empty },
		{ "EFlowTilemapEdgeType::Wall", (int64)EFlowTilemapEdgeType::Wall },
		{ "EFlowTilemapEdgeType::Fence", (int64)EFlowTilemapEdgeType::Fence },
		{ "EFlowTilemapEdgeType::Door", (int64)EFlowTilemapEdgeType::Door },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Door.Name", "EFlowTilemapEdgeType::Door" },
		{ "Empty.Name", "EFlowTilemapEdgeType::Empty" },
		{ "Fence.Name", "EFlowTilemapEdgeType::Fence" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "Wall.Name", "EFlowTilemapEdgeType::Wall" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EFlowTilemapEdgeType",
		"EFlowTilemapEdgeType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType()
	{
		if (!Z_Registration_Info_UEnum_EFlowTilemapEdgeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowTilemapEdgeType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlowTilemapEdgeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo;
class UScriptStruct* FFlowTilemapCustomCellInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCustomCellInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCustomCellInfo>()
{
	return FFlowTilemapCustomCellInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCustomCellInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_MarkerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCustomCellInfo, MarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_MarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_DefaultColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_DefaultColor = { "DefaultColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCustomCellInfo, DefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_DefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_DefaultColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewProp_DefaultColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowTilemapCustomCellInfo",
		sizeof(FFlowTilemapCustomCellInfo),
		alignof(FFlowTilemapCustomCellInfo),
		Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule;
	static UEnum* EFlowTilemapCellOverlayMergeWallOverlayRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EFlowTilemapCellOverlayMergeWallOverlayRule"));
		}
		return Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EFlowTilemapCellOverlayMergeWallOverlayRule>()
	{
		return EFlowTilemapCellOverlayMergeWallOverlayRule_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enumerators[] = {
		{ "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallAndOverlay", (int64)EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallAndOverlay },
		{ "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallRemoveOverlay", (int64)EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallRemoveOverlay },
		{ "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepOverlayRemoveWall", (int64)EFlowTilemapCellOverlayMergeWallOverlayRule::KeepOverlayRemoveWall },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KeepOverlayRemoveWall.Name", "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepOverlayRemoveWall" },
		{ "KeepWallAndOverlay.Name", "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallAndOverlay" },
		{ "KeepWallRemoveOverlay.Name", "EFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallRemoveOverlay" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EFlowTilemapCellOverlayMergeWallOverlayRule",
		"EFlowTilemapCellOverlayMergeWallOverlayRule",
		Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule()
	{
		if (!Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig;
class UScriptStruct* FFlowTilemapCellOverlayMergeConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCellOverlayMergeConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCellOverlayMergeConfig>()
{
	return FFlowTilemapCellOverlayMergeConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WallOverlayRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallOverlayRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WallOverlayRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerHeightOffsetForLayoutTiles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerHeightOffsetForLayoutTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerHeightOffsetForNonLayoutTiles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerHeightOffsetForNonLayoutTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveElevationMarker_MetaData[];
#endif
		static void NewProp_RemoveElevationMarker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveElevationMarker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCellOverlayMergeConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        Minimum height of the tile for the merge to happen\n\n        Variable Name: MinHeight\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Minimum height of the tile for the merge to happen\n\nVariable Name: MinHeight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, MinHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        Maximum height of the tile for the merge to happen\n\n        Variable Name: MaxHeight\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Maximum height of the tile for the merge to happen\n\nVariable Name: MaxHeight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MaxHeight_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        Control how the walls are treated when overlays are placed in wall tiles\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Control how the walls are treated when overlays are placed in wall tiles\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule = { "WallOverlayRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, WallOverlayRule), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellOverlayMergeWallOverlayRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule_MetaData)) }; // 2105120120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForLayoutTiles_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        The logical height offset on the marker for tiles inside the dungeon layout\n\n        Variable Name: MarkerHeightOffsetForLayoutTiles\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "The logical height offset on the marker for tiles inside the dungeon layout\n\nVariable Name: MarkerHeightOffsetForLayoutTiles" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForLayoutTiles = { "MarkerHeightOffsetForLayoutTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, MarkerHeightOffsetForLayoutTiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForLayoutTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForLayoutTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForNonLayoutTiles_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        The logical height offset on the marker for tiles outside the dungeon layout\n\n        Variable Name: MarkerHeightOffsetForNonLayoutTiles\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "The logical height offset on the marker for tiles outside the dungeon layout\n\nVariable Name: MarkerHeightOffsetForNonLayoutTiles" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForNonLayoutTiles = { "MarkerHeightOffsetForNonLayoutTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellOverlayMergeConfig, MarkerHeightOffsetForNonLayoutTiles), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForNonLayoutTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForNonLayoutTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker_MetaData[] = {
		{ "Category", "Merge Config" },
		{ "Comment", "/**\n        Should the elevation marker be removed when this overlay is placed on an elevation tile?\n\n        Variable Name: RemoveElevationMarker\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Should the elevation marker be removed when this overlay is placed on an elevation tile?\n\nVariable Name: RemoveElevationMarker" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker_SetBit(void* Obj)
	{
		((FFlowTilemapCellOverlayMergeConfig*)Obj)->RemoveElevationMarker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker = { "RemoveElevationMarker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCellOverlayMergeConfig), &Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_WallOverlayRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForLayoutTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_MarkerHeightOffsetForNonLayoutTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewProp_RemoveElevationMarker,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowTilemapCellOverlayMergeConfig",
		sizeof(FFlowTilemapCellOverlayMergeConfig),
		alignof(FFlowTilemapCellOverlayMergeConfig),
		Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCoord;
class UScriptStruct* FFlowTilemapCoord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCoord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCoord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCoord, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCoord"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCoord.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCoord>()
{
	return FFlowTilemapCoord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEdgeCoord_MetaData[];
#endif
		static void NewProp_bIsEdgeCoord_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEdgeCoord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHorizontalEdge_MetaData[];
#endif
		static void NewProp_bHorizontalEdge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHorizontalEdge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCoord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_Coord_MetaData[] = {
		{ "Comment", "/** The coordinate of the tile in the tilemap */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "The coordinate of the tile in the tilemap" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCoord, Coord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_Coord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord_MetaData[] = {
		{ "Comment", "/** Indicates the horizontal or the vertical edge on the tile. Ignored if we are referencing a tile and not an edge */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Indicates the horizontal or the vertical edge on the tile. Ignored if we are referencing a tile and not an edge" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord_SetBit(void* Obj)
	{
		((FFlowTilemapCoord*)Obj)->bIsEdgeCoord = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord = { "bIsEdgeCoord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCoord), &Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge_MetaData[] = {
		{ "Comment", "/** Indicates the horizontal or the vertical edge on the tile. Ignored if we are referencing a tile and not an edge */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ToolTip", "Indicates the horizontal or the vertical edge on the tile. Ignored if we are referencing a tile and not an edge" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge_SetBit(void* Obj)
	{
		((FFlowTilemapCoord*)Obj)->bHorizontalEdge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge = { "bHorizontalEdge", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCoord), &Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_Coord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bIsEdgeCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewProp_bHorizontalEdge,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowTilemapCoord",
		sizeof(FFlowTilemapCoord),
		alignof(FFlowTilemapCoord),
		Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCoord()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowTilemapCoord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCoord.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowTilemapCoord.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapEdge;
class UScriptStruct* FFlowTilemapEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapEdge, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapEdge"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapEdge.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapEdge>()
{
	return FFlowTilemapEdge::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EdgeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EdgeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightCoord_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightCoord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkerAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasItem_MetaData[];
#endif
		static void NewProp_bHasItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeCoord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapEdge>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType = { "EdgeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapEdge, EdgeType), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapEdgeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType_MetaData)) }; // 861532888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_ItemId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapEdge, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_HeightCoord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_HeightCoord = { "HeightCoord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapEdge, HeightCoord), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_HeightCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_HeightCoord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_MarkerAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_MarkerAngle = { "MarkerAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapEdge, MarkerAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_MarkerAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_MarkerAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem_SetBit(void* Obj)
	{
		((FFlowTilemapEdge*)Obj)->bHasItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem = { "bHasItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapEdge), &Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeCoord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeCoord = { "EdgeCoord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapEdge, EdgeCoord), Z_Construct_UScriptStruct_FFlowTilemapCoord, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeCoord_MetaData)) }; // 1502160880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_HeightCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_MarkerAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_bHasItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewProp_EdgeCoord,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowTilemapEdge",
		sizeof(FFlowTilemapEdge),
		alignof(FFlowTilemapEdge),
		Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapEdge()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowTilemapEdge.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapEdge.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowTilemapEdge.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay;
class UScriptStruct* FFlowTilemapCellOverlay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCellOverlay"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCellOverlay>()
{
	return FFlowTilemapCellOverlay::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileBlockingOverlay_MetaData[];
#endif
		static void NewProp_bTileBlockingOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileBlockingOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MergeConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCellOverlay>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FFlowTilemapCellOverlay*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCellOverlay), &Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MarkerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellOverlay, MarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellOverlay, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_NoiseValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_NoiseValue = { "NoiseValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellOverlay, NoiseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_NoiseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_NoiseValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay_SetBit(void* Obj)
	{
		((FFlowTilemapCellOverlay*)Obj)->bTileBlockingOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay = { "bTileBlockingOverlay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCellOverlay), &Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MergeConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MergeConfig = { "MergeConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellOverlay, MergeConfig), Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MergeConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MergeConfig_MetaData)) }; // 624995655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_NoiseValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_bTileBlockingOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewProp_MergeConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowTilemapCellOverlay",
		sizeof(FFlowTilemapCellOverlay),
		alignof(FFlowTilemapCellOverlay),
		Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellOverlay()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCell;
class UScriptStruct* FFlowTilemapCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCell, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCell"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCell.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCell>()
{
	return FFlowTilemapCell::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowTilemapCell_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCellInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCellInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasItem_MetaData[];
#endif
		static void NewProp_bHasItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasOverlay_MetaData[];
#endif
		static void NewProp_bHasOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Overlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkCoord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomColor_MetaData[];
#endif
		static void NewProp_bUseCustomColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMainPath_MetaData[];
#endif
		static void NewProp_bMainPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMainPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLayoutCell_MetaData[];
#endif
		static void NewProp_bLayoutCell_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLayoutCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnreachable_MetaData[];
#endif
		static void NewProp_bUnreachable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnreachable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromMainPath_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DistanceFromMainPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCell>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowTilemapCellType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType_MetaData)) }; // 634081679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomCellInfo_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomCellInfo = { "CustomCellInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, CustomCellInfo), Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomCellInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomCellInfo_MetaData)) }; // 3249784251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem_SetBit(void* Obj)
	{
		((FFlowTilemapCell*)Obj)->bHasItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem = { "bHasItem", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ItemId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay_SetBit(void* Obj)
	{
		((FFlowTilemapCell*)Obj)->bHasOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay = { "bHasOverlay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Overlay_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Overlay = { "Overlay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, Overlay), Z_Construct_UScriptStruct_FFlowTilemapCellOverlay, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Overlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Overlay_MetaData)) }; // 359062240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ChunkCoord_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ChunkCoord = { "ChunkCoord", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, ChunkCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ChunkCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ChunkCoord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_TileCoord_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_TileCoord = { "TileCoord", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, TileCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_TileCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_TileCoord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor_SetBit(void* Obj)
	{
		((FFlowTilemapCell*)Obj)->bUseCustomColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor = { "bUseCustomColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomColor = { "CustomColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, CustomColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath_SetBit(void* Obj)
	{
		((FFlowTilemapCell*)Obj)->bMainPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath = { "bMainPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell_SetBit(void* Obj)
	{
		((FFlowTilemapCell*)Obj)->bLayoutCell = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell = { "bLayoutCell", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable_SetBit(void* Obj)
	{
		((FFlowTilemapCell*)Obj)->bUnreachable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable = { "bUnreachable", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCell), &Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_DistanceFromMainPath_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_DistanceFromMainPath = { "DistanceFromMainPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, DistanceFromMainPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_DistanceFromMainPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_DistanceFromMainPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCell, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CellType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomCellInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bHasOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Overlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_ChunkCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_TileCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUseCustomColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_CustomColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bMainPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bLayoutCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_bUnreachable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_DistanceFromMainPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowTilemapCell",
		sizeof(FFlowTilemapCell),
		alignof(FFlowTilemapCell),
		Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCell()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowTilemapCell.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCell.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowTilemapCell.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo;
class UScriptStruct* FFlowTilemapCellDoorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCellDoorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCellDoorInfo>()
{
	return FFlowTilemapCellDoorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOneWay_MetaData[];
#endif
		static void NewProp_bOneWay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneWay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunkB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCellDoorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FFlowTilemapCellDoorInfo*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCellDoorInfo), &Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay_SetBit(void* Obj)
	{
		((FFlowTilemapCellDoorInfo*)Obj)->bOneWay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay = { "bOneWay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowTilemapCellDoorInfo), &Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkA = { "ChunkA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellDoorInfo, ChunkA), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkB = { "ChunkB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellDoorInfo, ChunkB), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_Angle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellDoorInfo, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_bOneWay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_ChunkB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewProp_Angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowTilemapCellDoorInfo",
		sizeof(FFlowTilemapCellDoorInfo),
		alignof(FFlowTilemapCellDoorInfo),
		Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo;
class UScriptStruct* FFlowTilemapCellWallInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowTilemapCellWallInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowTilemapCellWallInfo>()
{
	return FFlowTilemapCellWallInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwningTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OwningTiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowTilemapCellWallInfo>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles_Inner = { "OwningTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles = { "OwningTiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowTilemapCellWallInfo, OwningTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewProp_OwningTiles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"FlowTilemapCellWallInfo",
		sizeof(FFlowTilemapCellWallInfo),
		alignof(FFlowTilemapCellWallInfo),
		Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.InnerSingleton, Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo.InnerSingleton;
	}
	void UFlowTilemap::StaticRegisterNativesUFlowTilemap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemap);
	UClass* Z_Construct_UClass_UFlowTilemap_NoRegister()
	{
		return UFlowTilemap::StaticClass();
	}
	struct Z_Construct_UClass_UFlowTilemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgesHorizontal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgesHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgesHorizontal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgesVertical_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgesVertical_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgesVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallMetadataMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallMetadataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallMetadataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WallMetadataMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorMetadataMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorMetadataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorMetadataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DoorMetadataMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowTilemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapCell, METADATA_PARAMS(nullptr, 0) }; // 3359540048
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemap, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells_MetaData)) }; // 3359540048
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal_Inner = { "EdgesHorizontal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapEdge, METADATA_PARAMS(nullptr, 0) }; // 3351949130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal = { "EdgesHorizontal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemap, EdgesHorizontal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal_MetaData)) }; // 3351949130
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical_Inner = { "EdgesVertical", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapEdge, METADATA_PARAMS(nullptr, 0) }; // 3351949130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical = { "EdgesVertical", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemap, EdgesVertical), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical_MetaData)) }; // 3351949130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemap, Width), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemap, Height), METADATA_PARAMS(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_ValueProp = { "WallMetadataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo, METADATA_PARAMS(nullptr, 0) }; // 2406107392
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_Key_KeyProp = { "WallMetadataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapCoord, METADATA_PARAMS(nullptr, 0) }; // 1502160880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap = { "WallMetadataMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemap, WallMetadataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_MetaData)) }; // 1502160880 2406107392
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_ValueProp = { "DoorMetadataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo, METADATA_PARAMS(nullptr, 0) }; // 1671112241
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_Key_KeyProp = { "DoorMetadataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowTilemapCoord, METADATA_PARAMS(nullptr, 0) }; // 1502160880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap = { "DoorMetadataMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowTilemap, DoorMetadataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_MetaData)) }; // 1502160880 1671112241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowTilemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Cells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_EdgesVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_WallMetadataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemap_Statics::NewProp_DoorMetadataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowTilemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemap_Statics::ClassParams = {
		&UFlowTilemap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowTilemap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowTilemap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowTilemap()
	{
		if (!Z_Registration_Info_UClass_UFlowTilemap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemap.OuterSingleton, Z_Construct_UClass_UFlowTilemap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlowTilemap.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowTilemap>()
	{
		return UFlowTilemap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemap);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::EnumInfo[] = {
		{ EFlowTilemapCellType_StaticEnum, TEXT("EFlowTilemapCellType"), &Z_Registration_Info_UEnum_EFlowTilemapCellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 634081679U) },
		{ EFlowTilemapEdgeType_StaticEnum, TEXT("EFlowTilemapEdgeType"), &Z_Registration_Info_UEnum_EFlowTilemapEdgeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 861532888U) },
		{ EFlowTilemapCellOverlayMergeWallOverlayRule_StaticEnum, TEXT("EFlowTilemapCellOverlayMergeWallOverlayRule"), &Z_Registration_Info_UEnum_EFlowTilemapCellOverlayMergeWallOverlayRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2105120120U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ScriptStructInfo[] = {
		{ FFlowTilemapCustomCellInfo::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCustomCellInfo_Statics::NewStructOps, TEXT("FlowTilemapCustomCellInfo"), &Z_Registration_Info_UScriptStruct_FlowTilemapCustomCellInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCustomCellInfo), 3249784251U) },
		{ FFlowTilemapCellOverlayMergeConfig::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig_Statics::NewStructOps, TEXT("FlowTilemapCellOverlayMergeConfig"), &Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlayMergeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCellOverlayMergeConfig), 624995655U) },
		{ FFlowTilemapCoord::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCoord_Statics::NewStructOps, TEXT("FlowTilemapCoord"), &Z_Registration_Info_UScriptStruct_FlowTilemapCoord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCoord), 1502160880U) },
		{ FFlowTilemapEdge::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapEdge_Statics::NewStructOps, TEXT("FlowTilemapEdge"), &Z_Registration_Info_UScriptStruct_FlowTilemapEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapEdge), 3351949130U) },
		{ FFlowTilemapCellOverlay::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCellOverlay_Statics::NewStructOps, TEXT("FlowTilemapCellOverlay"), &Z_Registration_Info_UScriptStruct_FlowTilemapCellOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCellOverlay), 359062240U) },
		{ FFlowTilemapCell::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCell_Statics::NewStructOps, TEXT("FlowTilemapCell"), &Z_Registration_Info_UScriptStruct_FlowTilemapCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCell), 3359540048U) },
		{ FFlowTilemapCellDoorInfo::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCellDoorInfo_Statics::NewStructOps, TEXT("FlowTilemapCellDoorInfo"), &Z_Registration_Info_UScriptStruct_FlowTilemapCellDoorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCellDoorInfo), 1671112241U) },
		{ FFlowTilemapCellWallInfo::StaticStruct, Z_Construct_UScriptStruct_FFlowTilemapCellWallInfo_Statics::NewStructOps, TEXT("FlowTilemapCellWallInfo"), &Z_Registration_Info_UScriptStruct_FlowTilemapCellWallInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowTilemapCellWallInfo), 2406107392U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlowTilemap, UFlowTilemap::StaticClass, TEXT("UFlowTilemap"), &Z_Registration_Info_UClass_UFlowTilemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemap), 2224356764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_2165900071(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_FlowTilemap_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
