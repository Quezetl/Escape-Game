// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
class ADungeon;
class UDungeonStreamingChunk;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonLevelStreamingModel_generated_h
#error "DungeonLevelStreamingModel.generated.h already included, missing '#pragma once' in DungeonLevelStreamingModel.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonLevelStreamingModel_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleChunkUnloaded); \
	DECLARE_FUNCTION(execHandleChunkLoaded); \
	DECLARE_FUNCTION(execHandleChunkHidden); \
	DECLARE_FUNCTION(execHandleChunkVisible); \
	DECLARE_FUNCTION(execGetLoadedChunkActorOfType); \
	DECLARE_FUNCTION(execGetLoadedChunkActorsOfType); \
	DECLARE_FUNCTION(execGetLoadedChunkActors);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleChunkUnloaded); \
	DECLARE_FUNCTION(execHandleChunkLoaded); \
	DECLARE_FUNCTION(execHandleChunkHidden); \
	DECLARE_FUNCTION(execHandleChunkVisible); \
	DECLARE_FUNCTION(execGetLoadedChunkActorOfType); \
	DECLARE_FUNCTION(execGetLoadedChunkActorsOfType); \
	DECLARE_FUNCTION(execGetLoadedChunkActors);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonStreamingChunk(); \
	friend struct Z_Construct_UClass_UDungeonStreamingChunk_Statics; \
public: \
	DECLARE_CLASS(UDungeonStreamingChunk, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStreamingChunk)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDungeonStreamingChunk(); \
	friend struct Z_Construct_UClass_UDungeonStreamingChunk_Statics; \
public: \
	DECLARE_CLASS(UDungeonStreamingChunk, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStreamingChunk)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonStreamingChunk(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonStreamingChunk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStreamingChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStreamingChunk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonStreamingChunk(UDungeonStreamingChunk&&); \
	NO_API UDungeonStreamingChunk(const UDungeonStreamingChunk&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonStreamingChunk(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonStreamingChunk(UDungeonStreamingChunk&&); \
	NO_API UDungeonStreamingChunk(const UDungeonStreamingChunk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStreamingChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStreamingChunk); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonStreamingChunk)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_13_PROLOG
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DungeonStreamingChunk."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonStreamingChunk>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_95_DELEGATE \
struct _Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms \
{ \
	ADungeon* Dungeon; \
}; \
static inline void FDALevelStreamerBindableEvent_DelegateWrapper(const FMulticastScriptDelegate& DALevelStreamerBindableEvent, ADungeon* Dungeon) \
{ \
	_Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms Parms; \
	Parms.Dungeon=Dungeon; \
	DALevelStreamerBindableEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_96_DELEGATE \
struct _Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms \
{ \
	ADungeon* Dungeon; \
	UDungeonStreamingChunk* Chunk; \
}; \
static inline void FDALevelStreamerStateChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& DALevelStreamerStateChangeDelegate, ADungeon* Dungeon, UDungeonStreamingChunk* Chunk) \
{ \
	_Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms Parms; \
	Parms.Dungeon=Dungeon; \
	Parms.Chunk=Chunk; \
	DALevelStreamerStateChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_RPC_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonLevelStreamingModel(); \
	friend struct Z_Construct_UClass_UDungeonLevelStreamingModel_Statics; \
public: \
	DECLARE_CLASS(UDungeonLevelStreamingModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonLevelStreamingModel)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUDungeonLevelStreamingModel(); \
	friend struct Z_Construct_UClass_UDungeonLevelStreamingModel_Statics; \
public: \
	DECLARE_CLASS(UDungeonLevelStreamingModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonLevelStreamingModel)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonLevelStreamingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonLevelStreamingModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonLevelStreamingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonLevelStreamingModel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonLevelStreamingModel(UDungeonLevelStreamingModel&&); \
	NO_API UDungeonLevelStreamingModel(const UDungeonLevelStreamingModel&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonLevelStreamingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonLevelStreamingModel(UDungeonLevelStreamingModel&&); \
	NO_API UDungeonLevelStreamingModel(const UDungeonLevelStreamingModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonLevelStreamingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonLevelStreamingModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonLevelStreamingModel)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_98_PROLOG
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_100_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DungeonLevelStreamingModel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonLevelStreamingModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
