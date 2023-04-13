// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/FloorPlan/FloorPlanTransformLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlanTransformLogic() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanTransformLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanTransformLogic();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanConfig_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UFloorPlanTransformLogic::execGetNodeOffset)
	{
		P_GET_OBJECT(UFloorPlanModel,Z_Param_Model);
		P_GET_OBJECT(UFloorPlanConfig,Z_Param_Config);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridX);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridY);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Out_RandomStream,Z_Param_GridX,Z_Param_GridY,Z_Param_Out_Offset);
		P_NATIVE_END;
	}
	static FName NAME_UFloorPlanTransformLogic_GetNodeOffset = FName(TEXT("GetNodeOffset"));
	void UFloorPlanTransformLogic::GetNodeOffset(UFloorPlanModel* Model, UFloorPlanConfig* Config, FRandomStream const& RandomStream, int32 GridX, int32 GridY, FTransform& Offset)
	{
		FloorPlanTransformLogic_eventGetNodeOffset_Parms Parms;
		Parms.Model=Model;
		Parms.Config=Config;
		Parms.RandomStream=RandomStream;
		Parms.GridX=GridX;
		Parms.GridY=GridY;
		Parms.Offset=Offset;
		ProcessEvent(FindFunctionChecked(NAME_UFloorPlanTransformLogic_GetNodeOffset),&Parms);
		Offset=Parms.Offset;
	}
	void UFloorPlanTransformLogic::StaticRegisterNativesUFloorPlanTransformLogic()
	{
		UClass* Class = UFloorPlanTransformLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNodeOffset", &UFloorPlanTransformLogic::execGetNodeOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorPlanTransformLogic_eventGetNodeOffset_Parms, Model), Z_Construct_UClass_UFloorPlanModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorPlanTransformLogic_eventGetNodeOffset_Parms, Config), Z_Construct_UClass_UFloorPlanConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorPlanTransformLogic_eventGetNodeOffset_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorPlanTransformLogic_eventGetNodeOffset_Parms, GridX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorPlanTransformLogic_eventGetNodeOffset_Parms, GridY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorPlanTransformLogic_eventGetNodeOffset_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_GridX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_GridY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanTransformLogic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloorPlanTransformLogic, nullptr, "GetNodeOffset", nullptr, nullptr, sizeof(FloorPlanTransformLogic_eventGetNodeOffset_Parms), Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorPlanTransformLogic);
	UClass* Z_Construct_UClass_UFloorPlanTransformLogic_NoRegister()
	{
		return UFloorPlanTransformLogic::StaticClass();
	}
	struct Z_Construct_UClass_UFloorPlanTransformLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorPlanTransformLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonTransformLogic,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloorPlanTransformLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloorPlanTransformLogic_GetNodeOffset, "GetNodeOffset" }, // 3326017999
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanTransformLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/FloorPlan/FloorPlanTransformLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanTransformLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorPlanTransformLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorPlanTransformLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorPlanTransformLogic_Statics::ClassParams = {
		&UFloorPlanTransformLogic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFloorPlanTransformLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanTransformLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorPlanTransformLogic()
	{
		if (!Z_Registration_Info_UClass_UFloorPlanTransformLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorPlanTransformLogic.OuterSingleton, Z_Construct_UClass_UFloorPlanTransformLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorPlanTransformLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFloorPlanTransformLogic>()
	{
		return UFloorPlanTransformLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorPlanTransformLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorPlanTransformLogic, UFloorPlanTransformLogic::StaticClass, TEXT("UFloorPlanTransformLogic"), &Z_Registration_Info_UClass_UFloorPlanTransformLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorPlanTransformLogic), 2072839372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_2429180050(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanTransformLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
