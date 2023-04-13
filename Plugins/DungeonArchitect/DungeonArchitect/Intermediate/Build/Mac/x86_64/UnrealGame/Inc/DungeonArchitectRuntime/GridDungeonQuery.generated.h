// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDungeonBuilder;
struct FCellDoor;
struct FStairInfo;
enum class FCellType : uint8;
struct FRandomStream;
#ifdef DUNGEONARCHITECTRUNTIME_GridDungeonQuery_generated_h
#error "GridDungeonQuery.generated.h already included, missing '#pragma once' in GridDungeonQuery.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridDungeonQuery_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAdjacentCells); \
	DECLARE_FUNCTION(execIsNearMarker); \
	DECLARE_FUNCTION(execGetAdjacentCellsOnEdge); \
	DECLARE_FUNCTION(execGetOpeningPointBetweenAdjacentCells); \
	DECLARE_FUNCTION(execGetDoorBetween); \
	DECLARE_FUNCTION(execGetStairBetween); \
	DECLARE_FUNCTION(execContainsDoorBetween); \
	DECLARE_FUNCTION(execContainsStairBetween); \
	DECLARE_FUNCTION(execGetRandomCellOfTypeFromStream); \
	DECLARE_FUNCTION(execGetRandomCellFromStream); \
	DECLARE_FUNCTION(execGetRandomCellOfType); \
	DECLARE_FUNCTION(execGetRandomCell); \
	DECLARE_FUNCTION(execGetCellType); \
	DECLARE_FUNCTION(execGetCellAtLocation); \
	DECLARE_FUNCTION(execGetFurthestRooms); \
	DECLARE_FUNCTION(execGetPathBetweenCells); \
	DECLARE_FUNCTION(execGetCellDimension); \
	DECLARE_FUNCTION(execGetCellsOfType); \
	DECLARE_FUNCTION(execGetCells);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAdjacentCells); \
	DECLARE_FUNCTION(execIsNearMarker); \
	DECLARE_FUNCTION(execGetAdjacentCellsOnEdge); \
	DECLARE_FUNCTION(execGetOpeningPointBetweenAdjacentCells); \
	DECLARE_FUNCTION(execGetDoorBetween); \
	DECLARE_FUNCTION(execGetStairBetween); \
	DECLARE_FUNCTION(execContainsDoorBetween); \
	DECLARE_FUNCTION(execContainsStairBetween); \
	DECLARE_FUNCTION(execGetRandomCellOfTypeFromStream); \
	DECLARE_FUNCTION(execGetRandomCellFromStream); \
	DECLARE_FUNCTION(execGetRandomCellOfType); \
	DECLARE_FUNCTION(execGetRandomCell); \
	DECLARE_FUNCTION(execGetCellType); \
	DECLARE_FUNCTION(execGetCellAtLocation); \
	DECLARE_FUNCTION(execGetFurthestRooms); \
	DECLARE_FUNCTION(execGetPathBetweenCells); \
	DECLARE_FUNCTION(execGetCellDimension); \
	DECLARE_FUNCTION(execGetCellsOfType); \
	DECLARE_FUNCTION(execGetCells);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridDungeonQuery(); \
	friend struct Z_Construct_UClass_UGridDungeonQuery_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonQuery, UDungeonQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonQuery)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGridDungeonQuery(); \
	friend struct Z_Construct_UClass_UGridDungeonQuery_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonQuery, UDungeonQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonQuery)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonQuery(UGridDungeonQuery&&); \
	NO_API UGridDungeonQuery(const UGridDungeonQuery&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonQuery() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonQuery(UGridDungeonQuery&&); \
	NO_API UGridDungeonQuery(const UGridDungeonQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonQuery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridDungeonQuery)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_17_PROLOG
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridDungeonQuery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
