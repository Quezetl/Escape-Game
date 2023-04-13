// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntVector;
#ifdef DUNGEONARCHITECTRUNTIME_Grid3DFlowAbstractGraphPathUtils_generated_h
#error "Grid3DFlowAbstractGraphPathUtils.generated.h already included, missing '#pragma once' in Grid3DFlowAbstractGraphPathUtils.h"
#endif
#define DUNGEONARCHITECTRUNTIME_Grid3DFlowAbstractGraphPathUtils_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_RPC_WRAPPERS \
	virtual bool CanCreateLayoutNode_Implementation(FIntVector const& NodeCoord, FIntVector const& GridSize, int32 TotalPathLength, int32 CurrentPathPosition); \
 \
	DECLARE_FUNCTION(execCanCreateLayoutNode);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanCreateLayoutNode);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_EVENT_PARMS \
	struct Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms \
	{ \
		FIntVector NodeCoord; \
		FIntVector GridSize; \
		int32 TotalPathLength; \
		int32 CurrentPathPosition; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrid3DLayoutNodeCreationConstraint(); \
	friend struct Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_Statics; \
public: \
	DECLARE_CLASS(UGrid3DLayoutNodeCreationConstraint, UFlowLayoutNodeCreationConstraint, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGrid3DLayoutNodeCreationConstraint)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUGrid3DLayoutNodeCreationConstraint(); \
	friend struct Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_Statics; \
public: \
	DECLARE_CLASS(UGrid3DLayoutNodeCreationConstraint, UFlowLayoutNodeCreationConstraint, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGrid3DLayoutNodeCreationConstraint)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrid3DLayoutNodeCreationConstraint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrid3DLayoutNodeCreationConstraint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrid3DLayoutNodeCreationConstraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrid3DLayoutNodeCreationConstraint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrid3DLayoutNodeCreationConstraint(UGrid3DLayoutNodeCreationConstraint&&); \
	NO_API UGrid3DLayoutNodeCreationConstraint(const UGrid3DLayoutNodeCreationConstraint&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrid3DLayoutNodeCreationConstraint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrid3DLayoutNodeCreationConstraint(UGrid3DLayoutNodeCreationConstraint&&); \
	NO_API UGrid3DLayoutNodeCreationConstraint(const UGrid3DLayoutNodeCreationConstraint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrid3DLayoutNodeCreationConstraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrid3DLayoutNodeCreationConstraint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrid3DLayoutNodeCreationConstraint)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_8_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGrid3DLayoutNodeCreationConstraint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
