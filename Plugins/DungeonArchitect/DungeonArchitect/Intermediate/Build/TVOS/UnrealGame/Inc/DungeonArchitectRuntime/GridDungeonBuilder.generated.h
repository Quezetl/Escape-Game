// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRandomStream;
enum class FCellType : uint8;
struct FCell;
#ifdef DUNGEONARCHITECTRUNTIME_GridDungeonBuilder_generated_h
#error "GridDungeonBuilder.generated.h already included, missing '#pragma once' in GridDungeonBuilder.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridDungeonBuilder_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execGetCellsOfType); \
	DECLARE_FUNCTION(execGetCorridors); \
	DECLARE_FUNCTION(execGetRooms); \
	DECLARE_FUNCTION(execContainsCell);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execGetCellsOfType); \
	DECLARE_FUNCTION(execGetCorridors); \
	DECLARE_FUNCTION(execGetRooms); \
	DECLARE_FUNCTION(execContainsCell);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridDungeonBuilder(); \
	friend struct Z_Construct_UClass_UGridDungeonBuilder_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonBuilder, UDungeonBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonBuilder)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUGridDungeonBuilder(); \
	friend struct Z_Construct_UClass_UGridDungeonBuilder_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonBuilder, UDungeonBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonBuilder)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonBuilder(UGridDungeonBuilder&&); \
	NO_API UGridDungeonBuilder(const UGridDungeonBuilder&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonBuilder(UGridDungeonBuilder&&); \
	NO_API UGridDungeonBuilder(const UGridDungeonBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonBuilder)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_25_PROLOG
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridDungeonBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
