// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonModelHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonModelHelper() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModelHelper_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModelHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRectangle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonModelHelper::execGetRectAreaPoints)
	{
		P_GET_STRUCT_REF(FRectangle,Z_Param_Out_Rectangle);
		P_GET_TARRAY_REF(FIntVector,Z_Param_Out_BorderPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDungeonModelHelper::GetRectAreaPoints(Z_Param_Out_Rectangle,Z_Param_Out_BorderPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonModelHelper::execGetRectBorderPoints)
	{
		P_GET_STRUCT_REF(FRectangle,Z_Param_Out_Rectangle);
		P_GET_TARRAY_REF(FIntVector,Z_Param_Out_BorderPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDungeonModelHelper::GetRectBorderPoints(Z_Param_Out_Rectangle,Z_Param_Out_BorderPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonModelHelper::execGetCenterExtent)
	{
		P_GET_STRUCT_REF(FRectangle,Z_Param_Out_Rectangle);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDungeonModelHelper::GetCenterExtent(Z_Param_Out_Rectangle,Z_Param_Out_Center,Z_Param_Out_Extent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonModelHelper::execExpandBounds)
	{
		P_GET_STRUCT_REF(FRectangle,Z_Param_Out_Bounds);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_GET_STRUCT_REF(FRectangle,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDungeonModelHelper::ExpandBounds(Z_Param_Out_Bounds,Z_Param_Size,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonModelHelper::execMakeIntVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UDungeonModelHelper::MakeIntVector(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonModelHelper::execMakeVector)
	{
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_In);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UDungeonModelHelper::MakeVector(Z_Param_Out_In,Z_Param_scale);
		P_NATIVE_END;
	}
	void UDungeonModelHelper::StaticRegisterNativesUDungeonModelHelper()
	{
		UClass* Class = UDungeonModelHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExpandBounds", &UDungeonModelHelper::execExpandBounds },
			{ "GetCenterExtent", &UDungeonModelHelper::execGetCenterExtent },
			{ "GetRectAreaPoints", &UDungeonModelHelper::execGetRectAreaPoints },
			{ "GetRectBorderPoints", &UDungeonModelHelper::execGetRectBorderPoints },
			{ "MakeIntVector", &UDungeonModelHelper::execMakeIntVector },
			{ "MakeVector", &UDungeonModelHelper::execMakeVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics
	{
		struct DungeonModelHelper_eventExpandBounds_Parms
		{
			FRectangle Bounds;
			int32 Size;
			FRectangle Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventExpandBounds_Parms, Bounds), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::NewProp_Bounds_MetaData)) }; // 946287433
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventExpandBounds_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventExpandBounds_Parms, Result), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(nullptr, 0) }; // 946287433
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonModelHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonModelHelper, nullptr, "ExpandBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::DungeonModelHelper_eventExpandBounds_Parms), Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics
	{
		struct DungeonModelHelper_eventGetCenterExtent_Parms
		{
			FRectangle Rectangle;
			FVector Center;
			FVector Extent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rectangle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rectangle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::NewProp_Rectangle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::NewProp_Rectangle = { "Rectangle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventGetCenterExtent_Parms, Rectangle), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::NewProp_Rectangle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::NewProp_Rectangle_MetaData)) }; // 946287433
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventGetCenterExtent_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventGetCenterExtent_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::NewProp_Rectangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::NewProp_Extent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonModelHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonModelHelper, nullptr, "GetCenterExtent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::DungeonModelHelper_eventGetCenterExtent_Parms), Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics
	{
		struct DungeonModelHelper_eventGetRectAreaPoints_Parms
		{
			FRectangle Rectangle;
			TArray<FIntVector> BorderPoints;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rectangle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rectangle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BorderPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::NewProp_Rectangle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::NewProp_Rectangle = { "Rectangle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventGetRectAreaPoints_Parms, Rectangle), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::NewProp_Rectangle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::NewProp_Rectangle_MetaData)) }; // 946287433
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::NewProp_BorderPoints_Inner = { "BorderPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::NewProp_BorderPoints = { "BorderPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventGetRectAreaPoints_Parms, BorderPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::NewProp_Rectangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::NewProp_BorderPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::NewProp_BorderPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonModelHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonModelHelper, nullptr, "GetRectAreaPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::DungeonModelHelper_eventGetRectAreaPoints_Parms), Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics
	{
		struct DungeonModelHelper_eventGetRectBorderPoints_Parms
		{
			FRectangle Rectangle;
			TArray<FIntVector> BorderPoints;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rectangle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rectangle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BorderPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::NewProp_Rectangle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::NewProp_Rectangle = { "Rectangle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventGetRectBorderPoints_Parms, Rectangle), Z_Construct_UScriptStruct_FRectangle, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::NewProp_Rectangle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::NewProp_Rectangle_MetaData)) }; // 946287433
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::NewProp_BorderPoints_Inner = { "BorderPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::NewProp_BorderPoints = { "BorderPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventGetRectBorderPoints_Parms, BorderPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::NewProp_Rectangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::NewProp_BorderPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::NewProp_BorderPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonModelHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonModelHelper, nullptr, "GetRectBorderPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::DungeonModelHelper_eventGetRectBorderPoints_Parms), Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics
	{
		struct DungeonModelHelper_eventMakeIntVector_Parms
		{
			FVector In;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_In;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventMakeIntVector_Parms, In), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::NewProp_In_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventMakeIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::NewProp_In,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonModelHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonModelHelper, nullptr, "MakeIntVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::DungeonModelHelper_eventMakeIntVector_Parms), Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics
	{
		struct DungeonModelHelper_eventMakeVector_Parms
		{
			FIntVector In;
			float scale;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_In;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventMakeVector_Parms, In), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::NewProp_In_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventMakeVector_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonModelHelper_eventMakeVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::NewProp_In,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "CPP_Default_scale", "1.000000" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonModelHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonModelHelper, nullptr, "MakeVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::DungeonModelHelper_eventMakeVector_Parms), Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonModelHelper_MakeVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonModelHelper_MakeVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonModelHelper);
	UClass* Z_Construct_UClass_UDungeonModelHelper_NoRegister()
	{
		return UDungeonModelHelper::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonModelHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonModelHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonModelHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonModelHelper_ExpandBounds, "ExpandBounds" }, // 2458209963
		{ &Z_Construct_UFunction_UDungeonModelHelper_GetCenterExtent, "GetCenterExtent" }, // 1477258928
		{ &Z_Construct_UFunction_UDungeonModelHelper_GetRectAreaPoints, "GetRectAreaPoints" }, // 136163060
		{ &Z_Construct_UFunction_UDungeonModelHelper_GetRectBorderPoints, "GetRectBorderPoints" }, // 3156053004
		{ &Z_Construct_UFunction_UDungeonModelHelper_MakeIntVector, "MakeIntVector" }, // 4046733920
		{ &Z_Construct_UFunction_UDungeonModelHelper_MakeVector, "MakeVector" }, // 2032615170
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonModelHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/Utils/DungeonModelHelper.h" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonModelHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonModelHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonModelHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonModelHelper_Statics::ClassParams = {
		&UDungeonModelHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDungeonModelHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonModelHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonModelHelper()
	{
		if (!Z_Registration_Info_UClass_UDungeonModelHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonModelHelper.OuterSingleton, Z_Construct_UClass_UDungeonModelHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonModelHelper.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonModelHelper>()
	{
		return UDungeonModelHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonModelHelper);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonModelHelper, UDungeonModelHelper::StaticClass, TEXT("UDungeonModelHelper"), &Z_Registration_Info_UClass_UDungeonModelHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonModelHelper), 1312640791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_3462845738(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
