// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMesh() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverride();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMesh_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMesh();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialOverride;
class UScriptStruct* FMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialOverride, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("MaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialOverride.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FMaterialOverride>()
{
	return FMaterialOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOverride_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_index_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialOverride, index), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialOverride, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"MaterialOverride",
		sizeof(FMaterialOverride),
		alignof(FMaterialOverride),
		Z_Construct_UScriptStruct_FMaterialOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FMaterialOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialOverride.InnerSingleton;
	}
	void UDungeonMesh::StaticRegisterNativesUDungeonMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonMesh);
	UClass* Z_Construct_UClass_UDungeonMesh_NoRegister()
	{
		return UDungeonMesh::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashCode_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HashCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomCollision_MetaData[];
#endif
		static void NewProp_bUseCustomCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Template;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Actors/DungeonMesh.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialOverride, METADATA_PARAMS(nullptr, 0) }; // 1961009105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonMesh, MaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides_MetaData)) }; // 1961009105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMesh_Statics::NewProp_HashCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_HashCode = { "HashCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonMesh, HashCode), METADATA_PARAMS(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_HashCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_HashCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMesh_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonMesh, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_BodyInstance_MetaData)) }; // 743185417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
	void Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision_SetBit(void* Obj)
	{
		((UDungeonMesh*)Obj)->bUseCustomCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision = { "bUseCustomCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDungeonMesh), &Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMesh_Statics::NewProp_Template_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonMesh, Template), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::NewProp_Template_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_HashCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_BodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_Template,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonMesh_Statics::ClassParams = {
		&UDungeonMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonMesh()
	{
		if (!Z_Registration_Info_UClass_UDungeonMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonMesh.OuterSingleton, Z_Construct_UClass_UDungeonMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonMesh.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonMesh>()
	{
		return UDungeonMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonMesh);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ScriptStructInfo[] = {
		{ FMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewStructOps, TEXT("MaterialOverride"), &Z_Registration_Info_UScriptStruct_MaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialOverride), 1961009105U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonMesh, UDungeonMesh::StaticClass, TEXT("UDungeonMesh"), &Z_Registration_Info_UClass_UDungeonMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonMesh), 1878441810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_2110382386(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
