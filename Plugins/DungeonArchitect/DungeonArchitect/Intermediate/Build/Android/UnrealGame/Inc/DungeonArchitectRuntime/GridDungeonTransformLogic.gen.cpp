// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/GridDungeonTransformLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonTransformLogic() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonTransformLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonTransformLogic();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonQuery_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCell();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UGridDungeonTransformLogic::execGetNodeOffset)
	{
		P_GET_OBJECT(UGridDungeonModel,Z_Param_Model);
		P_GET_OBJECT(UGridDungeonConfig,Z_Param_Config);
		P_GET_OBJECT(UGridDungeonBuilder,Z_Param_Builder);
		P_GET_OBJECT(UGridDungeonQuery,Z_Param_Query);
		P_GET_STRUCT_REF(FCell,Z_Param_Out_Cell);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_MarkerTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Builder,Z_Param_Query,Z_Param_Out_Cell,Z_Param_Out_RandomStream,Z_Param_GridX,Z_Param_GridY,Z_Param_Out_MarkerTransform,Z_Param_Out_Offset);
		P_NATIVE_END;
	}
	static FName NAME_UGridDungeonTransformLogic_GetNodeOffset = FName(TEXT("GetNodeOffset"));
	void UGridDungeonTransformLogic::GetNodeOffset(UGridDungeonModel* Model, UGridDungeonConfig* Config, UGridDungeonBuilder* Builder, UGridDungeonQuery* Query, FCell const& Cell, FRandomStream const& RandomStream, int32 GridX, int32 GridY, FTransform const& MarkerTransform, FTransform& Offset)
	{
		GridDungeonTransformLogic_eventGetNodeOffset_Parms Parms;
		Parms.Model=Model;
		Parms.Config=Config;
		Parms.Builder=Builder;
		Parms.Query=Query;
		Parms.Cell=Cell;
		Parms.RandomStream=RandomStream;
		Parms.GridX=GridX;
		Parms.GridY=GridY;
		Parms.MarkerTransform=MarkerTransform;
		Parms.Offset=Offset;
		ProcessEvent(FindFunctionChecked(NAME_UGridDungeonTransformLogic_GetNodeOffset),&Parms);
		Offset=Parms.Offset;
	}
	void UGridDungeonTransformLogic::StaticRegisterNativesUGridDungeonTransformLogic()
	{
		UClass* Class = UGridDungeonTransformLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNodeOffset", &UGridDungeonTransformLogic::execGetNodeOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, Model), Z_Construct_UClass_UGridDungeonModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, Config), Z_Construct_UClass_UGridDungeonConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, Builder), Z_Construct_UClass_UGridDungeonBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, Query), Z_Construct_UClass_UGridDungeonQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Cell_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, Cell), Z_Construct_UScriptStruct_FCell, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Cell_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Cell_MetaData)) }; // 1107040313
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, GridX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, GridY), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_MarkerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_MarkerTransform = { "MarkerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, MarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_MarkerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_MarkerTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridDungeonTransformLogic_eventGetNodeOffset_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Builder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Cell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_GridX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_GridY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_MarkerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonTransformLogic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridDungeonTransformLogic, nullptr, "GetNodeOffset", nullptr, nullptr, sizeof(GridDungeonTransformLogic_eventGetNodeOffset_Parms), Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonTransformLogic);
	UClass* Z_Construct_UClass_UGridDungeonTransformLogic_NoRegister()
	{
		return UGridDungeonTransformLogic::StaticClass();
	}
	struct Z_Construct_UClass_UGridDungeonTransformLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridDungeonTransformLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonTransformLogic,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridDungeonTransformLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridDungeonTransformLogic_GetNodeOffset, "GetNodeOffset" }, // 1866685289
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonTransformLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/Grid/GridDungeonTransformLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/GridDungeonTransformLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridDungeonTransformLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonTransformLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonTransformLogic_Statics::ClassParams = {
		&UGridDungeonTransformLogic::StaticClass,
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
		0x043010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridDungeonTransformLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonTransformLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridDungeonTransformLogic()
	{
		if (!Z_Registration_Info_UClass_UGridDungeonTransformLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonTransformLogic.OuterSingleton, Z_Construct_UClass_UGridDungeonTransformLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridDungeonTransformLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridDungeonTransformLogic>()
	{
		return UGridDungeonTransformLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonTransformLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonTransformLogic, UGridDungeonTransformLogic::StaticClass, TEXT("UGridDungeonTransformLogic"), &Z_Registration_Info_UClass_UGridDungeonTransformLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonTransformLogic), 2756475697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_4238792585(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonTransformLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
