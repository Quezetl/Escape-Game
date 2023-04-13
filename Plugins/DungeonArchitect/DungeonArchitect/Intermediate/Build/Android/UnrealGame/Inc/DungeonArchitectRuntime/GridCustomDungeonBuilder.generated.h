// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridDungeonConfig;
#ifdef DUNGEONARCHITECTRUNTIME_GridCustomDungeonBuilder_generated_h
#error "GridCustomDungeonBuilder.generated.h already included, missing '#pragma once' in GridCustomDungeonBuilder.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridCustomDungeonBuilder_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_RPC_WRAPPERS \
	virtual void GenerateCustomLayout_Implementation(UGridDungeonConfig* GridConfig); \
 \
	DECLARE_FUNCTION(execGenerateCustomLayout); \
	DECLARE_FUNCTION(execGetRandomOffset); \
	DECLARE_FUNCTION(execConnectRooms); \
	DECLARE_FUNCTION(execRegisterRoomAt); \
	DECLARE_FUNCTION(execRegisterRoom);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateCustomLayout); \
	DECLARE_FUNCTION(execGetRandomOffset); \
	DECLARE_FUNCTION(execConnectRooms); \
	DECLARE_FUNCTION(execRegisterRoomAt); \
	DECLARE_FUNCTION(execRegisterRoom);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_EVENT_PARMS \
	struct GridCustomDungeonBuilder_eventGenerateCustomLayout_Parms \
	{ \
		UGridDungeonConfig* GridConfig; \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridCustomDungeonBuilder(); \
	friend struct Z_Construct_UClass_UGridCustomDungeonBuilder_Statics; \
public: \
	DECLARE_CLASS(UGridCustomDungeonBuilder, UGridDungeonBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridCustomDungeonBuilder)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUGridCustomDungeonBuilder(); \
	friend struct Z_Construct_UClass_UGridCustomDungeonBuilder_Statics; \
public: \
	DECLARE_CLASS(UGridCustomDungeonBuilder, UGridDungeonBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridCustomDungeonBuilder)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridCustomDungeonBuilder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridCustomDungeonBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridCustomDungeonBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridCustomDungeonBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridCustomDungeonBuilder(UGridCustomDungeonBuilder&&); \
	NO_API UGridCustomDungeonBuilder(const UGridCustomDungeonBuilder&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridCustomDungeonBuilder(UGridCustomDungeonBuilder&&); \
	NO_API UGridCustomDungeonBuilder(const UGridCustomDungeonBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridCustomDungeonBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridCustomDungeonBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridCustomDungeonBuilder)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_21_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridCustomDungeonBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
