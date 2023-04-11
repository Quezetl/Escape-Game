// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonQuery() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQueryUserState_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQueryUserState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonQueryUserState::execClearAllState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execGetString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execGetVector)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVector(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execGetFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execGetBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execGetInt)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execSetString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetString(Z_Param_Out_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execSetVector)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVector(Z_Param_Out_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execSetFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloat(Z_Param_Out_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execSetBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBool(Z_Param_Out_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonQueryUserState::execSetInt)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInt(Z_Param_Out_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	void UDungeonQueryUserState::StaticRegisterNativesUDungeonQueryUserState()
	{
		UClass* Class = UDungeonQueryUserState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllState", &UDungeonQueryUserState::execClearAllState },
			{ "GetBool", &UDungeonQueryUserState::execGetBool },
			{ "GetFloat", &UDungeonQueryUserState::execGetFloat },
			{ "GetInt", &UDungeonQueryUserState::execGetInt },
			{ "GetString", &UDungeonQueryUserState::execGetString },
			{ "GetVector", &UDungeonQueryUserState::execGetVector },
			{ "SetBool", &UDungeonQueryUserState::execSetBool },
			{ "SetFloat", &UDungeonQueryUserState::execSetFloat },
			{ "SetInt", &UDungeonQueryUserState::execSetInt },
			{ "SetString", &UDungeonQueryUserState::execSetString },
			{ "SetVector", &UDungeonQueryUserState::execSetVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_ClearAllState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_ClearAllState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_ClearAllState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "ClearAllState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_ClearAllState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_ClearAllState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_ClearAllState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_ClearAllState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics
	{
		struct DungeonQueryUserState_eventGetBool_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventGetBool_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DungeonQueryUserState_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonQueryUserState_eventGetBool_Parms), &Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "GetBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::DungeonQueryUserState_eventGetBool_Parms), Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics
	{
		struct DungeonQueryUserState_eventGetFloat_Parms
		{
			FName Name;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventGetFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "GetFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::DungeonQueryUserState_eventGetFloat_Parms), Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics
	{
		struct DungeonQueryUserState_eventGetInt_Parms
		{
			FName Name;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventGetInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "GetInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::DungeonQueryUserState_eventGetInt_Parms), Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_GetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_GetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics
	{
		struct DungeonQueryUserState_eventGetString_Parms
		{
			FName Name;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventGetString_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "GetString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::DungeonQueryUserState_eventGetString_Parms), Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics
	{
		struct DungeonQueryUserState_eventGetVector_Parms
		{
			FName Name;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventGetVector_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventGetVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "GetVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::DungeonQueryUserState_eventGetVector_Parms), Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_GetVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_GetVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics
	{
		struct DungeonQueryUserState_eventSetBool_Parms
		{
			FName Name;
			bool Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventSetBool_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((DungeonQueryUserState_eventSetBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DungeonQueryUserState_eventSetBool_Parms), &Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "SetBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::DungeonQueryUserState_eventSetBool_Parms), Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_SetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_SetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics
	{
		struct DungeonQueryUserState_eventSetFloat_Parms
		{
			FName Name;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventSetFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventSetFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "SetFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::DungeonQueryUserState_eventSetFloat_Parms), Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics
	{
		struct DungeonQueryUserState_eventSetInt_Parms
		{
			FName Name;
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventSetInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventSetInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "SetInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::DungeonQueryUserState_eventSetInt_Parms), Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_SetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_SetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics
	{
		struct DungeonQueryUserState_eventSetString_Parms
		{
			FName Name;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventSetString_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventSetString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "SetString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::DungeonQueryUserState_eventSetString_Parms), Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics
	{
		struct DungeonQueryUserState_eventSetVector_Parms
		{
			FName Name;
			FVector Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventSetVector_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonQueryUserState_eventSetVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonQueryUserState, nullptr, "SetVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::DungeonQueryUserState_eventSetVector_Parms), Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonQueryUserState_SetVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonQueryUserState_SetVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonQueryUserState);
	UClass* Z_Construct_UClass_UDungeonQueryUserState_NoRegister()
	{
		return UDungeonQueryUserState::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonQueryUserState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonQueryUserState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonQueryUserState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonQueryUserState_ClearAllState, "ClearAllState" }, // 64291987
		{ &Z_Construct_UFunction_UDungeonQueryUserState_GetBool, "GetBool" }, // 1358819524
		{ &Z_Construct_UFunction_UDungeonQueryUserState_GetFloat, "GetFloat" }, // 4159783164
		{ &Z_Construct_UFunction_UDungeonQueryUserState_GetInt, "GetInt" }, // 2109783404
		{ &Z_Construct_UFunction_UDungeonQueryUserState_GetString, "GetString" }, // 2880512008
		{ &Z_Construct_UFunction_UDungeonQueryUserState_GetVector, "GetVector" }, // 1530898715
		{ &Z_Construct_UFunction_UDungeonQueryUserState_SetBool, "SetBool" }, // 1070562264
		{ &Z_Construct_UFunction_UDungeonQueryUserState_SetFloat, "SetFloat" }, // 2101235362
		{ &Z_Construct_UFunction_UDungeonQueryUserState_SetInt, "SetInt" }, // 641041093
		{ &Z_Construct_UFunction_UDungeonQueryUserState_SetString, "SetString" }, // 1735201360
		{ &Z_Construct_UFunction_UDungeonQueryUserState_SetVector, "SetVector" }, // 2089482568
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonQueryUserState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/DungeonQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDungeonQueryUserState_Statics::NewProp_UserData_ValueProp = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonQueryUserState_Statics::NewProp_UserData_Key_KeyProp = { "UserData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonQueryUserState_Statics::NewProp_UserData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDungeonQueryUserState_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonQueryUserState, UserData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDungeonQueryUserState_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonQueryUserState_Statics::NewProp_UserData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonQueryUserState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonQueryUserState_Statics::NewProp_UserData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonQueryUserState_Statics::NewProp_UserData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonQueryUserState_Statics::NewProp_UserData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonQueryUserState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonQueryUserState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonQueryUserState_Statics::ClassParams = {
		&UDungeonQueryUserState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDungeonQueryUserState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonQueryUserState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonQueryUserState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonQueryUserState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonQueryUserState()
	{
		if (!Z_Registration_Info_UClass_UDungeonQueryUserState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonQueryUserState.OuterSingleton, Z_Construct_UClass_UDungeonQueryUserState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonQueryUserState.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonQueryUserState>()
	{
		return UDungeonQueryUserState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonQueryUserState);
	void UDungeonQuery::StaticRegisterNativesUDungeonQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonQuery);
	UClass* Z_Construct_UClass_UDungeonQuery_NoRegister()
	{
		return UDungeonQuery::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Core/DungeonQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonQuery_Statics::NewProp_UserState_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonQuery_Statics::NewProp_UserState = { "UserState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonQuery, UserState), Z_Construct_UClass_UDungeonQueryUserState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonQuery_Statics::NewProp_UserState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonQuery_Statics::NewProp_UserState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonQuery_Statics::NewProp_UserState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonQuery_Statics::ClassParams = {
		&UDungeonQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonQuery_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonQuery()
	{
		if (!Z_Registration_Info_UClass_UDungeonQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonQuery.OuterSingleton, Z_Construct_UClass_UDungeonQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonQuery.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonQuery>()
	{
		return UDungeonQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonQuery);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonQueryUserState, UDungeonQueryUserState::StaticClass, TEXT("UDungeonQueryUserState"), &Z_Registration_Info_UClass_UDungeonQueryUserState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonQueryUserState), 4013170017U) },
		{ Z_Construct_UClass_UDungeonQuery, UDungeonQuery::StaticClass, TEXT("UDungeonQuery"), &Z_Registration_Info_UClass_UDungeonQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonQuery), 423471555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_3577899879(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
