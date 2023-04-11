// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonBPFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonBPFunctionLibrary() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBPFunctionLibrary_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execDungeonObjectHasAuthority)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDungeonBPFunctionLibrary::DungeonObjectHasAuthority(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execActorBelongsToDungeon)
	{
		P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDungeonBPFunctionLibrary::ActorBelongsToDungeon(Z_Param_Dungeon,Z_Param_ActorToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBPFunctionLibrary::execSpawnDungeonOwnedActor)
	{
		P_GET_OBJECT(ADungeon,Z_Param_Dungeon);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UDungeonBPFunctionLibrary::SpawnDungeonOwnedActor(Z_Param_Dungeon,Z_Param_ActorClass,Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	void UDungeonBPFunctionLibrary::StaticRegisterNativesUDungeonBPFunctionLibrary()
	{
		UClass* Class = UDungeonBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorBelongsToDungeon", &UDungeonBPFunctionLibrary::execActorBelongsToDungeon },
			{ "DungeonObjectHasAuthority", &UDungeonBPFunctionLibrary::execDungeonObjectHasAuthority },
			{ "SpawnDungeonOwnedActor", &UDungeonBPFunctionLibrary::execSpawnDungeonOwnedActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics
	{
		struct DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms
		{
			ADungeon* Dungeon;
			AActor* ActorToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ActorToCheck = { "ActorToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms, ActorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms), &Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_Dungeon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ActorToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "ActorBelongsToDungeon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::DungeonBPFunctionLibrary_eventActorBelongsToDungeon_Parms), Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics
	{
		struct DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms
		{
			UObject* Object;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms), &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "DungeonObjectHasAuthority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::DungeonBPFunctionLibrary_eventDungeonObjectHasAuthority_Parms), Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics
	{
		struct DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms
		{
			ADungeon* Dungeon;
			TSubclassOf<AActor>  ActorClass;
			FTransform Transform;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Dungeon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Set basic global leap tracking options */" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
		{ "ToolTip", "Set basic global leap tracking options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBPFunctionLibrary, nullptr, "SpawnDungeonOwnedActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::DungeonBPFunctionLibrary_eventSpawnDungeonOwnedActor_Parms), Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonBPFunctionLibrary);
	UClass* Z_Construct_UClass_UDungeonBPFunctionLibrary_NoRegister()
	{
		return UDungeonBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_ActorBelongsToDungeon, "ActorBelongsToDungeon" }, // 1453647101
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_DungeonObjectHasAuthority, "DungeonObjectHasAuthority" }, // 2596252066
		{ &Z_Construct_UFunction_UDungeonBPFunctionLibrary_SpawnDungeonOwnedActor, "SpawnDungeonOwnedActor" }, // 2526238155
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Utils/DungeonBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::ClassParams = {
		&UDungeonBPFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UDungeonBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonBPFunctionLibrary.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonBPFunctionLibrary>()
	{
		return UDungeonBPFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonBPFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonBPFunctionLibrary, UDungeonBPFunctionLibrary::StaticClass, TEXT("UDungeonBPFunctionLibrary"), &Z_Registration_Info_UClass_UDungeonBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonBPFunctionLibrary), 2378463031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_521946423(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
