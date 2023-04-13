// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonTransformLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacDungeonTransformLogic() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonTransformLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonTransformLogic();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonModel_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UIsaacDungeonTransformLogic::execGetNodeOffset)
	{
		P_GET_OBJECT(UIsaacDungeonModel,Z_Param_Model);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Out_Offset);
		P_NATIVE_END;
	}
	static FName NAME_UIsaacDungeonTransformLogic_GetNodeOffset = FName(TEXT("GetNodeOffset"));
	void UIsaacDungeonTransformLogic::GetNodeOffset(UIsaacDungeonModel* Model, FTransform& Offset)
	{
		IsaacDungeonTransformLogic_eventGetNodeOffset_Parms Parms;
		Parms.Model=Model;
		Parms.Offset=Offset;
		ProcessEvent(FindFunctionChecked(NAME_UIsaacDungeonTransformLogic_GetNodeOffset),&Parms);
		Offset=Parms.Offset;
	}
	void UIsaacDungeonTransformLogic::StaticRegisterNativesUIsaacDungeonTransformLogic()
	{
		UClass* Class = UIsaacDungeonTransformLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNodeOffset", &UIsaacDungeonTransformLogic::execGetNodeOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonTransformLogic_eventGetNodeOffset_Parms, Model), Z_Construct_UClass_UIsaacDungeonModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonTransformLogic_eventGetNodeOffset_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonTransformLogic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonTransformLogic, nullptr, "GetNodeOffset", nullptr, nullptr, sizeof(IsaacDungeonTransformLogic_eventGetNodeOffset_Parms), Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacDungeonTransformLogic);
	UClass* Z_Construct_UClass_UIsaacDungeonTransformLogic_NoRegister()
	{
		return UIsaacDungeonTransformLogic::StaticClass();
	}
	struct Z_Construct_UClass_UIsaacDungeonTransformLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsaacDungeonTransformLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonTransformLogic,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsaacDungeonTransformLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsaacDungeonTransformLogic_GetNodeOffset, "GetNodeOffset" }, // 2392897636
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonTransformLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/Isaac/IsaacDungeonTransformLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonTransformLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsaacDungeonTransformLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacDungeonTransformLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacDungeonTransformLogic_Statics::ClassParams = {
		&UIsaacDungeonTransformLogic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonTransformLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonTransformLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsaacDungeonTransformLogic()
	{
		if (!Z_Registration_Info_UClass_UIsaacDungeonTransformLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacDungeonTransformLogic.OuterSingleton, Z_Construct_UClass_UIsaacDungeonTransformLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsaacDungeonTransformLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacDungeonTransformLogic>()
	{
		return UIsaacDungeonTransformLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacDungeonTransformLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacDungeonTransformLogic, UIsaacDungeonTransformLogic::StaticClass, TEXT("UIsaacDungeonTransformLogic"), &Z_Registration_Info_UClass_UIsaacDungeonTransformLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacDungeonTransformLogic), 4190664074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_21040915(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonTransformLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
