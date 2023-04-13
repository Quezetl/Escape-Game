// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Dungeon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeon() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClusterThemeInfo();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonToolData_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingModel_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics
	{
		struct _Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms
		{
			ADungeon* Dungeon;
			bool bSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms), &Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_Dungeon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime, nullptr, "DungeonBuildCompleteBindableEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::_Script_DungeonArchitectRuntime_eventDungeonBuildCompleteBindableEvent_Parms), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ADungeon::execResetDungeonId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDungeonId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeon::execGetQuery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDungeonQuery**)Z_Param__Result=P_THIS->GetQuery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeon::execSetBuilderClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InBuilderClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDungeonBuilder**)Z_Param__Result=P_THIS->SetBuilderClass(Z_Param_InBuilderClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeon::execDestroyDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyDungeon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeon::execBuildDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildDungeon();
		P_NATIVE_END;
	}
	void ADungeon::StaticRegisterNativesADungeon()
	{
		UClass* Class = ADungeon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildDungeon", &ADungeon::execBuildDungeon },
			{ "DestroyDungeon", &ADungeon::execDestroyDungeon },
			{ "GetQuery", &ADungeon::execGetQuery },
			{ "ResetDungeonId", &ADungeon::execResetDungeonId },
			{ "SetBuilderClass", &ADungeon::execSetBuilderClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADungeon_BuildDungeon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeon_BuildDungeon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_BuildDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "BuildDungeon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeon_BuildDungeon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_BuildDungeon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeon_BuildDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_BuildDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "DestroyDungeon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeon_DestroyDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_DestroyDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeon_GetQuery_Statics
	{
		struct Dungeon_eventGetQuery_Parms
		{
			UDungeonQuery* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeon_GetQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dungeon_eventGetQuery_Parms, ReturnValue), Z_Construct_UClass_UDungeonQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_GetQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_GetQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeon_GetQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_GetQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "GetQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeon_GetQuery_Statics::Dungeon_eventGetQuery_Parms), Z_Construct_UFunction_ADungeon_GetQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeon_GetQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_GetQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeon_GetQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_GetQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * Resets the dungeon id.  Do this if you have another copy of the dungeon somehow (e.g. streaming in the same level multiple times on the scene)\n     * NOTE: This will unlink all the existing dungeon spawned items and they will not clean up. Make sure the existing dungeon is destroyed first\n     */" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
		{ "ToolTip", "Resets the dungeon id.  Do this if you have another copy of the dungeon somehow (e.g. streaming in the same level multiple times on the scene)\nNOTE: This will unlink all the existing dungeon spawned items and they will not clean up. Make sure the existing dungeon is destroyed first" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "ResetDungeonId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeon_ResetDungeonId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_ResetDungeonId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics
	{
		struct Dungeon_eventSetBuilderClass_Parms
		{
			TSubclassOf<UDungeonBuilder>  InBuilderClass;
			UDungeonBuilder* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InBuilderClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::NewProp_InBuilderClass = { "InBuilderClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dungeon_eventSetBuilderClass_Parms, InBuilderClass), Z_Construct_UClass_UDungeonBuilder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dungeon_eventSetBuilderClass_Parms, ReturnValue), Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::NewProp_InBuilderClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeon, nullptr, "SetBuilderClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::Dungeon_eventSetBuilderClass_Parms), Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeon_SetBuilderClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeon_SetBuilderClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeon);
	UClass* Z_Construct_UClass_ADungeon_NoRegister()
	{
		return ADungeon::StaticClass();
	}
	struct Z_Construct_UClass_ADungeon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Uid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Themes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Themes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Themes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuilderClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BuilderClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerEmitters_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerEmitters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerEmitters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerEmitters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventListeners_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventListeners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventListeners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventListeners;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterThemes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterThemes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClusterThemes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugData_MetaData[];
#endif
		static void NewProp_bDrawDebugData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Builder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DungeonModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelStreamingConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelStreamingModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildPriorityLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildPriorityLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDungeonBuildComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDungeonBuildComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADungeon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeon_BuildDungeon, "BuildDungeon" }, // 956093828
		{ &Z_Construct_UFunction_ADungeon_DestroyDungeon, "DestroyDungeon" }, // 1374752377
		{ &Z_Construct_UFunction_ADungeon_GetQuery, "GetQuery" }, // 4202009327
		{ &Z_Construct_UFunction_ADungeon_ResetDungeonId, "ResetDungeonId" }, // 1044131747
		{ &Z_Construct_UFunction_ADungeon_SetBuilderClass, "SetBuilderClass" }, // 1897771213
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The main dungeon actor responsible for creating a dungeon.  \n* Drop this actor into your scene, assign a theme and click \"Build Dungeon\" button\n* to create your dungeon.  \n* From code, call ADungeon::BuildDungeon after adding an entry into the ADungeon::Themes array\n*/" },
		{ "HideCategories", "Rendering Input Actor Misc Replication Collision LOD Cooking" },
		{ "IncludePath", "Core/Dungeon.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The main dungeon actor responsible for creating a dungeon.\nDrop this actor into your scene, assign a theme and click \"Build Dungeon\" button\nto create your dungeon.\nFrom code, call ADungeon::BuildDungeon after adding an entry into the ADungeon::Themes array" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_Uid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Uid = { "Uid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, Uid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_Uid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_Uid_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Themes_Inner = { "Themes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonThemeAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_Themes_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Themes = { "Themes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, Themes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_Themes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_Themes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_BuilderClass_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Lets you swap out the default dungeon builder with your own implementation */" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
		{ "ToolTip", "Lets you swap out the default dungeon builder with your own implementation" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_BuilderClass = { "BuilderClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, BuilderClass), Z_Construct_UClass_UDungeonBuilder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_BuilderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_BuilderClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_Inner_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Lets you emit your own markers into the scene */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
		{ "ToolTip", "Lets you emit your own markers into the scene" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_Inner = { "MarkerEmitters", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Lets you emit your own markers into the scene */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
		{ "ToolTip", "Lets you emit your own markers into the scene" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters = { "MarkerEmitters", nullptr, (EPropertyFlags)0x001002800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, MarkerEmitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_Inner_MetaData[] = {
		{ "Category", "Advanced" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_Inner = { "EventListeners", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonEventListener_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_MetaData[] = {
		{ "Category", "Advanced" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners = { "EventListeners", nullptr, (EPropertyFlags)0x001002800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, EventListeners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes_Inner = { "ClusterThemes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClusterThemeInfo, METADATA_PARAMS(nullptr, 0) }; // 1941195972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes = { "ClusterThemes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, ClusterThemes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes_MetaData)) }; // 1941195972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	void Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData_SetBit(void* Obj)
	{
		((ADungeon*)Obj)->bDrawDebugData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData = { "bDrawDebugData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADungeon), &Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_Builder_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, Builder), Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_Builder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_Builder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, Config), Z_Construct_UClass_UDungeonConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_DungeonModel_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_DungeonModel = { "DungeonModel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, DungeonModel), Z_Construct_UClass_UDungeonModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_DungeonModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_DungeonModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_ToolData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_ToolData = { "ToolData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, ToolData), Z_Construct_UClass_UDungeonToolData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_ToolData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_ToolData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_Query_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, Query), Z_Construct_UClass_UDungeonQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_Query_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingConfig = { "LevelStreamingConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, LevelStreamingConfig), Z_Construct_UScriptStruct_FDungeonLevelStreamingConfig, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingConfig_MetaData)) }; // 3717480050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingModel_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingModel = { "LevelStreamingModel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, LevelStreamingModel), Z_Construct_UClass_UDungeonLevelStreamingModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_BuildPriorityLocation_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** When the dungeon is built asynchronously over multiple frames, objects closer to this point are built first */" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
		{ "ToolTip", "When the dungeon is built asynchronously over multiple frames, objects closer to this point are built first" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_BuildPriorityLocation = { "BuildPriorityLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, BuildPriorityLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_BuildPriorityLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_BuildPriorityLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeon_Statics::NewProp_OnDungeonBuildComplete_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Dungeon.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeon_Statics::NewProp_OnDungeonBuildComplete = { "OnDungeonBuildComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeon, OnDungeonBuildComplete), Z_Construct_UDelegateFunction_DungeonArchitectRuntime_DungeonBuildCompleteBindableEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::NewProp_OnDungeonBuildComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::NewProp_OnDungeonBuildComplete_MetaData)) }; // 1308795509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeon_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Themes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Themes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_BuilderClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_MarkerEmitters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_EventListeners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_ClusterThemes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_bDrawDebugData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Builder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_DungeonModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_ToolData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_LevelStreamingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_BuildPriorityLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeon_Statics::NewProp_OnDungeonBuildComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeon_Statics::ClassParams = {
		&ADungeon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADungeon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeon()
	{
		if (!Z_Registration_Info_UClass_ADungeon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeon.OuterSingleton, Z_Construct_UClass_ADungeon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeon.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeon>()
	{
		return ADungeon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeon);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeon, ADungeon::StaticClass, TEXT("ADungeon"), &Z_Registration_Info_UClass_ADungeon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeon), 3787037597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_971304865(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
