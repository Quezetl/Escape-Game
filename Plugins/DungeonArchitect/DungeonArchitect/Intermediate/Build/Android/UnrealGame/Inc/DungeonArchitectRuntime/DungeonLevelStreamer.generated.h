// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_DungeonLevelStreamer_generated_h
#error "DungeonLevelStreamer.generated.h already included, missing '#pragma once' in DungeonLevelStreamer.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonLevelStreamer_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDungeonLevelStreamingConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamer_h


#define FOREACH_ENUM_EDUNGEONLEVELSTREAMINGLOADINGSTRATEGY(op) \
	op(EDungeonLevelStreamingLoadingStrategy::PreloadEverything) \
	op(EDungeonLevelStreamingLoadingStrategy::LoadOnDemand) \
	op(EDungeonLevelStreamingLoadingStrategy::OnlyVisibleLoaded) 

enum class EDungeonLevelStreamingLoadingStrategy : uint8;
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamingLoadingStrategy>();

#define FOREACH_ENUM_EDUNGEONLEVELSTREAMINGSTRATEGY(op) \
	op(EDungeonLevelStreamingStrategy::LayoutDepth) \
	op(EDungeonLevelStreamingStrategy::Distance) 

enum class EDungeonLevelStreamingStrategy : uint8;
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamingStrategy>();

#define FOREACH_ENUM_EDUNGEONLEVELSTREAMLOADMETHOD(op) \
	op(EDungeonLevelStreamLoadMethod::LoadOnDemand) \
	op(EDungeonLevelStreamLoadMethod::LoadEverythingInMemory) 

enum class EDungeonLevelStreamLoadMethod : uint8;
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamLoadMethod>();

#define FOREACH_ENUM_EDUNGEONLEVELSTREAMUNLOADMETHOD(op) \
	op(EDungeonLevelStreamUnloadMethod::KeepHiddenChunksInMemory) \
	op(EDungeonLevelStreamUnloadMethod::UnloadHiddenChunks) 

enum class EDungeonLevelStreamUnloadMethod : uint8;
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamUnloadMethod>();

#define FOREACH_ENUM_EDUNGEONLEVELSTREAMCHUNKSELECTION(op) \
	op(EDungeonLevelStreamChunkSelection::PlayerLocations) \
	op(EDungeonLevelStreamChunkSelection::SpawnRoomLocations) 

enum class EDungeonLevelStreamChunkSelection : uint8;
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonLevelStreamChunkSelection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
