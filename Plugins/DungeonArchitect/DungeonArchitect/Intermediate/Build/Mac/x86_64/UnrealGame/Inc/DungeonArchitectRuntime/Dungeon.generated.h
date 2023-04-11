// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADungeon;
class UDungeonQuery;
class UDungeonBuilder;
#ifdef DUNGEONARCHITECTRUNTIME_Dungeon_generated_h
#error "Dungeon.generated.h already included, missing '#pragma once' in Dungeon.h"
#endif
#define DUNGEONARCHITECTRUNTIME_Dungeon_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_26_DELEGATE \
struct _Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms \
{ \
	ADungeon* Dungeon; \
	bool bSuccess; \
}; \
static inline void FDungeonBuildCompleteBindableEvent_DelegateWrapper(const FMulticastScriptDelegate& DungeonBuildCompleteBindableEvent, ADungeon* Dungeon, bool bSuccess) \
{ \
	_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms Parms; \
	Parms.Dungeon=Dungeon; \
	Parms.bSuccess=bSuccess ? true : false; \
	DungeonBuildCompleteBindableEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetDungeonId); \
	DECLARE_FUNCTION(execGetQuery); \
	DECLARE_FUNCTION(execSetBuilderClass); \
	DECLARE_FUNCTION(execDestroyDungeon); \
	DECLARE_FUNCTION(execBuildDungeon);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetDungeonId); \
	DECLARE_FUNCTION(execGetQuery); \
	DECLARE_FUNCTION(execSetBuilderClass); \
	DECLARE_FUNCTION(execDestroyDungeon); \
	DECLARE_FUNCTION(execBuildDungeon);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeon(); \
	friend struct Z_Construct_UClass_ADungeon_Statics; \
public: \
	DECLARE_CLASS(ADungeon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADungeon)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_INCLASS \
private: \
	static void StaticRegisterNativesADungeon(); \
	friend struct Z_Construct_UClass_ADungeon_Statics; \
public: \
	DECLARE_CLASS(ADungeon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADungeon)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeon(ADungeon&&); \
	NO_API ADungeon(const ADungeon&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeon(ADungeon&&); \
	NO_API ADungeon(const ADungeon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeon)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_65_PROLOG
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class ADungeon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
