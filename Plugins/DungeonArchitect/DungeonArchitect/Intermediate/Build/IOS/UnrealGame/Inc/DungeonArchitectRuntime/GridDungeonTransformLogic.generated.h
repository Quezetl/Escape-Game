// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridDungeonModel;
class UGridDungeonConfig;
class UGridDungeonBuilder;
class UGridDungeonQuery;
struct FCell;
struct FRandomStream;
#ifdef DUNGEONARCHITECTRUNTIME_GridDungeonTransformLogic_generated_h
#error "GridDungeonTransformLogic.generated.h already included, missing '#pragma once' in GridDungeonTransformLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridDungeonTransformLogic_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_RPC_WRAPPERS \
	virtual void GetNodeOffset_Implementation(UGridDungeonModel* Model, UGridDungeonConfig* Config, UGridDungeonBuilder* Builder, UGridDungeonQuery* Query, FCell const& Cell, FRandomStream const& RandomStream, int32 GridX, int32 GridY, FTransform const& MarkerTransform, FTransform& Offset); \
 \
	DECLARE_FUNCTION(execGetNodeOffset);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNodeOffset);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_EVENT_PARMS \
	struct GridDungeonTransformLogic_eventGetNodeOffset_Parms \
	{ \
		UGridDungeonModel* Model; \
		UGridDungeonConfig* Config; \
		UGridDungeonBuilder* Builder; \
		UGridDungeonQuery* Query; \
		FCell Cell; \
		FRandomStream RandomStream; \
		int32 GridX; \
		int32 GridY; \
		FTransform MarkerTransform; \
		FTransform Offset; \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridDungeonTransformLogic(); \
	friend struct Z_Construct_UClass_UGridDungeonTransformLogic_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonTransformLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGridDungeonTransformLogic(); \
	friend struct Z_Construct_UClass_UGridDungeonTransformLogic_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonTransformLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonTransformLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonTransformLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonTransformLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonTransformLogic(UGridDungeonTransformLogic&&); \
	NO_API UGridDungeonTransformLogic(const UGridDungeonTransformLogic&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridDungeonTransformLogic(UGridDungeonTransformLogic&&); \
	NO_API UGridDungeonTransformLogic(const UGridDungeonTransformLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonTransformLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonTransformLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonTransformLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_18_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridDungeonTransformLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
