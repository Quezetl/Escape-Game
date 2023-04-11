// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDungeonBuilder;
class UDungeonModel;
class UDungeonConfig;
class UDungeonQuery;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonMarkerEmitter_generated_h
#error "DungeonMarkerEmitter.generated.h already included, missing '#pragma once' in DungeonMarkerEmitter.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonMarkerEmitter_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_RPC_WRAPPERS \
	virtual void EmitMarkers_Implementation(UDungeonBuilder* Builder, UDungeonModel* Model, UDungeonConfig* Config, UDungeonQuery* Query); \
 \
	DECLARE_FUNCTION(execEmitMarkers);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEmitMarkers);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_EVENT_PARMS \
	struct DungeonMarkerEmitter_eventEmitMarkers_Parms \
	{ \
		UDungeonBuilder* Builder; \
		UDungeonModel* Model; \
		UDungeonConfig* Config; \
		UDungeonQuery* Query; \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonMarkerEmitter(); \
	friend struct Z_Construct_UClass_UDungeonMarkerEmitter_Statics; \
public: \
	DECLARE_CLASS(UDungeonMarkerEmitter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonMarkerEmitter)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDungeonMarkerEmitter(); \
	friend struct Z_Construct_UClass_UDungeonMarkerEmitter_Statics; \
public: \
	DECLARE_CLASS(UDungeonMarkerEmitter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonMarkerEmitter)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonMarkerEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonMarkerEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonMarkerEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonMarkerEmitter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonMarkerEmitter(UDungeonMarkerEmitter&&); \
	NO_API UDungeonMarkerEmitter(const UDungeonMarkerEmitter&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonMarkerEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonMarkerEmitter(UDungeonMarkerEmitter&&); \
	NO_API UDungeonMarkerEmitter(const UDungeonMarkerEmitter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonMarkerEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonMarkerEmitter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonMarkerEmitter)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_15_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonMarkerEmitter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
