// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonNavLinkProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonNavLinkProxy() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonNavLinkProxy_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonNavLinkProxy();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
// End Cross Module References
	DEFINE_FUNCTION(ADungeonNavLinkProxy::execSetupSmartLinkData)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupSmartLinkData(Z_Param_Out_Start,Z_Param_Out_End,ENavLinkDirection::Type(Z_Param_Direction));
		P_NATIVE_END;
	}
	void ADungeonNavLinkProxy::StaticRegisterNativesADungeonNavLinkProxy()
	{
		UClass* Class = ADungeonNavLinkProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupSmartLinkData", &ADungeonNavLinkProxy::execSetupSmartLinkData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics
	{
		struct DungeonNavLinkProxy_eventSetupSmartLinkData_Parms
		{
			FVector Start;
			FVector End;
			TEnumAsByte<ENavLinkDirection::Type> Direction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonNavLinkProxy_eventSetupSmartLinkData_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonNavLinkProxy_eventSetupSmartLinkData_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonNavLinkProxy_eventSetupSmartLinkData_Parms, Direction), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(nullptr, 0) }; // 942439066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonNavLinkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonNavLinkProxy, nullptr, "SetupSmartLinkData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::DungeonNavLinkProxy_eventSetupSmartLinkData_Parms), Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonNavLinkProxy);
	UClass* Z_Construct_UClass_ADungeonNavLinkProxy_NoRegister()
	{
		return ADungeonNavLinkProxy::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonNavLinkProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonNavLinkProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavLinkProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADungeonNavLinkProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData, "SetupSmartLinkData" }, // 2229783515
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonNavLinkProxy_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor SmartLink Actor" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Input" },
		{ "IncludePath", "Core/Utils/DungeonNavLinkProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonNavLinkProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonNavLinkProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonNavLinkProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonNavLinkProxy_Statics::ClassParams = {
		&ADungeonNavLinkProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonNavLinkProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonNavLinkProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonNavLinkProxy()
	{
		if (!Z_Registration_Info_UClass_ADungeonNavLinkProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonNavLinkProxy.OuterSingleton, Z_Construct_UClass_ADungeonNavLinkProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonNavLinkProxy.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonNavLinkProxy>()
	{
		return ADungeonNavLinkProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonNavLinkProxy);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonNavLinkProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonNavLinkProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonNavLinkProxy, ADungeonNavLinkProxy::StaticClass, TEXT("ADungeonNavLinkProxy"), &Z_Registration_Info_UClass_ADungeonNavLinkProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonNavLinkProxy), 3589357937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonNavLinkProxy_h_14747774(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonNavLinkProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonNavLinkProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
