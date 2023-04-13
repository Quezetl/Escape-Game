// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowDungeon() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowConfig();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowAsset_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModel();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionInstance();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapGridFlowModuleInstanceSerializedData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowAbstractGraph_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowQuery_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowQuery();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowToolData_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowToolData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonToolData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowBuilder();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowSelectorLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowSelectorLogic();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowTransformLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowTransformLogic();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic();
// End Cross Module References
	void USnapGridFlowConfig::StaticRegisterNativesUSnapGridFlowConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowConfig);
	UClass* Z_Construct_UClass_USnapGridFlowConfig_NoRegister()
	{
		return USnapGridFlowConfig::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleDatabase_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModuleDatabase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowGraph_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FlowGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTheme_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemTheme;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportDoorCategories_MetaData[];
#endif
		static void NewProp_bSupportDoorCategories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportDoorCategories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLayoutBuildRetries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLayoutBuildRetries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferModulesWithMinimumDoors_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferModulesWithMinimumDoors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTimeoutsRetriesAllowed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTimeoutsRetriesAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSinglePersistentDungeon_MetaData[];
#endif
		static void NewProp_bGenerateSinglePersistentDungeon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSinglePersistentDungeon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxResolveFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResolveFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonRepeatingRooms_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NonRepeatingRooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleDatabase_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** A module database asset that contains the references of the modules to use for building the dungeon */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "A module database asset that contains the references of the modules to use for building the dungeon" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleDatabase = { "ModuleDatabase", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowConfig, ModuleDatabase), Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleDatabase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_FlowGraph_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** A flow graph allows you to design the flow of your dungeon paths */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "A flow graph allows you to design the flow of your dungeon paths" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_FlowGraph = { "FlowGraph", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowConfig, FlowGraph), Z_Construct_UClass_USnapGridFlowAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_FlowGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_FlowGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ItemTheme_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Spawn the item actors using a theme file.   Here you'd define markers for every item you specified in the flow graph */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "Spawn the item actors using a theme file.   Here you'd define markers for every item you specified in the flow graph" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ItemTheme = { "ItemTheme", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowConfig, ItemTheme), Z_Construct_UClass_UDungeonThemeAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ItemTheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ItemTheme_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     * Supports door categories names. When stitching the modules, only connections with the same door categories will be stitched together\n     * This will require more processing power, use it only when required. Disable if not needed, to get faster dungeon builds\n     */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "Supports door categories names. When stitching the modules, only connections with the same door categories will be stitched together\nThis will require more processing power, use it only when required. Disable if not needed, to get faster dungeon builds" },
	};
