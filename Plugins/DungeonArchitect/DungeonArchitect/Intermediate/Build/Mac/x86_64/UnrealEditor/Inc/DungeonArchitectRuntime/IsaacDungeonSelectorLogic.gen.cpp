// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonSelectorLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacDungeonSelectorLogic() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonSelectorLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonSelectorLogic();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonModel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIsaacDungeonSelectorLogic::execSelectNode)
	{
		P_GET_OBJECT(UIsaacDungeonModel,Z_Param_Model);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectNode_Implementation(Z_Param_Model);
		P_NATIVE_END;
	}
	static FName NAME_UIsaacDungeonSelectorLogic_SelectNode = FName(TEXT("SelectNode"));
	bool UIsaacDungeonSelectorLogic::SelectNode(UIsaacDungeonModel* Model)
	{
		IsaacDungeonSelectorLogic_eventSelectNode_Parms Parms;
		Parms.Model=Model;
		ProcessEvent(FindFunctionChecked(NAME_UIsaacDungeonSelectorLogic_SelectNode),&Parms);
		return !!Parms.ReturnValue;
	}
	void UIsaacDungeonSelectorLogic::StaticRegisterNativesUIsaacDungeonSelectorLogic()
	{
		UClass* Class = UIsaacDungeonSelectorLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectNode", &UIsaacDungeonSelectorLogic::execSelectNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsaacDungeonSelectorLogic_eventSelectNode_Parms, Model), Z_Construct_UClass_UIsaacDungeonModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IsaacDungeonSelectorLogic_eventSelectNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IsaacDungeonSelectorLogic_eventSelectNode_Parms), &Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** called when something enters the sphere component */" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonSelectorLogic.h" },
		{ "ToolTip", "called when something enters the sphere component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonSelectorLogic, nullptr, "SelectNode", nullptr, nullptr, sizeof(IsaacDungeonSelectorLogic_eventSelectNode_Parms), Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacDungeonSelectorLogic);
	UClass* Z_Construct_UClass_UIsaacDungeonSelectorLogic_NoRegister()
	{
		return UIsaacDungeonSelectorLogic::StaticClass();
	}
	struct Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonSelectorLogic,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsaacDungeonSelectorLogic_SelectNode, "SelectNode" }, // 754097121
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/Isaac/IsaacDungeonSelectorLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonSelectorLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacDungeonSelectorLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics::ClassParams = {
		&UIsaacDungeonSelectorLogic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsaacDungeonSelectorLogic()
	{
		if (!Z_Registration_Info_UClass_UIsaacDungeonSelectorLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacDungeonSelectorLogic.OuterSingleton, Z_Construct_UClass_UIsaacDungeonSelectorLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsaacDungeonSelectorLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacDungeonSelectorLogic>()
	{
		return UIsaacDungeonSelectorLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacDungeonSelectorLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacDungeonSelectorLogic, UIsaacDungeonSelectorLogic::StaticClass, TEXT("UIsaacDungeonSelectorLogic"), &Z_Registration_Info_UClass_UIsaacDungeonSelectorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacDungeonSelectorLogic), 1393027420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_3417800436(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonSelectorLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
