// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonSelectorLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonSelectorLogic() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonSelectorLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonSelectorLogic();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonModel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USnapMapDungeonSelectorLogic::execSelectNode)
	{
		P_GET_OBJECT(USnapMapDungeonModel,Z_Param_Model);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectNode_Implementation(Z_Param_Model);
		P_NATIVE_END;
	}
	static FName NAME_USnapMapDungeonSelectorLogic_SelectNode = FName(TEXT("SelectNode"));
	bool USnapMapDungeonSelectorLogic::SelectNode(USnapMapDungeonModel* Model)
	{
		SnapMapDungeonSelectorLogic_eventSelectNode_Parms Parms;
		Parms.Model=Model;
		ProcessEvent(FindFunctionChecked(NAME_USnapMapDungeonSelectorLogic_SelectNode),&Parms);
		return !!Parms.ReturnValue;
	}
	void USnapMapDungeonSelectorLogic::StaticRegisterNativesUSnapMapDungeonSelectorLogic()
	{
		UClass* Class = USnapMapDungeonSelectorLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectNode", &USnapMapDungeonSelectorLogic::execSelectNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapMapDungeonSelectorLogic_eventSelectNode_Parms, Model), Z_Construct_UClass_USnapMapDungeonModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SnapMapDungeonSelectorLogic_eventSelectNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnapMapDungeonSelectorLogic_eventSelectNode_Parms), &Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** called when something enters the sphere component */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonSelectorLogic.h" },
		{ "ToolTip", "called when something enters the sphere component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapMapDungeonSelectorLogic, nullptr, "SelectNode", nullptr, nullptr, sizeof(SnapMapDungeonSelectorLogic_eventSelectNode_Parms), Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonSelectorLogic);
	UClass* Z_Construct_UClass_USnapMapDungeonSelectorLogic_NoRegister()
	{
		return USnapMapDungeonSelectorLogic::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonSelectorLogic,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode, "SelectNode" }, // 1972420694
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonSelectorLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonSelectorLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonSelectorLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::ClassParams = {
		&USnapMapDungeonSelectorLogic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapDungeonSelectorLogic()
	{
		if (!Z_Registration_Info_UClass_USnapMapDungeonSelectorLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonSelectorLogic.OuterSingleton, Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapDungeonSelectorLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonSelectorLogic>()
	{
		return USnapMapDungeonSelectorLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonSelectorLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonSelectorLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonSelectorLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonSelectorLogic, USnapMapDungeonSelectorLogic::StaticClass, TEXT("USnapMapDungeonSelectorLogic"), &Z_Registration_Info_UClass_USnapMapDungeonSelectorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonSelectorLogic), 1576292721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonSelectorLogic_h_4106691499(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonSelectorLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonSelectorLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
