// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonConfig() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridDungeonWallType;
	static UEnum* EGridDungeonWallType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGridDungeonWallType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGridDungeonWallType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridDungeonWallType"));
		}
		return Z_Registration_Info_UEnum_EGridDungeonWallType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridDungeonWallType>()
	{
		return EGridDungeonWallType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enumerators[] = {
		{ "EGridDungeonWallType::WallsAsEdges", (int64)EGridDungeonWallType::WallsAsEdges },
		{ "EGridDungeonWallType::WallsAsTileBlocks", (int64)EGridDungeonWallType::WallsAsTileBlocks },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "WallsAsEdges.DisplayName", "Walls as Edges" },
		{ "WallsAsEdges.Name", "EGridDungeonWallType::WallsAsEdges" },
		{ "WallsAsTileBlocks.DisplayName", "Walls as Tile Blocks" },
		{ "WallsAsTileBlocks.Name", "EGridDungeonWallType::WallsAsTileBlocks" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EGridDungeonWallType",
		"EGridDungeonWallType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType()
	{
		if (!Z_Registration_Info_UEnum_EGridDungeonWallType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridDungeonWallType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGridDungeonWallType.InnerSingleton;
	}
	void UGridDungeonConfig::StaticRegisterNativesUGridDungeonConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonConfig);
	UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister()
	{
		return UGridDungeonConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGridDungeonConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCells_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomAreaThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoomAreaThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomAspectDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomAspectDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpanningTreeLoopProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpanningTreeLoopProbability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StairConnectionTollerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StairConnectionTollerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorProximitySteps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorProximitySteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightVariationProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightVariationProbability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalMean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalMean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalStd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalStd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedStairHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedStairHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LaneWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableClusteredTheming_MetaData[];
#endif
		static void NewProp_bEnableClusteredTheming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableClusteredTheming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClusterWithHeightVariation_MetaData[];
#endif
		static void NewProp_bClusterWithHeightVariation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClusterWithHeightVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FloorHeight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WallLayoutType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallLayoutType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WallLayoutType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRoomRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialRoomRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFastCellDistribution_MetaData[];
#endif
		static void NewProp_bFastCellDistribution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFastCellDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DungeonWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DungeonWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DungeonLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridDungeonConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Grid/GridDungeonConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NumCells_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** \n      The number of cells to use while building the dungeon. \n      A larger number would create a bigger and more complex dungeon.   \n      A number of 100-150 builds a medium to large sized dungeon. \n      Experiment with different ranges. You will not see these cells in the final result.\n      */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "The number of cells to use while building the dungeon.\nA larger number would create a bigger and more complex dungeon.\nA number of 100-150 builds a medium to large sized dungeon.\nExperiment with different ranges. You will not see these cells in the final result." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, NumCells), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NumCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NumCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_GridCellSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    This size is determined by the art asset used in the dungeon theme designed by the artist.\n    For e.g., if we have a floor mesh that is 400x400.  The height of a floor is chosen to be 200 units as the stair mesh is 200 units high,\n    then the value should be set to 400x400x200.   You should change this to the dimension of the modular asset your designer has created for the dungeon\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "This size is determined by the art asset used in the dungeon theme designed by the artist.\nFor e.g., if we have a floor mesh that is 400x400.  The height of a floor is chosen to be 200 units as the stair mesh is 200 units high,\nthen the value should be set to 400x400x200.   You should change this to the dimension of the modular asset your designer has created for the dungeon" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_GridCellSize = { "GridCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, GridCellSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_GridCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_GridCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MinCellSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      Minimum size of a generated cell. While generation, a cell is \n      either converted to a room, corridor or is discarded completely.  \n      The Cell width / height is randomly chosen within this range\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "Minimum size of a generated cell. While generation, a cell is\neither converted to a room, corridor or is discarded completely.\nThe Cell width / height is randomly chosen within this range" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MinCellSize = { "MinCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, MinCellSize), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MinCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MinCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxCellSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      Maximum size of a generated cell. While generation, a cell is\n      either converted to a room, corridor or is discarded completely.\n      The Cell width / height is randomly chosen within this range\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "Maximum size of a generated cell. While generation, a cell is\neither converted to a room, corridor or is discarded completely.\nThe Cell width / height is randomly chosen within this range" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxCellSize = { "MaxCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, MaxCellSize), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAreaThreshold_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** \n      If a cell area exceeds past this limit, it is converted into a room. \n      After cells are promoted to rooms, all rooms are connected to each \n      other through corridors (either directly or indirectly. See spanning tree later)\n      This field determines how \"dense\" your dungeon gets.  \n      Reduce this number to get a densely populated dungeon with lots of rooms\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "If a cell area exceeds past this limit, it is converted into a room.\nAfter cells are promoted to rooms, all rooms are connected to each\nother through corridors (either directly or indirectly. See spanning tree later)\nThis field determines how \"dense\" your dungeon gets.\nReduce this number to get a densely populated dungeon with lots of rooms" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAreaThreshold = { "RoomAreaThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, RoomAreaThreshold), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAreaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAreaThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAspectDelta_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** \n      The aspect ratio of the cells (width to height ratio).  \n      Keeping this value near 0 would create square rooms.   \n      Bringing this close to 1 would create elongated / stretched rooms \n      with a high width to height ratio\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "The aspect ratio of the cells (width to height ratio).\nKeeping this value near 0 would create square rooms.\nBringing this close to 1 would create elongated / stretched rooms\nwith a high width to height ratio" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAspectDelta = { "RoomAspectDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, RoomAspectDelta), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAspectDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAspectDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_SpanningTreeLoopProbability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** \n      Determines how many loops you would like to have in your dungeon.  \n      A value near 0 will create fewer loops creating linear dungeons.   \n      A value near 1 would create lots of loops, which would look unoriginal.  \n      It's good to allow a few loops so a value close to zero (~0.2 should be good)\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "Determines how many loops you would like to have in your dungeon.\nA value near 0 will create fewer loops creating linear dungeons.\nA value near 1 would create lots of loops, which would look unoriginal.\nIt's good to allow a few loops so a value close to zero (~0.2 should be good)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_SpanningTreeLoopProbability = { "SpanningTreeLoopProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, SpanningTreeLoopProbability), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_SpanningTreeLoopProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_SpanningTreeLoopProbability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_StairConnectionTollerance_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      The generator would add stairs to make different areas of the dungeon accessible.\n      However, we do not want too many stairs. For e.g., before adding a stair in a \n      particular elevated area, the generator would check if this area is already \n      accessible from a nearby stair. If so, it would not add it.   \n      This tolerance parameter determines how far to look for an existing path\n      before we can add a stair.   Play with this parameter if you see too\n      many stairs close to each other, or too few\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "The generator would add stairs to make different areas of the dungeon accessible.\nHowever, we do not want too many stairs. For e.g., before adding a stair in a\nparticular elevated area, the generator would check if this area is already\naccessible from a nearby stair. If so, it would not add it.\nThis tolerance parameter determines how far to look for an existing path\nbefore we can add a stair.   Play with this parameter if you see too\nmany stairs close to each other, or too few" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_StairConnectionTollerance = { "StairConnectionTollerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, StairConnectionTollerance), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_StairConnectionTollerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_StairConnectionTollerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DoorProximitySteps_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      Increase this value to remove nearby duplicate doors.  This value determines how many cell we \n      can move to reach the two connected cells of a door if the door was removed\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "Increase this value to remove nearby duplicate doors.  This value determines how many cell we\ncan move to reach the two connected cells of a door if the door was removed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DoorProximitySteps = { "DoorProximitySteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, DoorProximitySteps), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DoorProximitySteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DoorProximitySteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_HeightVariationProbability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      weak this value to increase / reduce the height variations (and stairs) in your dungeon.\n      A value close to 0 reduces the height variation and increases as you approach 1. \n      Increasing this value to a higher level might create dungeons with no place for\n      proper stair placement since there is too much height variation.   \n      A value of 0.2 to 0.4 seems good\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "weak this value to increase / reduce the height variations (and stairs) in your dungeon.\nA value close to 0 reduces the height variation and increases as you approach 1.\nIncreasing this value to a higher level might create dungeons with no place for\nproper stair placement since there is too much height variation.\nA value of 0.2 to 0.4 seems good" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_HeightVariationProbability = { "HeightVariationProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, HeightVariationProbability), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_HeightVariationProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_HeightVariationProbability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalMean_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      The random number generator used in the dungeon generator does not use a uniform distribution. \n      Instead it uses a normal distribution to get higher frequency of lower values and fewer higher values\n      (and hence fewer room cells and a lot more corridor cells). \n      Play with these parameters for different results\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "The random number generator used in the dungeon generator does not use a uniform distribution.\nInstead it uses a normal distribution to get higher frequency of lower values and fewer higher values\n(and hence fewer room cells and a lot more corridor cells).\nPlay with these parameters for different results" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalMean = { "NormalMean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, NormalMean), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalMean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalMean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalStd_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      The random number generator used in the dungeon generator does not use a uniform distribution.\n      Instead it uses a normal distribution to get higher frequency of lower values and fewer higher values\n      (and hence fewer room cells and a lot more corridor cells).\n      Play with these parameters for different results\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "The random number generator used in the dungeon generator does not use a uniform distribution.\nInstead it uses a normal distribution to get higher frequency of lower values and fewer higher values\n(and hence fewer room cells and a lot more corridor cells).\nPlay with these parameters for different results" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalStd = { "NormalStd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, NormalStd), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalStd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalStd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxAllowedStairHeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      The number of logical floor units the dungeon height can vary. This determines how high the dungeon's height\n      can vary (e.g. max 2 floors high).   Set this value depending on the stair meshes you designer has created. \n      For e.g.,  if there are two stair meshes, one 200 units high (1 floor) and another 400 units high (2 floors), this value should be set to 2\n      If you do not want any stairs / height variations, set this value to 0\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "The number of logical floor units the dungeon height can vary. This determines how high the dungeon's height\ncan vary (e.g. max 2 floors high).   Set this value depending on the stair meshes you designer has created.\nFor e.g.,  if there are two stair meshes, one 200 units high (1 floor) and another 400 units high (2 floors), this value should be set to 2\nIf you do not want any stairs / height variations, set this value to 0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxAllowedStairHeight = { "MaxAllowedStairHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, MaxAllowedStairHeight), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxAllowedStairHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxAllowedStairHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_LaneWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** \n      The width of the lane connecting the rooms.   When rooms are to be connected, a \"lane\" is created to connect them together. \n      Any cell colliding with this lane is converted to a corridor.  Else, it is converted to a cell of type \"corridor padding\"\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "The width of the lane connecting the rooms.   When rooms are to be connected, a \"lane\" is created to connect them together.\nAny cell colliding with this lane is converted to a corridor.  Else, it is converted to a cell of type \"corridor padding\"" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_LaneWidth = { "LaneWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, LaneWidth), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_LaneWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_LaneWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      This allows you to cluster the dungeon into different groups and apply different themes on each groups.  This helps add variation to the level\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "This allows you to cluster the dungeon into different groups and apply different themes on each groups.  This helps add variation to the level" },
	};
#endif
	void Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming_SetBit(void* Obj)
	{
		((UGridDungeonConfig*)Obj)->bEnableClusteredTheming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming = { "bEnableClusteredTheming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridDungeonConfig), &Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n      While clustering corridors together, should the height variations be taken into account,\n      If true, will group nearby cells with different heights, provided a stair connects to them.\n      This will create clusters of larger sections of corridors together\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "While clustering corridors together, should the height variations be taken into account,\nIf true, will group nearby cells with different heights, provided a stair connects to them.\nThis will create clusters of larger sections of corridors together" },
	};
#endif
	void Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation_SetBit(void* Obj)
	{
		((UGridDungeonConfig*)Obj)->bClusterWithHeightVariation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation = { "bClusterWithHeightVariation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridDungeonConfig), &Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_FloorHeight_MetaData[] = {
		{ "Comment", "/** [Advanced] Ignored *///(EditAnywhere, BlueprintReadWrite, Category = Dungeon)\n" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "[Advanced] Ignored //(EditAnywhere, BlueprintReadWrite, Category = Dungeon)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_FloorHeight = { "FloorHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, FloorHeight), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_FloorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_FloorHeight_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType = { "WallLayoutType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, WallLayoutType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonWallType, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType_MetaData)) }; // 3631288764
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_InitialRoomRadius_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** [Advanced]  Keep between 10-15 */" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
		{ "ToolTip", "[Advanced]  Keep between 10-15" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_InitialRoomRadius = { "InitialRoomRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, InitialRoomRadius), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_InitialRoomRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_InitialRoomRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
#endif
	void Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution_SetBit(void* Obj)
	{
		((UGridDungeonConfig*)Obj)->bFastCellDistribution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution = { "bFastCellDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridDungeonConfig), &Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditCondition", "bFastCellDistribution" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonWidth = { "DungeonWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, DungeonWidth), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonLength_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditCondition", "bFastCellDistribution" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonLength = { "DungeonLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonConfig, DungeonLength), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NumCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_GridCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MinCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAreaThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_RoomAspectDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_SpanningTreeLoopProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_StairConnectionTollerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DoorProximitySteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_HeightVariationProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalMean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_NormalStd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_MaxAllowedStairHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_LaneWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bEnableClusteredTheming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bClusterWithHeightVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_FloorHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_WallLayoutType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_InitialRoomRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_bFastCellDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonConfig_Statics::NewProp_DungeonLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridDungeonConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonConfig_Statics::ClassParams = {
		&UGridDungeonConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridDungeonConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridDungeonConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridDungeonConfig()
	{
		if (!Z_Registration_Info_UClass_UGridDungeonConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonConfig.OuterSingleton, Z_Construct_UClass_UGridDungeonConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridDungeonConfig.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonConfig>()
	{
		return UGridDungeonConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonConfig);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::EnumInfo[] = {
		{ EGridDungeonWallType_StaticEnum, TEXT("EGridDungeonWallType"), &Z_Registration_Info_UEnum_EGridDungeonWallType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3631288764U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonConfig, UGridDungeonConfig::StaticClass, TEXT("UGridDungeonConfig"), &Z_Registration_Info_UClass_UGridDungeonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonConfig), 3588771413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_822831579(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
