// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemapTaskInitialize() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskInitialize_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskInitialize();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTask();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod;
	static UEnum* EGridFlowTilemapWallGenerationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridFlowTilemapWallGenerationMethod"));
		}
		return Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridFlowTilemapWallGenerationMethod>()
	{
		return EGridFlowTilemapWallGenerationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enumerators[] = {
		{ "EGridFlowTilemapWallGenerationMethod::WallAsTiles", (int64)EGridFlowTilemapWallGenerationMethod::WallAsTiles },
		{ "EGridFlowTilemapWallGenerationMethod::WallAsEdges", (int64)EGridFlowTilemapWallGenerationMethod::WallAsEdges },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "WallAsEdges.DisplayName", "Wall as Edges" },
		{ "WallAsEdges.Name", "EGridFlowTilemapWallGenerationMethod::WallAsEdges" },
		{ "WallAsTiles.DisplayName", "Wall as Tiles" },
		{ "WallAsTiles.Name", "EGridFlowTilemapWallGenerationMethod::WallAsTiles" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EGridFlowTilemapWallGenerationMethod",
		"EGridFlowTilemapWallGenerationMethod",
		Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod()
	{
		if (!Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod.InnerSingleton;
	}
	void UGridFlowTilemapTaskInitialize::StaticRegisterNativesUGridFlowTilemapTaskInitialize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapTaskInitialize);
	UClass* Z_Construct_UClass_UGridFlowTilemapTaskInitialize_NoRegister()
	{
		return UGridFlowTilemapTaskInitialize::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilemapSizePerNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TilemapSizePerNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerturbAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerturbAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorridorLaneWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CorridorLaneWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutPadding_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayoutPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCropTilemapToLayout_MetaData[];
#endif
		static void NewProp_bCropTilemapToLayout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCropTilemapToLayout;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WallGenerationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallGenerationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WallGenerationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaveThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaveThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaveAutomataNeighbors_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CaveAutomataNeighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaveAutomataIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CaveAutomataIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomColorSaturation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomColorSaturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomColorBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomColorBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugLayoutTiles_MetaData[];
#endif
		static void NewProp_bDebugLayoutTiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugLayoutTiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowTilemapTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "MenuPriority", "2100" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "TilemapTask", "" },
		{ "Title", "Create Tilemap" },
		{ "Tooltip", "Create Tilemap" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_TilemapSizePerNode_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/**\n        The nodes in the layout graph are converted into rooms, corridors or cave chunks. \n        This determines how many tiles in the tilemap are used to generate a room\n        Increase this number to get more tiles in the room (also also increase the size of the tilemap)\n\n        Variable Name: TilemapSizePerNode\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "The nodes in the layout graph are converted into rooms, corridors or cave chunks.\nThis determines how many tiles in the tilemap are used to generate a room\nIncrease this number to get more tiles in the room (also also increase the size of the tilemap)\n\nVariable Name: TilemapSizePerNode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_TilemapSizePerNode = { "TilemapSizePerNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, TilemapSizePerNode), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_TilemapSizePerNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_TilemapSizePerNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_PerturbAmount_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/**\n        The room walls are move around to give an uneven look.  Bring this value down to get more evenly spaced square rooms\n\n        Variable Name: PerturbAmount\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "The room walls are move around to give an uneven look.  Bring this value down to get more evenly spaced square rooms\n\nVariable Name: PerturbAmount" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_PerturbAmount = { "PerturbAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, PerturbAmount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_PerturbAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_PerturbAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CorridorLaneWidth_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/**\n        The width in tile cells for the generated corridors in the tilemap\n\n        Variable Name: CorridorLaneWidth\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "The width in tile cells for the generated corridors in the tilemap\n\nVariable Name: CorridorLaneWidth" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CorridorLaneWidth = { "CorridorLaneWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, CorridorLaneWidth), METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CorridorLaneWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CorridorLaneWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_LayoutPadding_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/**\n        The tilemap is cropped to the layout boundaries.  \n        Add padding on the tilemap around the layout boundaries\n\n        Variable Name: LayoutPadding\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "The tilemap is cropped to the layout boundaries.\nAdd padding on the tilemap around the layout boundaries\n\nVariable Name: LayoutPadding" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_LayoutPadding = { "LayoutPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, LayoutPadding), METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_LayoutPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_LayoutPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/**\n        After the dungeon has been built, the tilemap is cropped to fit the dungeon layout\n        Disable this if you rely on static room positions (like blending static art asset to enter the dungeon)\n\n        Variable Name: bCropTilemapToLayout\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "After the dungeon has been built, the tilemap is cropped to fit the dungeon layout\nDisable this if you rely on static room positions (like blending static art asset to enter the dungeon)\n\nVariable Name: bCropTilemapToLayout" },
	};
#endif
	void Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout_SetBit(void* Obj)
	{
		((UGridFlowTilemapTaskInitialize*)Obj)->bCropTilemapToLayout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout = { "bCropTilemapToLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridFlowTilemapTaskInitialize), &Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/**\n        Configure walls to be thick (that take up an entire tile) or thin that are place don the edge of a tile.\n        This depends on your art asset used in the theme file. Set accordingly\n     **/" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "Configure walls to be thick (that take up an entire tile) or thin that are place don the edge of a tile.\nThis depends on your art asset used in the theme file. Set accordingly" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod = { "WallGenerationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, WallGenerationMethod), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapWallGenerationMethod, METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod_MetaData)) }; // 2854452897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveThickness_MetaData[] = {
		{ "Category", "Cave Settings" },
		{ "Comment", "/**\n        Control the thickness of the generate caves\n\n        Variable Name: CaveThickness\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "Control the thickness of the generate caves\n\nVariable Name: CaveThickness" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveThickness = { "CaveThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, CaveThickness), METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataNeighbors_MetaData[] = {
		{ "Category", "Cave Settings" },
		{ "Comment", "/**\n        Cave Generation Finite Automata setting. The number of rock neighbors for a \n        tile to turn into a rock\n\n        Variable Name: CaveAutomataNeighbors\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "Cave Generation Finite Automata setting. The number of rock neighbors for a\ntile to turn into a rock\n\nVariable Name: CaveAutomataNeighbors" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataNeighbors = { "CaveAutomataNeighbors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, CaveAutomataNeighbors), METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataNeighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataNeighbors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataIterations_MetaData[] = {
		{ "Category", "Cave Settings" },
		{ "Comment", "/**\n        Cave Generation Finite Automata setting. The number of iterations to run\n\n        Variable Name: CaveAutomataIterations\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "Cave Generation Finite Automata setting. The number of iterations to run\n\nVariable Name: CaveAutomataIterations" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataIterations = { "CaveAutomataIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, CaveAutomataIterations), METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorSaturation_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "Comment", "/**\n        When a layout node is selected, the relevant tiles in the tilemap light up. \n        This setting controls the color.  This is only for preview purpose\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "When a layout node is selected, the relevant tiles in the tilemap light up.\nThis setting controls the color.  This is only for preview purpose\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorSaturation = { "RoomColorSaturation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, RoomColorSaturation), METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorSaturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorBrightness_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "Comment", "/**\n        When a layout node is selected, the relevant tiles in the tilemap light up.\n        This setting controls the color.  This is only for preview purpose\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "When a layout node is selected, the relevant tiles in the tilemap light up.\nThis setting controls the color.  This is only for preview purpose\n\nVariable Name: [N/A]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorBrightness = { "RoomColorBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridFlowTilemapTaskInitialize, RoomColorBrightness), METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n        Debug: Shows the layout tiles in red\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h" },
		{ "ToolTip", "Debug: Shows the layout tiles in red\n\nVariable Name: [N/A]" },
	};
#endif
	void Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles_SetBit(void* Obj)
	{
		((UGridFlowTilemapTaskInitialize*)Obj)->bDebugLayoutTiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles = { "bDebugLayoutTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGridFlowTilemapTaskInitialize), &Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_TilemapSizePerNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_PerturbAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CorridorLaneWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_LayoutPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bCropTilemapToLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_WallGenerationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataNeighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_CaveAutomataIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorSaturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_RoomColorBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::NewProp_bDebugLayoutTiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapTaskInitialize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::ClassParams = {
		&UGridFlowTilemapTaskInitialize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowTilemapTaskInitialize()
	{
		if (!Z_Registration_Info_UClass_UGridFlowTilemapTaskInitialize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapTaskInitialize.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowTilemapTaskInitialize.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapTaskInitialize>()
	{
		return UGridFlowTilemapTaskInitialize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapTaskInitialize);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::EnumInfo[] = {
		{ EGridFlowTilemapWallGenerationMethod_StaticEnum, TEXT("EGridFlowTilemapWallGenerationMethod"), &Z_Registration_Info_UEnum_EGridFlowTilemapWallGenerationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2854452897U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemapTaskInitialize, UGridFlowTilemapTaskInitialize::StaticClass, TEXT("UGridFlowTilemapTaskInitialize"), &Z_Registration_Info_UClass_UGridFlowTilemapTaskInitialize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapTaskInitialize), 3766280707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_306488442(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
