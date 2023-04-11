// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridFlowModel;
class UGridFlowConfig;
class UGridFlowBuilder;
class UGridFlowQuery;
struct FRandomStream;
#ifdef DUNGEONARCHITECTRUNTIME_GridFlowSelectorLogic_generated_h
#error "GridFlowSelectorLogic.generated.h already included, missing '#pragma once' in GridFlowSelectorLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridFlowSelectorLogic_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_RPC_WRAPPERS \
	virtual bool SelectNode_Implementation(UGridFlowModel* Model, UGridFlowConfig* Config, UGridFlowBuilder* Builder, UGridFlowQuery* Query, FRandomStream const& RandomStream, int32 TileX, int32 TileY, FTransform const& MarkerTransform); \
 \
	DECLARE_FUNCTION(execSelectNode);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectNode);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_EVENT_PARMS \
	struct GridFlowSelectorLogic_eventSelectNode_Parms \
	{ \
		UGridFlowModel* Model; \
		UGridFlowConfig* Config; \
		UGridFlowBuilder* Builder; \
		UGridFlowQuery* Query; \
		FRandomStream RandomStream; \
		int32 TileX; \
		int32 TileY; \
		FTransform MarkerTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GridFlowSelectorLogic_eventSelectNode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridFlowSelectorLogic(); \
	friend struct Z_Construct_UClass_UGridFlowSelectorLogic_Statics; \
public: \
	DECLARE_CLASS(UGridFlowSelectorLogic, UDungeonSelectorLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridFlowSelectorLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGridFlowSelectorLogic(); \
	friend struct Z_Construct_UClass_UGridFlowSelectorLogic_Statics; \
public: \
	DECLARE_CLASS(UGridFlowSelectorLogic, UDungeonSelectorLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridFlowSelectorLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridFlowSelectorLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridFlowSelectorLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridFlowSelectorLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridFlowSelectorLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridFlowSelectorLogic(UGridFlowSelectorLogic&&); \
	NO_API UGridFlowSelectorLogic(const UGridFlowSelectorLogic&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridFlowSelectorLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridFlowSelectorLogic(UGridFlowSelectorLogic&&); \
	NO_API UGridFlowSelectorLogic(const UGridFlowSelectorLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridFlowSelectorLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridFlowSelectorLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridFlowSelectorLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_16_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridFlowSelectorLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
