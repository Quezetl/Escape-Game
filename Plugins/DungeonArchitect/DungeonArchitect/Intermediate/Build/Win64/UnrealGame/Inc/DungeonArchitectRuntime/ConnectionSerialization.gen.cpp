// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Serialization/ConnectionSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnectionSerialization() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionInstance();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapConnectionInstance;
class UScriptStruct* FSnapConnectionInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapConnectionInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapConnectionInstance, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapConnectionInstance"));
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionInstance.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapConnectionInstance>()
{
	return FSnapConnectionInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpawnedDoorActor_MetaData[];
#endif
		static void NewProp_bHasSpawnedDoorActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpawnedDoorActor;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SpawnedDoorActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedDoorActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedDoorActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/ConnectionSerialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapConnectionInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/ConnectionSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleA = { "ModuleA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapConnectionInstance, ModuleA), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/ConnectionSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorA = { "DoorA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapConnectionInstance, DoorA), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/ConnectionSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleB = { "ModuleB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapConnectionInstance, ModuleB), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/ConnectionSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorB = { "DoorB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapConnectionInstance, DoorB), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/ConnectionSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapConnectionInstance, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/ConnectionSerialization.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor_SetBit(void* Obj)
	{
		((FSnapConnectionInstance*)Obj)->bHasSpawnedDoorActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor = { "bHasSpawnedDoorActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSnapConnectionInstance), &Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors_Inner = { "SpawnedDoorActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/ConnectionSerialization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors = { "SpawnedDoorActors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapConnectionInstance, SpawnedDoorActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SnapConnectionInstance",
		sizeof(FSnapConnectionInstance),
		alignof(FSnapConnectionInstance),
		Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapConnectionInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapConnectionInstance.InnerSingleton, Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapConnectionInstance.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_ConnectionSerialization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_ConnectionSerialization_h_Statics::ScriptStructInfo[] = {
		{ FSnapConnectionInstance::StaticStruct, Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewStructOps, TEXT("SnapConnectionInstance"), &Z_Registration_Info_UScriptStruct_SnapConnectionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapConnectionInstance), 2880625270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_ConnectionSerialization_h_763008942(TEXT("/Script/DungeonArchitectRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_ConnectionSerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_ConnectionSerialization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
