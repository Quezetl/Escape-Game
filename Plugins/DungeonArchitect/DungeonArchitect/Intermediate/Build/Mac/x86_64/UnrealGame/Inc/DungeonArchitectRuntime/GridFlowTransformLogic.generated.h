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
class UGridFlowQuery;
struct FRandomStream;
#ifdef DUNGEONARCHITECTRUNTIME_GridFlowTransformLogic_generated_h
#error "GridFlowTransformLogic.generated.h already included, missing '#pragma once' in GridFlowTransformLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridFlowTransformLogic_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_RPC_WRAPPERS \
	virtual void GetNodeOffset_Implementation(UGridFlowModel* Model, UGridFlowConfig* Config, UGridFlowQuery* Query, FRandomStream const& RandomStream, int32 GridX, int32 GridY, FTransform& Offset); \
 \
	DECLARE_FUNCTION(execGetNodeOffset);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNodeOffset);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_EVENT_PARMS \
	struct GridFlowTransformLogic_eventGetNodeOffset_Parms \
	{ \
		UGridFlowModel* Model; \
		UGridFlowConfig* Config; \
		UGridFlowQuery* Query; \
		FRandomStream RandomStream; \
		int32 GridX; \
		int32 GridY; \
		FTransform Offset; \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridFlowTransformLogic(); \
	friend struct Z_Construct_UClass_UGridFlowTransformLogic_Statics; \
public: \
	DECLARE_CLASS(UGridFlowTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridFlowTransformLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGridFlowTransformLogic(); \
	friend struct Z_Construct_UClass_UGridFlowTransformLogic_Statics; \
public: \
	DECLARE_CLASS(UGridFlowTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridFlowTransformLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridFlowTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridFlowTransformLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridFlowTransformLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridFlowTransformLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridFlowTransformLogic(UGridFlowTransformLogic&&); \
	NO_API UGridFlowTransformLogic(const UGridFlowTransformLogic&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridFlowTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridFlowTransformLogic(UGridFlowTransformLogic&&); \
	NO_API UGridFlowTransformLogic(const UGridFlowTransformLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridFlowTransformLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridFlowTransformLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridFlowTransformLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_15_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridFlowTransformLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowTransformLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
