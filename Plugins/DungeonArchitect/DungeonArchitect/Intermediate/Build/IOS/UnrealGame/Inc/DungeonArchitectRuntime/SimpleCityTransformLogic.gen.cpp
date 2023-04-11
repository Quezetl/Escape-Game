// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityTransformLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityTransformLogic() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityTransformLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityTransformLogic();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityModel_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(USimpleCityTransformLogic::execGetNodeOffset)
	{
		P_GET_OBJECT(USimpleCityModel,Z_Param_Model);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Out_Offset);
		P_NATIVE_END;
	}
	static FName NAME_USimpleCityTransformLogic_GetNodeOffset = FName(TEXT("GetNodeOffset"));
	void USimpleCityTransformLogic::GetNodeOffset(USimpleCityModel* Model, FTransform& Offset)
	{
		SimpleCityTransformLogic_eventGetNodeOffset_Parms Parms;
		Parms.Model=Model;
		Parms.Offset=Offset;
		ProcessEvent(FindFunctionChecked(NAME_USimpleCityTransformLogic_GetNodeOffset),&Parms);
		Offset=Parms.Offset;
	}
	void USimpleCityTransformLogic::StaticRegisterNativesUSimpleCityTransformLogic()
	{
		UClass* Class = USimpleCityTransformLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNodeOffset", &USimpleCityTransformLogic::execGetNodeOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleCityTransformLogic_eventGetNodeOffset_Parms, Model), Z_Construct_UClass_USimpleCityModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleCityTransformLogic_eventGetNodeOffset_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityTransformLogic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCityTransformLogic, nullptr, "GetNodeOffset", nullptr, nullptr, sizeof(SimpleCityTransformLogic_eventGetNodeOffset_Parms), Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityTransformLogic);
	UClass* Z_Construct_UClass_USimpleCityTransformLogic_NoRegister()
	{
		return USimpleCityTransformLogic::StaticClass();
	}
	struct Z_Construct_UClass_USimpleCityTransformLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleCityTransformLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonTransformLogic,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleCityTransformLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset, "GetNodeOffset" }, // 777742680
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityTransformLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/SimpleCity/SimpleCityTransformLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityTransformLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleCityTransformLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityTransformLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityTransformLogic_Statics::ClassParams = {
		&USimpleCityTransformLogic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleCityTransformLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityTransformLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleCityTransformLogic()
	{
		if (!Z_Registration_Info_UClass_USimpleCityTransformLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityTransformLogic.OuterSingleton, Z_Construct_UClass_USimpleCityTransformLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleCityTransformLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityTransformLogic>()
	{
		return USimpleCityTransformLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityTransformLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityTransformLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityTransformLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityTransformLogic, USimpleCityTransformLogic::StaticClass, TEXT("USimpleCityTransformLogic"), &Z_Registration_Info_UClass_USimpleCityTransformLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityTransformLogic), 1889108036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityTransformLogic_h_1932177210(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityTransformLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityTransformLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
