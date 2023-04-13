// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_GridDungeonConfig_generated_h
#error "GridDungeonConfig.generated.h already included, missing '#pragma once' in GridDungeonConfig.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridDungeonConfig_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_RPC_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridDungeonConfig(); \
	friend struct Z_Construct_UClass_UGridDungeonConfig_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonConfig, UDungeonConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonConfig)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGridDungeonConfig(); \
	friend struct Z_Construct_UClass_UGridDungeonConfig_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonConfig, UDungeonConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonConfig)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonConfig(UGridDungeonConfig&&); \
	NO_API UGridDungeonConfig(const UGridDungeonConfig&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonConfig(UGridDungeonConfig&&); \
	NO_API UGridDungeonConfig(const UGridDungeonConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonConfig)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_16_PROLOG
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GridDungeonConfig."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridDungeonConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h


#define FOREACH_ENUM_EGRIDDUNGEONWALLTYPE(op) \
	op(EGridDungeonWallType::WallsAsEdges) \
	op(EGridDungeonWallType::WallsAsTileBlocks) 

enum class EGridDungeonWallType : uint8;
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridDungeonWallType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
