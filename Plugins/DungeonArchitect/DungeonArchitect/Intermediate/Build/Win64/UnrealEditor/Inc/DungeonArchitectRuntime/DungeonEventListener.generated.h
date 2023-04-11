// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADungeon;
struct FDungeonMarkerInfo;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonEventListener_generated_h
#error "DungeonEventListener.generated.h already included, missing '#pragma once' in DungeonEventListener.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonEventListener_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_RPC_WRAPPERS \
	virtual void OnDungeonDestroyed_Implementation(ADungeon* Dungeon); \
	virtual void OnPreDungeonDestroy_Implementation(ADungeon* Dungeon); \
	virtual void OnPostDungeonBuild_Implementation(ADungeon* Dungeon); \
	virtual void OnMarkersEmitted_Implementation(ADungeon* Dungeon, TArray<FDungeonMarkerInfo>& MarkerList, TArray<FDungeonMarkerInfo>& MarkerListRef); \
	virtual void OnDungeonLayoutBuilt_Implementation(ADungeon* Dungeon); \
	virtual void OnPreDungeonBuild_Implementation(ADungeon* Dungeon); \
 \
	DECLARE_FUNCTION(execOnDungeonDestroyed); \
	DECLARE_FUNCTION(execOnPreDungeonDestroy); \
	DECLARE_FUNCTION(execOnPostDungeonBuild); \
	DECLARE_FUNCTION(execOnMarkersEmitted); \
	DECLARE_FUNCTION(execOnDungeonLayoutBuilt); \
	DECLARE_FUNCTION(execOnPreDungeonBuild);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDungeonDestroyed); \
	DECLARE_FUNCTION(execOnPreDungeonDestroy); \
	DECLARE_FUNCTION(execOnPostDungeonBuild); \
	DECLARE_FUNCTION(execOnMarkersEmitted); \
	DECLARE_FUNCTION(execOnDungeonLayoutBuilt); \
	DECLARE_FUNCTION(execOnPreDungeonBuild);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_EVENT_PARMS \
	struct DungeonEventListener_eventOnDungeonDestroyed_Parms \
	{ \
		ADungeon* Dungeon; \
	}; \
	struct DungeonEventListener_eventOnDungeonLayoutBuilt_Parms \
	{ \
		ADungeon* Dungeon; \
	}; \
	struct DungeonEventListener_eventOnMarkersEmitted_Parms \
	{ \
		ADungeon* Dungeon; \
		TArray<FDungeonMarkerInfo> MarkerList; \
		TArray<FDungeonMarkerInfo> MarkerListRef; \
	}; \
	struct DungeonEventListener_eventOnPostDungeonBuild_Parms \
	{ \
		ADungeon* Dungeon; \
	}; \
	struct DungeonEventListener_eventOnPreDungeonBuild_Parms \
	{ \
		ADungeon* Dungeon; \
	}; \
	struct DungeonEventListener_eventOnPreDungeonDestroy_Parms \
	{ \
		ADungeon* Dungeon; \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonEventListener(); \
	friend struct Z_Construct_UClass_UDungeonEventListener_Statics; \
public: \
	DECLARE_CLASS(UDungeonEventListener, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonEventListener)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDungeonEventListener(); \
	friend struct Z_Construct_UClass_UDungeonEventListener_Statics; \
public: \
	DECLARE_CLASS(UDungeonEventListener, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonEventListener)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonEventListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonEventListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonEventListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonEventListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonEventListener(UDungeonEventListener&&); \
	NO_API UDungeonEventListener(const UDungeonEventListener&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDungeonEventListener(UDungeonEventListener&&); \
	NO_API UDungeonEventListener(const UDungeonEventListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonEventListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonEventListener); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonEventListener)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_14_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonEventListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonEventListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
