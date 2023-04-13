// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGridToolPaintStrokeData;
class ADungeon;
class UGridDungeonModel;
class UGridDungeonConfig;
struct FCellDoor;
struct FCell;
struct FRectangle;
#ifdef DUNGEONARCHITECTRUNTIME_GridDungeonModelHelper_generated_h
#error "GridDungeonModelHelper.generated.h already included, missing '#pragma once' in GridDungeonModelHelper.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridDungeonModelHelper_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemovePaintCell); \
	DECLARE_FUNCTION(execAddPaintCell); \
	DECLARE_FUNCTION(execGetRandomCellLocation); \
	DECLARE_FUNCTION(execGetDoorExits); \
	DECLARE_FUNCTION(execGetRoomFreeEdge); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execToWorldCoords); \
	DECLARE_FUNCTION(execGetCellCenter); \
	DECLARE_FUNCTION(execGetCellMSTRooms); \
	DECLARE_FUNCTION(execGetCellConnectedRooms);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemovePaintCell); \
	DECLARE_FUNCTION(execAddPaintCell); \
	DECLARE_FUNCTION(execGetRandomCellLocation); \
	DECLARE_FUNCTION(execGetDoorExits); \
	DECLARE_FUNCTION(execGetRoomFreeEdge); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execToWorldCoords); \
	DECLARE_FUNCTION(execGetCellCenter); \
	DECLARE_FUNCTION(execGetCellMSTRooms); \
	DECLARE_FUNCTION(execGetCellConnectedRooms);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridDungeonModelHelper(); \
	friend struct Z_Construct_UClass_UGridDungeonModelHelper_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonModelHelper, UDungeonModelHelper, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonModelHelper)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGridDungeonModelHelper(); \
	friend struct Z_Construct_UClass_UGridDungeonModelHelper_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonModelHelper, UDungeonModelHelper, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonModelHelper)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonModelHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonModelHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonModelHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonModelHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonModelHelper(UGridDungeonModelHelper&&); \
	NO_API UGridDungeonModelHelper(const UGridDungeonModelHelper&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonModelHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonModelHelper(UGridDungeonModelHelper&&); \
	NO_API UGridDungeonModelHelper(const UGridDungeonModelHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonModelHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonModelHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonModelHelper)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_18_PROLOG
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GridDungeonModelHelper."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridDungeonModelHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonModelHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
