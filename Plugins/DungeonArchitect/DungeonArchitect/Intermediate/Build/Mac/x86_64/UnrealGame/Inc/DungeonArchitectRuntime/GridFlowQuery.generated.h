// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDungeonBuilder;
enum class EGridFlowAbstractNodeRoomType : uint8;
struct FGridFlowChunkQueryResult;
class UFlowAbstractNode;
struct FRandomStream;
struct FFlowTilemapCell;
#ifdef DUNGEONARCHITECTRUNTIME_GridFlowQuery_generated_h
#error "GridFlowQuery.generated.h already included, missing '#pragma once' in GridFlowQuery.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridFlowQuery_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridFlowChunkQueryResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FGridFlowChunkQueryResult>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsNearMarker); \
	DECLARE_FUNCTION(execGetDungeonBounds); \
	DECLARE_FUNCTION(execGetAllChunksOfType); \
	DECLARE_FUNCTION(execGetChunkAtLayoutNodeCoord); \
	DECLARE_FUNCTION(execGetChunkAtLayoutNode); \
	DECLARE_FUNCTION(execGetChunkAtWorldCoord); \
	DECLARE_FUNCTION(execGetFreeTileLocation); \
	DECLARE_FUNCTION(execGetCellRoomType); \
	DECLARE_FUNCTION(execGetCellAtWorldCoord); \
	DECLARE_FUNCTION(execGetCellAtTileCoord); \
	DECLARE_FUNCTION(execConvertWorldToTileCoord); \
	DECLARE_FUNCTION(execConvertTileToWorldCoord);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsNearMarker); \
	DECLARE_FUNCTION(execGetDungeonBounds); \
	DECLARE_FUNCTION(execGetAllChunksOfType); \
	DECLARE_FUNCTION(execGetChunkAtLayoutNodeCoord); \
	DECLARE_FUNCTION(execGetChunkAtLayoutNode); \
	DECLARE_FUNCTION(execGetChunkAtWorldCoord); \
	DECLARE_FUNCTION(execGetFreeTileLocation); \
	DECLARE_FUNCTION(execGetCellRoomType); \
	DECLARE_FUNCTION(execGetCellAtWorldCoord); \
	DECLARE_FUNCTION(execGetCellAtTileCoord); \
	DECLARE_FUNCTION(execConvertWorldToTileCoord); \
	DECLARE_FUNCTION(execConvertTileToWorldCoord);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridFlowQuery(); \
	friend struct Z_Construct_UClass_UGridFlowQuery_Statics; \
public: \
	DECLARE_CLASS(UGridFlowQuery, UDungeonQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridFlowQuery)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUGridFlowQuery(); \
	friend struct Z_Construct_UClass_UGridFlowQuery_Statics; \
public: \
	DECLARE_CLASS(UGridFlowQuery, UDungeonQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridFlowQuery)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridFlowQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridFlowQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridFlowQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridFlowQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridFlowQuery(UGridFlowQuery&&); \
	NO_API UGridFlowQuery(const UGridFlowQuery&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridFlowQuery() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridFlowQuery(UGridFlowQuery&&); \
	NO_API UGridFlowQuery(const UGridFlowQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridFlowQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridFlowQuery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridFlowQuery)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_43_PROLOG
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridFlowQuery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
