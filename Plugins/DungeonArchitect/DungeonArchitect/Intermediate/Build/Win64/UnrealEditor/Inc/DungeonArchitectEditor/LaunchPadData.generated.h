// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTEDITOR_LaunchPadData_generated_h
#error "LaunchPadData.generated.h already included, missing '#pragma once' in LaunchPadData.h"
#endif
#define DUNGEONARCHITECTEDITOR_LaunchPadData_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLaunchPadCategoryItem_Statics; \
	DUNGEONARCHITECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<struct FLaunchPadCategoryItem>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLaunchPadCategories_Statics; \
	DUNGEONARCHITECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<struct FLaunchPadCategories>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLaunchPadPageHeader_Statics; \
	DUNGEONARCHITECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<struct FLaunchPadPageHeader>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_CardInfo_Statics; \
	DUNGEONARCHITECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<struct FLaunchPadPageLayout_CardGrid_CardInfo>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Category_Statics; \
	DUNGEONARCHITECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<struct FLaunchPadPageLayout_CardGrid_Category>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_CardGrid_Statics; \
	DUNGEONARCHITECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<struct FLaunchPadPageLayout_CardGrid>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLaunchPadPageActionData_Statics; \
	DUNGEONARCHITECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<struct FLaunchPadPageActionData>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLaunchPadPageLayout_Details_Statics; \
	DUNGEONARCHITECTEDITOR_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<struct FLaunchPadPageLayout_Details>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Data_LaunchPadData_h


#define FOREACH_ENUM_ELAUNCHPAGEPAGELAYOUT(op) \
	op(ELaunchPagePageLayout::CardGrid) \
	op(ELaunchPagePageLayout::Details) \
	op(ELaunchPagePageLayout::News) 

enum class ELaunchPagePageLayout : uint8;
template<> DUNGEONARCHITECTEDITOR_API UEnum* StaticEnum<ELaunchPagePageLayout>();

#define FOREACH_ENUM_ELAUNCHPADACTIONTYPE(op) \
	op(ELaunchPadActionType::None) \
	op(ELaunchPadActionType::OpenFolder) \
	op(ELaunchPadActionType::OpenScene) \
	op(ELaunchPadActionType::OpenTheme) \
	op(ELaunchPadActionType::OpenSnapFlow) \
	op(ELaunchPadActionType::OpenGridFlow) \
	op(ELaunchPadActionType::CloneScene) \
	op(ELaunchPadActionType::CloneSceneAndBuild) \
	op(ELaunchPadActionType::CloneTheme) \
	op(ELaunchPadActionType::CloneSnapFlow) \
	op(ELaunchPadActionType::CloneGridFlow) \
	op(ELaunchPadActionType::CloneSnapGridFlow) \
	op(ELaunchPadActionType::Documentation) \
	op(ELaunchPadActionType::LauncherURL) \
	op(ELaunchPadActionType::AddStarterContent) \
	op(ELaunchPadActionType::Video) 

enum class ELaunchPadActionType : uint8;
template<> DUNGEONARCHITECTEDITOR_API UEnum* StaticEnum<ELaunchPadActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
