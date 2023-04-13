// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/GridFlow/GridFlowSelectorLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowSelectorLogic() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowSelectorLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowSelectorLogic();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowQuery_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UGridFlowSelectorLogic::execSelectNode)
	{
		P_GET_OBJECT(UGridFlowModel,Z_Param_Model);
		P_GET_OBJECT(UGridFlowConfig,Z_Param_Config);
		P_GET_OBJECT(UGridFlowBuilder,Z_Param_Builder);
		P_GET_OBJECT(UGridFlowQuery,Z_Param_Query);
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_TileY);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_MarkerTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectNode_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Builder,Z_Param_Query,Z_Param_Out_RandomStream,Z_Param_TileX,Z_Param_TileY,Z_Param_Out_MarkerTransform);
		P_NATIVE_END;
	}
	static FName NAME_UGridFlowSelectorLogic_SelectNode = FName(TEXT("SelectNode"));
	bool UGridFlowSelectorLogic::SelectNode(UGridFlowModel* Model, UGridFlowConfig* Config, UGridFlowBuilder* Builder, UGridFlowQuery* Query, FRandomStream const& RandomStream, int32 TileX, int32 TileY, FTransform const& MarkerTransform)
	{
		GridFlowSelectorLogic_eventSelectNode_Parms Parms;
		Parms.Model=Model;
		Parms.Config=Config;
		Parms.Builder=Builder;
		Parms.Query=Query;
		Parms.RandomStream=RandomStream;
		Parms.TileX=TileX;
		Parms.TileY=TileY;
		Parms.MarkerTransform=MarkerTransform;
		ProcessEvent(FindFunctionChecked(NAME_UGridFlowSelectorLogic_SelectNode),&Parms);
		return !!Parms.ReturnValue;
	}
	void UGridFlowSelectorLogic::StaticRegisterNativesUGridFlowSelectorLogic()
	{
		UClass* Class = UGridFlowSelectorLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectNode", &UGridFlowSelectorLogic::execSelectNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowSelectorLogic_eventSelectNode_Parms, Model), Z_Construct_UClass_UGridFlowModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowSelectorLogic_eventSelectNode_Parms, Config), Z_Construct_UClass_UGridFlowConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowSelectorLogic_eventSelectNode_Parms, Builder), Z_Construct_UClass_UGridFlowBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowSelectorLogic_eventSelectNode_Parms, Query), Z_Construct_UClass_UGridFlowQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowSelectorLogic_eventSelectNode_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowSelectorLogic_eventSelectNode_Parms, TileX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowSelectorLogic_eventSelectNode_Parms, TileY), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform = { "MarkerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridFlowSelectorLogic_eventSelectNode_Parms, MarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform_MetaData)) };
	void Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridFlowSelectorLogic_eventSelectNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridFlowSelectorLogic_eventSelectNode_Parms), &Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_Builder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_TileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_TileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowSelectorLogic.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFlowSelectorLogic, nullptr, "SelectNode", nullptr, nullptr, sizeof(GridFlowSelectorLogic_eventSelectNode_Parms), Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowSelectorLogic);
	UClass* Z_Construct_UClass_UGridFlowSelectorLogic_NoRegister()
	{
		return UGridFlowSelectorLogic::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowSelectorLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowSelectorLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonSelectorLogic,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridFlowSelectorLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridFlowSelectorLogic_SelectNode, "SelectNode" }, // 581626191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowSelectorLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/GridFlow/GridFlowSelectorLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowSelectorLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowSelectorLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowSelectorLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowSelectorLogic_Statics::ClassParams = {
		&UGridFlowSelectorLogic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowSelectorLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowSelectorLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowSelectorLogic()
	{
		if (!Z_Registration_Info_UClass_UGridFlowSelectorLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowSelectorLogic.OuterSingleton, Z_Construct_UClass_UGridFlowSelectorLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowSelectorLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowSelectorLogic>()
	{
		return UGridFlowSelectorLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowSelectorLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowSelectorLogic, UGridFlowSelectorLogic::StaticClass, TEXT("UGridFlowSelectorLogic"), &Z_Registration_Info_UClass_UGridFlowSelectorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowSelectorLogic), 1447132823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_55220178(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowSelectorLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
