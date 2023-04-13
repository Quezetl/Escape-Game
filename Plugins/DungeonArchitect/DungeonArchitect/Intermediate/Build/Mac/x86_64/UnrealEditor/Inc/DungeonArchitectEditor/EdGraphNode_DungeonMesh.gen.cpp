// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_DungeonMesh() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonMesh_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonMesh();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorBase();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverride();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void UEdGraphNode_DungeonMesh::StaticRegisterNativesUEdGraphNode_DungeonMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_DungeonMesh);
	UClass* Z_Construct_UClass_UEdGraphNode_DungeonMesh_NoRegister()
	{
		return UEdGraphNode_DungeonMesh::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomCollision_MetaData[];
#endif
		static void NewProp_bUseCustomCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AdvancedOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode_DungeonActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMesh.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_DungeonMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialOverride, METADATA_PARAMS(nullptr, 0) }; // 1961009105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_DungeonMesh, MaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_MaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_MaterialOverrides_MetaData)) }; // 1961009105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_bUseCustomCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Physics scene information for this component, holds a single rigid body with multiple shapes. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMesh.h" },
		{ "ToolTip", "Physics scene information for this component, holds a single rigid body with multiple shapes." },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_bUseCustomCollision_SetBit(void* Obj)
	{
		((UEdGraphNode_DungeonMesh*)Obj)->bUseCustomCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_bUseCustomCollision = { "bUseCustomCollision", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEdGraphNode_DungeonMesh), &Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_bUseCustomCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_bUseCustomCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_bUseCustomCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Physics scene information for this component, holds a single rigid body with multiple shapes. */" },
		{ "EditCondition", "bUseCustomCollision" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMesh.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "SkipUCSModifiedProperties", "" },
		{ "ToolTip", "Physics scene information for this component, holds a single rigid body with multiple shapes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_DungeonMesh, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_BodyInstance_MetaData)) }; // 743185417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_AdvancedOptions_MetaData[] = {
		{ "Category", "Mesh Details" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_AdvancedOptions = { "AdvancedOptions", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_DungeonMesh, AdvancedOptions), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_AdvancedOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_AdvancedOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_MaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_MaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_bUseCustomCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_BodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::NewProp_AdvancedOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_DungeonMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::ClassParams = {
		&UEdGraphNode_DungeonMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_DungeonMesh()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_DungeonMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_DungeonMesh.OuterSingleton, Z_Construct_UClass_UEdGraphNode_DungeonMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_DungeonMesh.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_DungeonMesh>()
	{
		return UEdGraphNode_DungeonMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_DungeonMesh);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_DungeonMesh, UEdGraphNode_DungeonMesh::StaticClass, TEXT("UEdGraphNode_DungeonMesh"), &Z_Registration_Info_UClass_UEdGraphNode_DungeonMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_DungeonMesh), 3497695884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMesh_h_397530426(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
