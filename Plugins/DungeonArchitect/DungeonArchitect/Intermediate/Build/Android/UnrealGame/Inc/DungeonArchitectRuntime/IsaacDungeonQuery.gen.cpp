// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacDungeonQuery() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonQuery_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonQuery();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoom();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonModel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIsaacDungeonQuery::execGetRandomValidPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRandomValidPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsaacDungeonQuery::execGetValidPlatformOnRoom)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RoomId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetValidPlatformOnRoom(Z_Param_RoomId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsaacDungeonQuery::execContainsDoorBetween)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RoomAId);
		P_GET_PROPERTY(FIntProperty,Z_Param_RoomBId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsDoorBetween(Z_Param_RoomAId,Z_Param_RoomBId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsaacDungeonQuery::execGetFurthestRooms)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutRoomA);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutRoomB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFurthestRooms(Z_Param_Out_OutRoomA,Z_Param_Out_OutRoomB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIsaacDungeonQuery::execGetRoom)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RoomId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIsaacRoom*)Z_Param__Result=P_THIS->GetRoom(Z_Param_RoomId);
		P_NATIVE_END;
	}
	void UIsaacDungeonQuery::StaticRegisterNativesUIsaacDungeonQuery()
	{
		UClass* Class = UIsaacDungeonQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsDoorBetween", &UIsaacDungeonQuery::execContainsDoorBetween },
			{ "GetFurthestRooms", &UIsaacDungeonQuery::execGetFurthestRooms },
			{ "GetRandomValidPlatform", &UIsaacDungeonQuery::execGetRandomValidPlatform },
			{ "GetRoom", &UIsaacDungeonQuery::execGetRoom },
			{ "GetValidPlatformOnRoom", &UIsaacDungeonQuery::execGetValidPlatformOnRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics
	{
		struct IsaacDungeonQuery_eventContainsDoorBetween_Parms
		{
			int32 RoomAId;
			int32 RoomBId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoomAId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoomBId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_RoomAId = { "RoomAId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventContainsDoorBetween_Parms, RoomAId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_RoomBId = { "RoomBId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventContainsDoorBetween_Parms, RoomBId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IsaacDungeonQuery_eventContainsDoorBetween_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IsaacDungeonQuery_eventContainsDoorBetween_Parms), &Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_RoomAId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_RoomBId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "ContainsDoorBetween", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::IsaacDungeonQuery_eventContainsDoorBetween_Parms), Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics
	{
		struct IsaacDungeonQuery_eventGetFurthestRooms_Parms
		{
			int32 OutRoomA;
			int32 OutRoomB;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutRoomA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutRoomB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomA = { "OutRoomA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetFurthestRooms_Parms, OutRoomA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomB = { "OutRoomB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetFurthestRooms_Parms, OutRoomB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "GetFurthestRooms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::IsaacDungeonQuery_eventGetFurthestRooms_Parms), Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics
	{
		struct IsaacDungeonQuery_eventGetRandomValidPlatform_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetRandomValidPlatform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "GetRandomValidPlatform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::IsaacDungeonQuery_eventGetRandomValidPlatform_Parms), Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics
	{
		struct IsaacDungeonQuery_eventGetRoom_Parms
		{
			int32 RoomId;
			FIsaacRoom ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoomId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetRoom_Parms, RoomId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetRoom_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsaacRoom, METADATA_PARAMS(nullptr, 0) }; // 1396880240
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::NewProp_RoomId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "GetRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::IsaacDungeonQuery_eventGetRoom_Parms), Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics
	{
		struct IsaacDungeonQuery_eventGetValidPlatformOnRoom_Parms
		{
			int32 RoomId;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoomId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetValidPlatformOnRoom_Parms, RoomId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetValidPlatformOnRoom_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::NewProp_RoomId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "GetValidPlatformOnRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::IsaacDungeonQuery_eventGetValidPlatformOnRoom_Parms), Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacDungeonQuery);
	UClass* Z_Construct_UClass_UIsaacDungeonQuery_NoRegister()
	{
		return UIsaacDungeonQuery::StaticClass();
	}
	struct Z_Construct_UClass_UIsaacDungeonQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsaacDungeonQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsaacDungeonQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween, "ContainsDoorBetween" }, // 400669238
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms, "GetFurthestRooms" }, // 4154855592
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform, "GetRandomValidPlatform" }, // 4031239072
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom, "GetRoom" }, // 2067323304
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom, "GetValidPlatformOnRoom" }, // 2351809431
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/Isaac/IsaacDungeonQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsaacDungeonQuery, Config), Z_Construct_UClass_UIsaacDungeonConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsaacDungeonQuery, Model), Z_Construct_UClass_UIsaacDungeonModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsaacDungeonQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Model,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsaacDungeonQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacDungeonQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacDungeonQuery_Statics::ClassParams = {
		&UIsaacDungeonQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIsaacDungeonQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonQuery_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsaacDungeonQuery()
	{
		if (!Z_Registration_Info_UClass_UIsaacDungeonQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacDungeonQuery.OuterSingleton, Z_Construct_UClass_UIsaacDungeonQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsaacDungeonQuery.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacDungeonQuery>()
	{
		return UIsaacDungeonQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacDungeonQuery);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacDungeonQuery, UIsaacDungeonQuery::StaticClass, TEXT("UIsaacDungeonQuery"), &Z_Registration_Info_UClass_UIsaacDungeonQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacDungeonQuery), 3815432100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_180565870(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
