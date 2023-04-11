// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIsaacDungeonModel;
#ifdef DUNGEONARCHITECTRUNTIME_IsaacDungeonSelectorLogic_generated_h
#error "IsaacDungeonSelectorLogic.generated.h already included, missing '#pragma once' in IsaacDungeonSelectorLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_IsaacDungeonSelectorLogic_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_RPC_WRAPPERS \
	virtual bool SelectNode_Implementation(UIsaacDungeonModel* Model); \
 \
	DECLARE_FUNCTION(execSelectNode);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectNode);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_EVENT_PARMS \
	struct IsaacDungeonSelectorLogic_eventSelectNode_Parms \
	{ \
		UIsaacDungeonModel* Model; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		IsaacDungeonSelectorLogic_eventSelectNode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsaacDungeonSelectorLogic(); \
	friend struct Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics; \
public: \
	DECLARE_CLASS(UIsaacDungeonSelectorLogic, UDungeonSelectorLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UIsaacDungeonSelectorLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUIsaacDungeonSelectorLogic(); \
	friend struct Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics; \
public: \
	DECLARE_CLASS(UIsaacDungeonSelectorLogic, UDungeonSelectorLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UIsaacDungeonSelectorLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsaacDungeonSelectorLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsaacDungeonSelectorLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsaacDungeonSelectorLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsaacDungeonSelectorLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsaacDungeonSelectorLogic(UIsaacDungeonSelectorLogic&&); \
	NO_API UIsaacDungeonSelectorLogic(const UIsaacDungeonSelectorLogic&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsaacDungeonSelectorLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsaacDungeonSelectorLogic(UIsaacDungeonSelectorLogic&&); \
	NO_API UIsaacDungeonSelectorLogic(const UIsaacDungeonSelectorLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsaacDungeonSelectorLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsaacDungeonSelectorLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsaacDungeonSelectorLogic)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_12_PROLOG \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_EVENT_PARMS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UIsaacDungeonSelectorLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
