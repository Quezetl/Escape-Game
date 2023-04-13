// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonLevelStreamingModel() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingChunk_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingChunk();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingModel();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingNavigation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonStreamingChunk::execHandleChunkUnloaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChunkUnloaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStreamingChunk::execHandleChunkLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChunkLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStreamingChunk::execHandleChunkHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChunkHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStreamingChunk::execHandleChunkVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChunkVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStreamingChunk::execGetLoadedChunkActorOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetLoadedChunkActorOfType(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStreamingChunk::execGetLoadedChunkActorsOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetLoadedChunkActorsOfType(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonStreamingChunk::execGetLoadedChunkActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetLoadedChunkActors();
		P_NATIVE_END;
	}
	void UDungeonStreamingChunk::StaticRegisterNativesUDungeonStreamingChunk()
	{
		UClass* Class = UDungeonStreamingChunk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLoadedChunkActorOfType", &UDungeonStreamingChunk::execGetLoadedChunkActorOfType },
			{ "GetLoadedChunkActors", &UDungeonStreamingChunk::execGetLoadedChunkActors },
			{ "GetLoadedChunkActorsOfType", &UDungeonStreamingChunk::execGetLoadedChunkActorsOfType },
			{ "HandleChunkHidden", &UDungeonStreamingChunk::execHandleChunkHidden },
			{ "HandleChunkLoaded", &UDungeonStreamingChunk::execHandleChunkLoaded },
			{ "HandleChunkUnloaded", &UDungeonStreamingChunk::execHandleChunkUnloaded },
			{ "HandleChunkVisible", &UDungeonStreamingChunk::execHandleChunkVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics
	{
		struct DungeonStreamingChunk_eventGetLoadedChunkActorOfType_Parms
		{
			const UClass* ActorClass;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActorOfType_Parms, ActorClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ActorClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActorOfType_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "GetLoadedChunkActorOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::DungeonStreamingChunk_eventGetLoadedChunkActorOfType_Parms), Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics
	{
		struct DungeonStreamingChunk_eventGetLoadedChunkActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "GetLoadedChunkActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::DungeonStreamingChunk_eventGetLoadedChunkActors_Parms), Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics
	{
		struct DungeonStreamingChunk_eventGetLoadedChunkActorsOfType_Parms
		{
			const UClass* ActorClass;
			TArray<AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActorsOfType_Parms, ActorClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ActorClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonStreamingChunk_eventGetLoadedChunkActorsOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "GetLoadedChunkActorsOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::DungeonStreamingChunk_eventGetLoadedChunkActorsOfType_Parms), Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "HandleChunkHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "HandleChunkLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "HandleChunkUnloaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunk, nullptr, "HandleChunkVisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonStreamingChunk);
	UClass* Z_Construct_UClass_UDungeonStreamingChunk_NoRegister()
	{
		return UDungeonStreamingChunk::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonStreamingChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Neighbors_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Neighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnRoomChunk_MetaData[];
#endif
		static void NewProp_bSpawnRoomChunk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnRoomChunk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisible_MetaData[];
#endif
		static void NewProp_bShouldBeVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeLoaded_MetaData[];
#endif
		static void NewProp_bShouldBeLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreaming_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelPackage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelPackage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonStreamingChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonStreamingChunk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorOfType, "GetLoadedChunkActorOfType" }, // 565457424
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActors, "GetLoadedChunkActors" }, // 827489060
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_GetLoadedChunkActorsOfType, "GetLoadedChunkActorsOfType" }, // 2714448189
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkHidden, "HandleChunkHidden" }, // 1848332657
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkLoaded, "HandleChunkLoaded" }, // 4228902344
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkUnloaded, "HandleChunkUnloaded" }, // 2839360292
		{ &Z_Construct_UFunction_UDungeonStreamingChunk_HandleChunkVisible, "HandleChunkVisible" }, // 123157825
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStreamingChunk_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonStreamingChunk, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonStreamingChunk, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Bounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors_ElementProp = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonStreamingChunk_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonStreamingChunk, Neighbors), METADATA_PARAMS(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	void Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk_SetBit(void* Obj)
	{
		((UDungeonStreamingChunk*)Obj)->bSpawnRoomChunk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk = { "bSpawnRoomChunk", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDungeonStreamingChunk), &Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	void Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible_SetBit(void* Obj)
	{
		((UDungeonStreamingChunk*)Obj)->bShouldBeVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDungeonStreamingChunk), &Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	void Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeLoaded_SetBit(void* Obj)
	{
		((UDungeonStreamingChunk*)Obj)->bShouldBeLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeLoaded = { "bShouldBeLoaded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDungeonStreamingChunk), &Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelStreaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelStreaming = { "LevelStreaming", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonStreamingChunk, LevelStreaming), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelPackage = { "LevelPackage", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonStreamingChunk, LevelPackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelPackage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonStreamingChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_Neighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bSpawnRoomChunk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_bShouldBeLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonStreamingChunk_Statics::NewProp_LevelPackage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonStreamingChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonStreamingChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonStreamingChunk_Statics::ClassParams = {
		&UDungeonStreamingChunk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDungeonStreamingChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonStreamingChunk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonStreamingChunk()
	{
		if (!Z_Registration_Info_UClass_UDungeonStreamingChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonStreamingChunk.OuterSingleton, Z_Construct_UClass_UDungeonStreamingChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonStreamingChunk.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonStreamingChunk>()
	{
		return UDungeonStreamingChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonStreamingChunk);
	struct Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics
	{
		struct _Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms
		{
			ADungeon* Dungeon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::NewProp_Dungeon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime, nullptr, "DALevelStreamerBindableEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDALevelStreamerBindableEvent_Parms), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms
		{
			ADungeon* Dungeon;
			UDungeonStreamingChunk* Chunk;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chunk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::NewProp_Chunk = { "Chunk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms, Chunk), Z_Construct_UClass_UDungeonStreamingChunk_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::NewProp_Dungeon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::NewProp_Chunk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime, nullptr, "DALevelStreamerStateChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDALevelStreamerStateChangeDelegate_Parms), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UDungeonLevelStreamingModel::StaticRegisterNativesUDungeonLevelStreamingModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonLevelStreamingModel);
	UClass* Z_Construct_UClass_UDungeonLevelStreamingModel_NoRegister()
	{
		return UDungeonLevelStreamingModel::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonLevelStreamingModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chunks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chunks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Chunks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingNavigation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInitialChunksLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitialChunksLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChunkLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkUnloaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChunkUnloaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkVisible_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChunkVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkHidden_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChunkHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks_Inner = { "Chunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonStreamingChunk_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks = { "Chunks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, Chunks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_StreamingNavigation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_StreamingNavigation = { "StreamingNavigation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, StreamingNavigation), Z_Construct_UClass_UDungeonLevelStreamingNavigation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_StreamingNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_StreamingNavigation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnInitialChunksLoaded_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnInitialChunksLoaded = { "OnInitialChunksLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnInitialChunksLoaded), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerBindableEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnInitialChunksLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnInitialChunksLoaded_MetaData)) }; // 3353387177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkLoaded_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkLoaded = { "OnChunkLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnChunkLoaded), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkLoaded_MetaData)) }; // 752065164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkUnloaded_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkUnloaded = { "OnChunkUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnChunkUnloaded), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkUnloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkUnloaded_MetaData)) }; // 752065164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkVisible_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkVisible = { "OnChunkVisible", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnChunkVisible), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkVisible_MetaData)) }; // 752065164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkHidden_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingModel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkHidden = { "OnChunkHidden", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonLevelStreamingModel, OnChunkHidden), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DALevelStreamerStateChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkHidden_MetaData)) }; // 752065164
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_Chunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_StreamingNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnInitialChunksLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkUnloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::NewProp_OnChunkHidden,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonLevelStreamingModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::ClassParams = {
		&UDungeonLevelStreamingModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonLevelStreamingModel()
	{
		if (!Z_Registration_Info_UClass_UDungeonLevelStreamingModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonLevelStreamingModel.OuterSingleton, Z_Construct_UClass_UDungeonLevelStreamingModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonLevelStreamingModel.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonLevelStreamingModel>()
	{
		return UDungeonLevelStreamingModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonLevelStreamingModel);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonStreamingChunk, UDungeonStreamingChunk::StaticClass, TEXT("UDungeonStreamingChunk"), &Z_Registration_Info_UClass_UDungeonStreamingChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonStreamingChunk), 4110228896U) },
		{ Z_Construct_UClass_UDungeonLevelStreamingModel, UDungeonLevelStreamingModel::StaticClass, TEXT("UDungeonLevelStreamingModel"), &Z_Registration_Info_UClass_UDungeonLevelStreamingModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonLevelStreamingModel), 2851776424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_3962600250(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
