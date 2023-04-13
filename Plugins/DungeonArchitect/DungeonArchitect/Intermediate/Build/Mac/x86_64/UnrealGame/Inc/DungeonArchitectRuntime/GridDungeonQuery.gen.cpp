// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonQuery() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonQuery_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonQuery();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_FCellType();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellDoor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStairInfo();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGridDungeonQuery::execGetAdjacentCells)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CellId);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutAdjacentCells);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAdjacentCells(Z_Param_CellId,Z_Param_Out_OutAdjacentCells);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execIsNearMarker)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CurrentMarkerTransform);
		P_GET_PROPERTY(FStrProperty,Z_Param_NearbyMarkerName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NearbyDistance);
		P_GET_OBJECT(UDungeonBuilder,Z_Param_Builder);
		P_GET_UBOOL_REF(Z_Param_Out_bIsNear);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsNearMarker(Z_Param_Out_CurrentMarkerTransform,Z_Param_NearbyMarkerName,Z_Param_NearbyDistance,Z_Param_Builder,Z_Param_Out_bIsNear,Z_Param_Out_NumFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetAdjacentCellsOnEdge)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WallMarkerTransform);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CellA);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CellB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAdjacentCellsOnEdge(Z_Param_Out_WallMarkerTransform,Z_Param_Out_CellA,Z_Param_Out_CellB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetOpeningPointBetweenAdjacentCells)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CellA);
		P_GET_PROPERTY(FIntProperty,Z_Param_CellB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetOpeningPointBetweenAdjacentCells(Z_Param_CellA,Z_Param_CellB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetDoorBetween)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CellA);
		P_GET_PROPERTY(FIntProperty,Z_Param_CellB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCellDoor*)Z_Param__Result=P_THIS->GetDoorBetween(Z_Param_CellA,Z_Param_CellB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetStairBetween)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CellA);
		P_GET_PROPERTY(FIntProperty,Z_Param_CellB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FStairInfo*)Z_Param__Result=P_THIS->GetStairBetween(Z_Param_CellA,Z_Param_CellB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execContainsDoorBetween)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CellA);
		P_GET_PROPERTY(FIntProperty,Z_Param_CellB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsDoorBetween(Z_Param_CellA,Z_Param_CellB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execContainsStairBetween)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CellA);
		P_GET_PROPERTY(FIntProperty,Z_Param_CellB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsStairBetween(Z_Param_CellA,Z_Param_CellB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetRandomCellOfTypeFromStream)
	{
		P_GET_ENUM(FCellType,Z_Param_CellType);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomCellOfTypeFromStream(FCellType(Z_Param_CellType),Z_Param_Out_RandomStream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetRandomCellFromStream)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomCellFromStream(Z_Param_Out_RandomStream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetRandomCellOfType)
	{
		P_GET_ENUM(FCellType,Z_Param_CellType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomCellOfType(FCellType(Z_Param_CellType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetRandomCell)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomCell();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetCellType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CellId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCellType*)Z_Param__Result=P_THIS->GetCellType(Z_Param_CellId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetCellAtLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCellId);
		P_GET_UBOOL_REF(Z_Param_Out_bOutValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCellAtLocation(Z_Param_Out_WorldLocation,Z_Param_Out_OutCellId,Z_Param_Out_bOutValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetFurthestRooms)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutRoomA);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutRoomB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFurthestRooms(Z_Param_Out_OutRoomA,Z_Param_Out_OutRoomB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetPathBetweenCells)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CellA);
		P_GET_PROPERTY(FIntProperty,Z_Param_CellB);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutResult);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPathBetweenCells(Z_Param_CellA,Z_Param_CellB,Z_Param_Out_OutResult,Z_Param_Out_bOutSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetCellDimension)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CellId);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCenter);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCellDimension(Z_Param_CellId,Z_Param_Out_OutCenter,Z_Param_Out_OutSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetCellsOfType)
	{
		P_GET_ENUM(FCellType,Z_Param_CellType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetCellsOfType(FCellType(Z_Param_CellType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonQuery::execGetCells)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetCells();
		P_NATIVE_END;
	}
	void UGridDungeonQuery::StaticRegisterNativesUGridDungeonQuery()
	{
		UClass* Class = UGridDungeonQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsDoorBetween", &UGridDungeonQuery::execContainsDoorBetween },
			{ "ContainsStairBetween", &UGridDungeonQuery::execContainsStairBetween },
			{ "GetAdjacentCells", &UGridDungeonQuery::execGetAdjacentCells },
			{ "GetAdjacentCellsOnEdge", &UGridDungeonQuery::execGetAdjacentCellsOnEdge },
			{ "GetCellAtLocation", &UGridDungeonQuery::execGetCellAtLocation },
			{ "GetCellDimension", &UGridDungeonQuery::execGetCellDimension },
			{ "GetCells", &UGridDungeonQuery::execGetCells },
			{ "GetCellsOfType", &UGridDungeonQuery::execGetCellsOfType },
			{ "GetCellType", &UGridDungeonQuery::execGetCellType },
			{ "GetDoorBetween", &UGridDungeonQuery::execGetDoorBetween },
			{ "GetFurthestRooms", &UGridDungeonQuery::execGetFurthestRooms },
			{ "GetOpeningPointBetweenAdjacentCells", &UGridDungeonQuery::execGetOpeningPointBetweenAdjacentCells },
			{ "GetPathBetweenCells", &UGridDungeonQuery::execGetPathBetweenCells },
			{ "GetRandomCell", &UGridDungeonQuery::execGetRandomCell },
			{ "GetRandomCellFromStream", &UGridDungeonQuery::execGetRandomCellFromStream },
			{ "GetRandomCellOfType", &UGridDungeonQuery::execGetRandomCellOfType },
			{ "GetRandomCellOfTypeFromStream", &UGridDungeonQuery::execGetRandomCellOfTypeFromStream },
			{ "GetStairBetween", &UGridDungeonQuery::execGetStairBetween },
			{ "IsNearMarker", &UGridDungeonQuery::execIsNearMarker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics
	{
		struct GridDungeonQuery_eventContainsDoorBetween_Parms
		{
			int32 CellA;
			int32 CellB;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::NewProp_CellA = { "CellA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventContainsDoorBetween_Parms, CellA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::NewProp_CellB = { "CellB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventContainsDoorBetween_Parms, CellB), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridDungeonQuery_eventContainsDoorBetween_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridDungeonQuery_eventContainsDoorBetween_Parms), &Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::NewProp_CellA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::NewProp_CellB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "ContainsDoorBetween", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::GridDungeonQuery_eventContainsDoorBetween_Parms), Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics
	{
		struct GridDungeonQuery_eventContainsStairBetween_Parms
		{
			int32 CellA;
			int32 CellB;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::NewProp_CellA = { "CellA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventContainsStairBetween_Parms, CellA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::NewProp_CellB = { "CellB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventContainsStairBetween_Parms, CellB), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridDungeonQuery_eventContainsStairBetween_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridDungeonQuery_eventContainsStairBetween_Parms), &Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::NewProp_CellA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::NewProp_CellB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "ContainsStairBetween", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::GridDungeonQuery_eventContainsStairBetween_Parms), Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics
	{
		struct GridDungeonQuery_eventGetAdjacentCells_Parms
		{
			int32 CellId;
			TArray<int32> OutAdjacentCells;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutAdjacentCells_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAdjacentCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::NewProp_CellId = { "CellId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetAdjacentCells_Parms, CellId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::NewProp_OutAdjacentCells_Inner = { "OutAdjacentCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::NewProp_OutAdjacentCells = { "OutAdjacentCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetAdjacentCells_Parms, OutAdjacentCells), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::NewProp_CellId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::NewProp_OutAdjacentCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::NewProp_OutAdjacentCells,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetAdjacentCells", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::GridDungeonQuery_eventGetAdjacentCells_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics
	{
		struct GridDungeonQuery_eventGetAdjacentCellsOnEdge_Parms
		{
			FTransform WallMarkerTransform;
			int32 CellA;
			int32 CellB;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallMarkerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallMarkerTransform;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::NewProp_WallMarkerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::NewProp_WallMarkerTransform = { "WallMarkerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetAdjacentCellsOnEdge_Parms, WallMarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::NewProp_WallMarkerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::NewProp_WallMarkerTransform_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::NewProp_CellA = { "CellA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetAdjacentCellsOnEdge_Parms, CellA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::NewProp_CellB = { "CellB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetAdjacentCellsOnEdge_Parms, CellB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::NewProp_WallMarkerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::NewProp_CellA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::NewProp_CellB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetAdjacentCellsOnEdge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::GridDungeonQuery_eventGetAdjacentCellsOnEdge_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics
	{
		struct GridDungeonQuery_eventGetCellAtLocation_Parms
		{
			FVector WorldLocation;
			int32 OutCellId;
			bool bOutValid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutCellId;
		static void NewProp_bOutValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCellAtLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_OutCellId = { "OutCellId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCellAtLocation_Parms, OutCellId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_bOutValid_SetBit(void* Obj)
	{
		((GridDungeonQuery_eventGetCellAtLocation_Parms*)Obj)->bOutValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_bOutValid = { "bOutValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridDungeonQuery_eventGetCellAtLocation_Parms), &Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_bOutValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_OutCellId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::NewProp_bOutValid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetCellAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::GridDungeonQuery_eventGetCellAtLocation_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics
	{
		struct GridDungeonQuery_eventGetCellDimension_Parms
		{
			int32 CellId;
			FVector OutCenter;
			FVector OutSize;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCenter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::NewProp_CellId = { "CellId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCellDimension_Parms, CellId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::NewProp_OutCenter = { "OutCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCellDimension_Parms, OutCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::NewProp_OutSize = { "OutSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCellDimension_Parms, OutSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::NewProp_CellId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::NewProp_OutCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::NewProp_OutSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetCellDimension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::GridDungeonQuery_eventGetCellDimension_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics
	{
		struct GridDungeonQuery_eventGetCells_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCells_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetCells", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::GridDungeonQuery_eventGetCells_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetCells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetCells_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics
	{
		struct GridDungeonQuery_eventGetCellsOfType_Parms
		{
			FCellType CellType;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCellsOfType_Parms, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_FCellType, METADATA_PARAMS(nullptr, 0) }; // 1492273055
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCellsOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::NewProp_CellType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetCellsOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::GridDungeonQuery_eventGetCellsOfType_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics
	{
		struct GridDungeonQuery_eventGetCellType_Parms
		{
			int32 CellId;
			FCellType ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::NewProp_CellId = { "CellId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCellType_Parms, CellId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetCellType_Parms, ReturnValue), Z_Construct_UEnum_DungeonArchitectRuntime_FCellType, METADATA_PARAMS(nullptr, 0) }; // 1492273055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::NewProp_CellId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetCellType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::GridDungeonQuery_eventGetCellType_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetCellType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetCellType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics
	{
		struct GridDungeonQuery_eventGetDoorBetween_Parms
		{
			int32 CellA;
			int32 CellB;
			FCellDoor ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::NewProp_CellA = { "CellA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetDoorBetween_Parms, CellA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::NewProp_CellB = { "CellB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetDoorBetween_Parms, CellB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetDoorBetween_Parms, ReturnValue), Z_Construct_UScriptStruct_FCellDoor, METADATA_PARAMS(nullptr, 0) }; // 625907176
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::NewProp_CellA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::NewProp_CellB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetDoorBetween", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::GridDungeonQuery_eventGetDoorBetween_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics
	{
		struct GridDungeonQuery_eventGetFurthestRooms_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomA = { "OutRoomA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetFurthestRooms_Parms, OutRoomA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomB = { "OutRoomB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetFurthestRooms_Parms, OutRoomB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetFurthestRooms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::GridDungeonQuery_eventGetFurthestRooms_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics
	{
		struct GridDungeonQuery_eventGetOpeningPointBetweenAdjacentCells_Parms
		{
			int32 CellA;
			int32 CellB;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::NewProp_CellA = { "CellA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetOpeningPointBetweenAdjacentCells_Parms, CellA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::NewProp_CellB = { "CellB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetOpeningPointBetweenAdjacentCells_Parms, CellB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetOpeningPointBetweenAdjacentCells_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::NewProp_CellA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::NewProp_CellB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetOpeningPointBetweenAdjacentCells", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::GridDungeonQuery_eventGetOpeningPointBetweenAdjacentCells_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics
	{
		struct GridDungeonQuery_eventGetPathBetweenCells_Parms
		{
			int32 CellA;
			int32 CellB;
			TArray<int32> OutResult;
			bool bOutSuccess;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellB;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResult;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_CellA = { "CellA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetPathBetweenCells_Parms, CellA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_CellB = { "CellB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetPathBetweenCells_Parms, CellB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_OutResult_Inner = { "OutResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetPathBetweenCells_Parms, OutResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((GridDungeonQuery_eventGetPathBetweenCells_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridDungeonQuery_eventGetPathBetweenCells_Parms), &Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_CellA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_CellB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_OutResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::NewProp_bOutSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetPathBetweenCells", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::GridDungeonQuery_eventGetPathBetweenCells_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics
	{
		struct GridDungeonQuery_eventGetRandomCell_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetRandomCell_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetRandomCell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::GridDungeonQuery_eventGetRandomCell_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics
	{
		struct GridDungeonQuery_eventGetRandomCellFromStream_Parms
		{
			FRandomStream RandomStream;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetRandomCellFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetRandomCellFromStream_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetRandomCellFromStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::GridDungeonQuery_eventGetRandomCellFromStream_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics
	{
		struct GridDungeonQuery_eventGetRandomCellOfType_Parms
		{
			FCellType CellType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetRandomCellOfType_Parms, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_FCellType, METADATA_PARAMS(nullptr, 0) }; // 1492273055
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetRandomCellOfType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::NewProp_CellType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetRandomCellOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::GridDungeonQuery_eventGetRandomCellOfType_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics
	{
		struct GridDungeonQuery_eventGetRandomCellOfTypeFromStream_Parms
		{
			FCellType CellType;
			FRandomStream RandomStream;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetRandomCellOfTypeFromStream_Parms, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_FCellType, METADATA_PARAMS(nullptr, 0) }; // 1492273055
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetRandomCellOfTypeFromStream_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetRandomCellOfTypeFromStream_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::NewProp_CellType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetRandomCellOfTypeFromStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::GridDungeonQuery_eventGetRandomCellOfTypeFromStream_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics
	{
		struct GridDungeonQuery_eventGetStairBetween_Parms
		{
			int32 CellA;
			int32 CellB;
			FStairInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::NewProp_CellA = { "CellA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetStairBetween_Parms, CellA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::NewProp_CellB = { "CellB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetStairBetween_Parms, CellB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventGetStairBetween_Parms, ReturnValue), Z_Construct_UScriptStruct_FStairInfo, METADATA_PARAMS(nullptr, 0) }; // 678527234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::NewProp_CellA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::NewProp_CellB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "GetStairBetween", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::GridDungeonQuery_eventGetStairBetween_Parms), Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics
	{
		struct GridDungeonQuery_eventIsNearMarker_Parms
		{
			FTransform CurrentMarkerTransform;
			FString NearbyMarkerName;
			float NearbyDistance;
			UDungeonBuilder* Builder;
			bool bIsNear;
			int32 NumFound;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMarkerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMarkerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearbyMarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NearbyMarkerName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearbyDistance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
		static void NewProp_bIsNear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNear;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform = { "CurrentMarkerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventIsNearMarker_Parms, CurrentMarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName = { "NearbyMarkerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventIsNearMarker_Parms, NearbyMarkerName), METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_NearbyDistance = { "NearbyDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventIsNearMarker_Parms, NearbyDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventIsNearMarker_Parms, Builder), Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_bIsNear_SetBit(void* Obj)
	{
		((GridDungeonQuery_eventIsNearMarker_Parms*)Obj)->bIsNear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_bIsNear = { "bIsNear", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridDungeonQuery_eventIsNearMarker_Parms), &Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_bIsNear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_NumFound = { "NumFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonQuery_eventIsNearMarker_Parms, NumFound), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_CurrentMarkerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_NearbyMarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_NearbyDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_Builder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_bIsNear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::NewProp_NumFound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonQuery, nullptr, "IsNearMarker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::GridDungeonQuery_eventIsNearMarker_Parms), Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonQuery);
	UClass* Z_Construct_UClass_UGridDungeonQuery_NoRegister()
	{
		return UGridDungeonQuery::StaticClass();
	}
	struct Z_Construct_UClass_UGridDungeonQuery_Statics
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
	UObject* (*const Z_Construct_UClass_UGridDungeonQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridDungeonQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridDungeonQuery_ContainsDoorBetween, "ContainsDoorBetween" }, // 2847687218
		{ &Z_Construct_UFunction_UGridDungeonQuery_ContainsStairBetween, "ContainsStairBetween" }, // 1553689388
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCells, "GetAdjacentCells" }, // 2169161781
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetAdjacentCellsOnEdge, "GetAdjacentCellsOnEdge" }, // 2274492851
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetCellAtLocation, "GetCellAtLocation" }, // 3655987492
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetCellDimension, "GetCellDimension" }, // 1065093992
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetCells, "GetCells" }, // 531152610
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetCellsOfType, "GetCellsOfType" }, // 896507556
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetCellType, "GetCellType" }, // 1544396716
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetDoorBetween, "GetDoorBetween" }, // 1260284433
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetFurthestRooms, "GetFurthestRooms" }, // 726741849
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetOpeningPointBetweenAdjacentCells, "GetOpeningPointBetweenAdjacentCells" }, // 2763812339
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetPathBetweenCells, "GetPathBetweenCells" }, // 3363800459
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetRandomCell, "GetRandomCell" }, // 3965513332
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellFromStream, "GetRandomCellFromStream" }, // 3237746217
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfType, "GetRandomCellOfType" }, // 3195770887
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetRandomCellOfTypeFromStream, "GetRandomCellOfTypeFromStream" }, // 2203697240
		{ &Z_Construct_UFunction_UGridDungeonQuery_GetStairBetween, "GetStairBetween" }, // 1957963629
		{ &Z_Construct_UFunction_UGridDungeonQuery_IsNearMarker, "IsNearMarker" }, // 1716195945
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/Grid/GridDungeonQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonQuery, Config), Z_Construct_UClass_UGridDungeonConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonQuery.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonQuery, Model), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonQuery_Statics::NewProp_Model,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridDungeonQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonQuery_Statics::ClassParams = {
		&UGridDungeonQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridDungeonQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonQuery_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridDungeonQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridDungeonQuery()
	{
		if (!Z_Registration_Info_UClass_UGridDungeonQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonQuery.OuterSingleton, Z_Construct_UClass_UGridDungeonQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridDungeonQuery.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonQuery>()
	{
		return UGridDungeonQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonQuery);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonQuery, UGridDungeonQuery::StaticClass, TEXT("UGridDungeonQuery"), &Z_Registration_Info_UClass_UGridDungeonQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonQuery), 1621629305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_2622864670(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
