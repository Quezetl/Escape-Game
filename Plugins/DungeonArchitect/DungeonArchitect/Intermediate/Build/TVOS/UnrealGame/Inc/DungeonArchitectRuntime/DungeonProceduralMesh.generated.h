// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDAProcMeshVertex;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonProceduralMesh_generated_h
#error "DungeonProceduralMesh.generated.h already included, missing '#pragma once' in DungeonProceduralMesh.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonProceduralMesh_generated_h

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAProcMeshTangent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDAProcMeshTangent>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAProcMeshVertex_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDAProcMeshVertex>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDAProcMeshSection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDAProcMeshSection>();

#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDAProcMeshComponent(); \
	friend struct Z_Construct_UClass_UDAProcMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UDAProcMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDAProcMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDAProcMeshComponent*>(this); }


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUDAProcMeshComponent(); \
	friend struct Z_Construct_UClass_UDAProcMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UDAProcMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDAProcMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDAProcMeshComponent*>(this); }


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAProcMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAProcMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAProcMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAProcMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDAProcMeshComponent(UDAProcMeshComponent&&); \
	NO_API UDAProcMeshComponent(const UDAProcMeshComponent&); \
public:


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDAProcMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDAProcMeshComponent(UDAProcMeshComponent&&); \
	NO_API UDAProcMeshComponent(const UDAProcMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDAProcMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDAProcMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDAProcMeshComponent)


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_131_PROLOG
#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_INCLASS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h_134_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DAProcMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDAProcMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Meshing_Geometry_DungeonProceduralMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
