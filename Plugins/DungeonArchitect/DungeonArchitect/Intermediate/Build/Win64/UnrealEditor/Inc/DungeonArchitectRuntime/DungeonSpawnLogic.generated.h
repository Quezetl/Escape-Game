// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADungeon;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonSpawnLogic_generated_h
#error "DungeonSpawnLogic.generated.h already included, missing '#pragma once' in DungeonSpawnLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonSpawnLogic_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_RPC_WRAPPERS \
	virtual void OnItemSpawn_Implementation(AActor* Actor, ADungeon* Dungeon); \
 \
	DECLARE_FUNCTION(execOnItemSpawn);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnItemSpawn);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_EVENT_PARMS \
	struct DungeonSpawnLogic_eventOnItemSpawn_Parms \
	{ \
		AActor* Actor; \
		ADungeon* Dungeon; \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonSpawnLogic(); \
	friend struct Z_Construct_UClass_UDungeonSpawnLogic_Statics; \
public: \
	DECLARE_CLASS(UDungeonSpawnLogic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonSpawnLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDungeonSpawnLogic(); \
	friend struct Z_Construct_UClass_UDungeonSpawnLogic_Statics; \
public: \
	DECLARE_CLASS(UDungeonSpawnLogic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonSpawnLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonSpawnLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonSpawnLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonSpawnLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonSpawnLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonSpawnLogic(UDungeonSpawnLogic&&); \
	NO_API UDungeonSpawnLogic(const UDungeonSpawnLogic&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonSpawnLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonSpawnLogic(UDungeonSpawnLogic&&); \
	NO_API UDungeonSpawnLogic(const UDungeonSpawnLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonSpawnLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonSpawnLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonSpawnLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_16_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonSpawnLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonSpawnLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
