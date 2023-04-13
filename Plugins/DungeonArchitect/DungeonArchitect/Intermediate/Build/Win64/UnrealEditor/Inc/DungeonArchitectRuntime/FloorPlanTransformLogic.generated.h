// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFloorPlanModel;
class UFloorPlanConfig;
struct FRandomStream;
#ifdef DUNGEONARCHITECTRUNTIME_FloorPlanTransformLogic_generated_h
#error "FloorPlanTransformLogic.generated.h already included, missing '#pragma once' in FloorPlanTransformLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_FloorPlanTransformLogic_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_RPC_WRAPPERS \
	virtual void GetNodeOffset_Implementation(UFloorPlanModel* Model, UFloorPlanConfig* Config, FRandomStream const& RandomStream, int32 GridX, int32 GridY, FTransform& Offset); \
 \
	DECLARE_FUNCTION(execGetNodeOffset);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNodeOffset);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_EVENT_PARMS \
	struct FloorPlanTransformLogic_eventGetNodeOffset_Parms \
	{ \
		UFloorPlanModel* Model; \
		UFloorPlanConfig* Config; \
		FRandomStream RandomStream; \
		int32 GridX; \
		int32 GridY; \
		FTransform Offset; \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloorPlanTransformLogic(); \
	friend struct Z_Construct_UClass_UFloorPlanTransformLogic_Statics; \
public: \
	DECLARE_CLASS(UFloorPlanTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFloorPlanTransformLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFloorPlanTransformLogic(); \
	friend struct Z_Construct_UClass_UFloorPlanTransformLogic_Statics; \
public: \
	DECLARE_CLASS(UFloorPlanTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFloorPlanTransformLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloorPlanTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloorPlanTransformLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloorPlanTransformLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloorPlanTransformLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloorPlanTransformLogic(UFloorPlanTransformLogic&&); \
	NO_API UFloorPlanTransformLogic(const UFloorPlanTransformLogic&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloorPlanTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloorPlanTransformLogic(UFloorPlanTransformLogic&&); \
	NO_API UFloorPlanTransformLogic(const UFloorPlanTransformLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloorPlanTransformLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloorPlanTransformLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloorPlanTransformLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_14_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UFloorPlanTransformLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
