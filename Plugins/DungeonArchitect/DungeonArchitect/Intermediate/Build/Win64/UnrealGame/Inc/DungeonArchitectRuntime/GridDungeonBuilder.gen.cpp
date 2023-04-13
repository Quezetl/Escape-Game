// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonBuilder() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilder();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_FCellType();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCell();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
// End Cross Module References
	DEFINE_FUNCTION(UGridDungeonBuilder::execGetRandomStream)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_OutRandomStream);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRandomStream(Z_Param_Out_OutRandomStream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonBuilder::execGetCellsOfType)
	{
		P_GET_ENUM(FCellType,Z_Param_CellType);
		P_GET_TARRAY_REF(FCell,Z_Param_Out_Cells);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCellsOfType(FCellType(Z_Param_CellType),Z_Param_Out_Cells);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonBuilder::execGetCorridors)
	{
		P_GET_TARRAY_REF(FCell,Z_Param_Out_CorridorCells);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCorridors(Z_Param_Out_CorridorCells);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonBuilder::execGetRooms)
	{
		P_GET_TARRAY_REF(FCell,Z_Param_Out_RoomCells);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRooms(Z_Param_Out_RoomCells);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridDungeonBuilder::execContainsCell)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsCell(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	void UGridDungeonBuilder::StaticRegisterNativesUGridDungeonBuilder()
	{
		UClass* Class = UGridDungeonBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsCell", &UGridDungeonBuilder::execContainsCell },
			{ "GetCellsOfType", &UGridDungeonBuilder::execGetCellsOfType },
			{ "GetCorridors", &UGridDungeonBuilder::execGetCorridors },
			{ "GetRandomStream", &UGridDungeonBuilder::execGetRandomStream },
			{ "GetRooms", &UGridDungeonBuilder::execGetRooms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics
	{
		struct GridDungeonBuilder_eventContainsCell_Parms
		{
			int32 x;
			int32 y;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonBuilder_eventContainsCell_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonBuilder_eventContainsCell_Parms, y), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridDungeonBuilder_eventContainsCell_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridDungeonBuilder_eventContainsCell_Parms), &Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonBuilder, nullptr, "ContainsCell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::GridDungeonBuilder_eventContainsCell_Parms), Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics
	{
		struct GridDungeonBuilder_eventGetCellsOfType_Parms
		{
			FCellType CellType;
			TArray<FCell> Cells;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonBuilder_eventGetCellsOfType_Parms, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_FCellType, METADATA_PARAMS(nullptr, 0) }; // 1492273055
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCell, METADATA_PARAMS(nullptr, 0) }; // 1107040313
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonBuilder_eventGetCellsOfType_Parms, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1107040313
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_CellType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_Cells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::NewProp_Cells,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonBuilder, nullptr, "GetCellsOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::GridDungeonBuilder_eventGetCellsOfType_Parms), Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics
	{
		struct GridDungeonBuilder_eventGetCorridors_Parms
		{
			TArray<FCell> CorridorCells;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CorridorCells_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CorridorCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::NewProp_CorridorCells_Inner = { "CorridorCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCell, METADATA_PARAMS(nullptr, 0) }; // 1107040313
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::NewProp_CorridorCells = { "CorridorCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonBuilder_eventGetCorridors_Parms, CorridorCells), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1107040313
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::NewProp_CorridorCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::NewProp_CorridorCells,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonBuilder, nullptr, "GetCorridors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::GridDungeonBuilder_eventGetCorridors_Parms), Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics
	{
		struct GridDungeonBuilder_eventGetRandomStream_Parms
		{
			FRandomStream OutRandomStream;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRandomStream;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::NewProp_OutRandomStream = { "OutRandomStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonBuilder_eventGetRandomStream_Parms, OutRandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::NewProp_OutRandomStream,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonBuilder, nullptr, "GetRandomStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::GridDungeonBuilder_eventGetRandomStream_Parms), Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics
	{
		struct GridDungeonBuilder_eventGetRooms_Parms
		{
			TArray<FCell> RoomCells;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomCells_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::NewProp_RoomCells_Inner = { "RoomCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCell, METADATA_PARAMS(nullptr, 0) }; // 1107040313
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::NewProp_RoomCells = { "RoomCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonBuilder_eventGetRooms_Parms, RoomCells), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1107040313
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::NewProp_RoomCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::NewProp_RoomCells,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonBuilder, nullptr, "GetRooms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::GridDungeonBuilder_eventGetRooms_Parms), Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonBuilder_GetRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonBuilder_GetRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonBuilder);
	UClass* Z_Construct_UClass_UGridDungeonBuilder_NoRegister()
	{
		return UGridDungeonBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UGridDungeonBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridDungeonBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridDungeonBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridDungeonBuilder_ContainsCell, "ContainsCell" }, // 1632113838
		{ &Z_Construct_UFunction_UGridDungeonBuilder_GetCellsOfType, "GetCellsOfType" }, // 2849295722
		{ &Z_Construct_UFunction_UGridDungeonBuilder_GetCorridors, "GetCorridors" }, // 4098864107
		{ &Z_Construct_UFunction_UGridDungeonBuilder_GetRandomStream, "GetRandomStream" }, // 2320095696
		{ &Z_Construct_UFunction_UGridDungeonBuilder_GetRooms, "GetRooms" }, // 1623659791
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/Grid/GridDungeonBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridDungeonBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonBuilder_Statics::ClassParams = {
		&UGridDungeonBuilder::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridDungeonBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridDungeonBuilder()
	{
		if (!Z_Registration_Info_UClass_UGridDungeonBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonBuilder.OuterSingleton, Z_Construct_UClass_UGridDungeonBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridDungeonBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonBuilder>()
	{
		return UGridDungeonBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonBuilder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonBuilder, UGridDungeonBuilder::StaticClass, TEXT("UGridDungeonBuilder"), &Z_Registration_Info_UClass_UGridDungeonBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonBuilder), 1157990426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_3631496163(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