#endif
	void Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories_SetBit(void* Obj)
	{
		((USnapGridFlowConfig*)Obj)->bSupportDoorCategories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories = { "bSupportDoorCategories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapGridFlowConfig), &Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumLayoutBuildRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** If the layout graph build fails, it will be retried with another seed multiple tiles based on this count */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "If the layout graph build fails, it will be retried with another seed multiple tiles based on this count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumLayoutBuildRetries = { "NumLayoutBuildRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowConfig, NumLayoutBuildRetries), METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumLayoutBuildRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumLayoutBuildRetries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_PreferModulesWithMinimumDoors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n    * When choosing modules to stitch,  prefer modules with minimum possible doors.\n    * E.g. If a module requires 3 doors,  a module with 4 doors will not be used as a better alternative with 3 doors is available\n    * Disable this (bring close to 0) if you want some randomness.   Fully enabling this (setting it to 1.0) will not make some\n    * modules show up in the final graph as the version with lesser doors will always show up\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "When choosing modules to stitch,  prefer modules with minimum possible doors.\nE.g. If a module requires 3 doors,  a module with 4 doors will not be used as a better alternative with 3 doors is available\nDisable this (bring close to 0) if you want some randomness.   Fully enabling this (setting it to 1.0) will not make some\nmodules show up in the final graph as the version with lesser doors will always show up" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_PreferModulesWithMinimumDoors = { "PreferModulesWithMinimumDoors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowConfig, PreferModulesWithMinimumDoors), METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_PreferModulesWithMinimumDoors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_PreferModulesWithMinimumDoors_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_ValueProp = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_Key_KeyProp = { "ParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Override any of the flow graph variables at runtime */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "Override any of the flow graph variables at runtime" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowConfig, ParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumTimeoutsRetriesAllowed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The number of timeouts allowed while building the dungeon with multiple retries */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "The number of timeouts allowed while building the dungeon with multiple retries" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumTimeoutsRetriesAllowed = { "NumTimeoutsRetriesAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowConfig, NumTimeoutsRetriesAllowed), METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumTimeoutsRetriesAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumTimeoutsRetriesAllowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * Build the entire dungeon in the main level by copying over the module actors to the persistent level. This will disable level streaming\n     * and is meant to be used in the editor only.  You may bake your lightmaps with this method\n     **/" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "Build the entire dungeon in the main level by copying over the module actors to the persistent level. This will disable level streaming\nand is meant to be used in the editor only.  You may bake your lightmaps with this method" },
	};
#endif
	void Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_SetBit(void* Obj)
	{
		((USnapGridFlowConfig*)Obj)->bGenerateSinglePersistentDungeon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bGenerateSinglePersistentDungeon = { "bGenerateSinglePersistentDungeon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapGridFlowConfig), &Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bGenerateSinglePersistentDungeon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_MaxResolveFrames_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     * The processing power allotted to the module resolve stage.  This allows the algorithm to bail out early if a solution is not\n     * found and make another retry.  Provide a value around (10,000)\n     */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "The processing power allotted to the module resolve stage.  This allows the algorithm to bail out early if a solution is not\nfound and make another retry.  Provide a value around (10,000)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_MaxResolveFrames = { "MaxResolveFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowConfig, MaxResolveFrames), METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_MaxResolveFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_MaxResolveFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NonRepeatingRooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     * The system tries to not repeat a module within the last few room depths specified below\n     */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "The system tries to not repeat a module within the last few room depths specified below" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NonRepeatingRooms = { "NonRepeatingRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowConfig, NonRepeatingRooms), METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NonRepeatingRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NonRepeatingRooms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleDatabase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_FlowGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ItemTheme,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumLayoutBuildRetries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_PreferModulesWithMinimumDoors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumTimeoutsRetriesAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bGenerateSinglePersistentDungeon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_MaxResolveFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NonRepeatingRooms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowConfig_Statics::ClassParams = {
		&USnapGridFlowConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapGridFlowConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowConfig()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowConfig.OuterSingleton, Z_Construct_UClass_USnapGridFlowConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowConfig.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowConfig>()
	{
		return USnapGridFlowConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowConfig);
	void USnapGridFlowModel::StaticRegisterNativesUSnapGridFlowModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModel);
	UClass* Z_Construct_UClass_USnapGridFlowModel_NoRegister()
	{
		return USnapGridFlowModel::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbstractGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbstractGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonModel,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapConnectionInstance, METADATA_PARAMS(nullptr, 0) }; // 2880625270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_Connections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModel, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_Connections_MetaData)) }; // 2880625270
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_ModuleInstances_Inner = { "ModuleInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapGridFlowModuleInstanceSerializedData, METADATA_PARAMS(nullptr, 0) }; // 2159048449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_ModuleInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_ModuleInstances = { "ModuleInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModel, ModuleInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_ModuleInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_ModuleInstances_MetaData)) }; // 2159048449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_AbstractGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_AbstractGraph = { "AbstractGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapGridFlowModel, AbstractGraph), Z_Construct_UClass_USnapGridFlowAbstractGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_AbstractGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_AbstractGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_ModuleInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_ModuleInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_AbstractGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModel_Statics::ClassParams = {
		&USnapGridFlowModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapGridFlowModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowModel()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModel.OuterSingleton, Z_Construct_UClass_USnapGridFlowModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowModel.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowModel>()
	{
		return USnapGridFlowModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModel);
	void USnapGridFlowQuery::StaticRegisterNativesUSnapGridFlowQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowQuery);
	UClass* Z_Construct_UClass_USnapGridFlowQuery_NoRegister()
	{
		return USnapGridFlowQuery::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowQuery_Statics::ClassParams = {
		&USnapGridFlowQuery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowQuery()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowQuery.OuterSingleton, Z_Construct_UClass_USnapGridFlowQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowQuery.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowQuery>()
	{
		return USnapGridFlowQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowQuery);
	void USnapGridFlowToolData::StaticRegisterNativesUSnapGridFlowToolData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowToolData);
	UClass* Z_Construct_UClass_USnapGridFlowToolData_NoRegister()
	{
		return USnapGridFlowToolData::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowToolData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowToolData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowToolData_Statics::ClassParams = {
		&USnapGridFlowToolData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowToolData()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowToolData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowToolData.OuterSingleton, Z_Construct_UClass_USnapGridFlowToolData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowToolData.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowToolData>()
	{
		return USnapGridFlowToolData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowToolData);
	void USnapGridFlowBuilder::StaticRegisterNativesUSnapGridFlowBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowBuilder);
	UClass* Z_Construct_UClass_USnapGridFlowBuilder_NoRegister()
	{
		return USnapGridFlowBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowBuilder_Statics::ClassParams = {
		&USnapGridFlowBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowBuilder()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowBuilder.OuterSingleton, Z_Construct_UClass_USnapGridFlowBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowBuilder>()
	{
		return USnapGridFlowBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowBuilder);
	DEFINE_FUNCTION(USnapGridFlowSelectorLogic::execSelectNode)
	{
		P_GET_OBJECT(USnapGridFlowModel,Z_Param_Model);
		P_GET_OBJECT(USnapGridFlowConfig,Z_Param_Config);
		P_GET_OBJECT(USnapGridFlowBuilder,Z_Param_Builder);
		P_GET_OBJECT(USnapGridFlowQuery,Z_Param_Query);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_MarkerTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectNode_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Builder,Z_Param_Query,Z_Param_Out_RandomStream,Z_Param_Out_MarkerTransform);
		P_NATIVE_END;
	}
	static FName NAME_USnapGridFlowSelectorLogic_SelectNode = FName(TEXT("SelectNode"));
	bool USnapGridFlowSelectorLogic::SelectNode(USnapGridFlowModel* Model, USnapGridFlowConfig* Config, USnapGridFlowBuilder* Builder, USnapGridFlowQuery* Query, FRandomStream const& RandomStream, FTransform const& MarkerTransform)
	{
		SnapGridFlowSelectorLogic_eventSelectNode_Parms Parms;
		Parms.Model=Model;
		Parms.Config=Config;
		Parms.Builder=Builder;
		Parms.Query=Query;
		Parms.RandomStream=RandomStream;
		Parms.MarkerTransform=MarkerTransform;
		ProcessEvent(FindFunctionChecked(NAME_USnapGridFlowSelectorLogic_SelectNode),&Parms);
		return !!Parms.ReturnValue;
	}
	void USnapGridFlowSelectorLogic::StaticRegisterNativesUSnapGridFlowSelectorLogic()
	{
		UClass* Class = USnapGridFlowSelectorLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectNode", &USnapGridFlowSelectorLogic::execSelectNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, Model), Z_Construct_UClass_USnapGridFlowModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, Config), Z_Construct_UClass_USnapGridFlowConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, Builder), Z_Construct_UClass_USnapGridFlowBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, Query), Z_Construct_UClass_USnapGridFlowQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform = { "MarkerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, MarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform_MetaData)) };
	void Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SnapGridFlowSelectorLogic_eventSelectNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapGridFlowSelectorLogic_eventSelectNode_Parms), &Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Builder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapGridFlowSelectorLogic, nullptr, "SelectNode", nullptr, nullptr, sizeof(SnapGridFlowSelectorLogic_eventSelectNode_Parms), Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowSelectorLogic);
	UClass* Z_Construct_UClass_USnapGridFlowSelectorLogic_NoRegister()
	{
		return USnapGridFlowSelectorLogic::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonSelectorLogic,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode, "SelectNode" }, // 2882505489
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowSelectorLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::ClassParams = {
		&USnapGridFlowSelectorLogic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x043010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowSelectorLogic()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowSelectorLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowSelectorLogic.OuterSingleton, Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowSelectorLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowSelectorLogic>()
	{
		return USnapGridFlowSelectorLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowSelectorLogic);
	DEFINE_FUNCTION(USnapGridFlowTransformLogic::execGetNodeOffset)
	{
		P_GET_OBJECT(USnapGridFlowModel,Z_Param_Model);
		P_GET_OBJECT(USnapGridFlowConfig,Z_Param_Config);
		P_GET_OBJECT(USnapGridFlowQuery,Z_Param_Query);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Query,Z_Param_Out_RandomStream,Z_Param_Out_Offset);
		P_NATIVE_END;
	}
	static FName NAME_USnapGridFlowTransformLogic_GetNodeOffset = FName(TEXT("GetNodeOffset"));
	void USnapGridFlowTransformLogic::GetNodeOffset(USnapGridFlowModel* Model, USnapGridFlowConfig* Config, USnapGridFlowQuery* Query, FRandomStream const& RandomStream, FTransform& Offset)
	{
		SnapGridFlowTransformLogic_eventGetNodeOffset_Parms Parms;
		Parms.Model=Model;
		Parms.Config=Config;
		Parms.Query=Query;
		Parms.RandomStream=RandomStream;
		Parms.Offset=Offset;
		ProcessEvent(FindFunctionChecked(NAME_USnapGridFlowTransformLogic_GetNodeOffset),&Parms);
		Offset=Parms.Offset;
	}
	void USnapGridFlowTransformLogic::StaticRegisterNativesUSnapGridFlowTransformLogic()
	{
		UClass* Class = USnapGridFlowTransformLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNodeOffset", &USnapGridFlowTransformLogic::execGetNodeOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, Model), Z_Construct_UClass_USnapGridFlowModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, Config), Z_Construct_UClass_USnapGridFlowConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, Query), Z_Construct_UClass_USnapGridFlowQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapGridFlowTransformLogic, nullptr, "GetNodeOffset", nullptr, nullptr, sizeof(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms), Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowTransformLogic);
	UClass* Z_Construct_UClass_USnapGridFlowTransformLogic_NoRegister()
	{
		return USnapGridFlowTransformLogic::StaticClass();
	}
	struct Z_Construct_UClass_USnapGridFlowTransformLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonTransformLogic,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset, "GetNodeOffset" }, // 2946086507
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowTransformLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::ClassParams = {
		&USnapGridFlowTransformLogic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x043010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapGridFlowTransformLogic()
	{
		if (!Z_Registration_Info_UClass_USnapGridFlowTransformLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowTransformLogic.OuterSingleton, Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapGridFlowTransformLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowTransformLogic>()
	{
		return USnapGridFlowTransformLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowTransformLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowConfig, USnapGridFlowConfig::StaticClass, TEXT("USnapGridFlowConfig"), &Z_Registration_Info_UClass_USnapGridFlowConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowConfig), 1478670786U) },
		{ Z_Construct_UClass_USnapGridFlowModel, USnapGridFlowModel::StaticClass, TEXT("USnapGridFlowModel"), &Z_Registration_Info_UClass_USnapGridFlowModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModel), 3577671202U) },
		{ Z_Construct_UClass_USnapGridFlowQuery, USnapGridFlowQuery::StaticClass, TEXT("USnapGridFlowQuery"), &Z_Registration_Info_UClass_USnapGridFlowQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowQuery), 829207880U) },
		{ Z_Construct_UClass_USnapGridFlowToolData, USnapGridFlowToolData::StaticClass, TEXT("USnapGridFlowToolData"), &Z_Registration_Info_UClass_USnapGridFlowToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowToolData), 3521111270U) },
		{ Z_Construct_UClass_USnapGridFlowBuilder, USnapGridFlowBuilder::StaticClass, TEXT("USnapGridFlowBuilder"), &Z_Registration_Info_UClass_USnapGridFlowBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowBuilder), 280312429U) },
		{ Z_Construct_UClass_USnapGridFlowSelectorLogic, USnapGridFlowSelectorLogic::StaticClass, TEXT("USnapGridFlowSelectorLogic"), &Z_Registration_Info_UClass_USnapGridFlowSelectorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowSelectorLogic), 2610323667U) },
		{ Z_Construct_UClass_USnapGridFlowTransformLogic, USnapGridFlowTransformLogic::StaticClass, TEXT("USnapGridFlowTransformLogic"), &Z_Registration_Info_UClass_USnapGridFlowTransformLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowTransformLogic), 4210514209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_3455035475(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
