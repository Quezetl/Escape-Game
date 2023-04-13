// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonBuilder() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAMarkerInfo();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonBuilder::execGetMarkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDAMarkerInfo>*)Z_Param__Result=P_THIS->GetMarkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBuilder::execEmitMarker)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SocketType);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmitMarker(Z_Param_SocketType,Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDungeonBuilder::execEmitDungeonMarkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmitDungeonMarkers_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UDungeonBuilder_EmitDungeonMarkers = FName(TEXT("EmitDungeonMarkers"));
	void UDungeonBuilder::EmitDungeonMarkers()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDungeonBuilder_EmitDungeonMarkers),NULL);
	}
	void UDungeonBuilder::StaticRegisterNativesUDungeonBuilder()
	{
		UClass* Class = UDungeonBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EmitDungeonMarkers", &UDungeonBuilder::execEmitDungeonMarkers },
			{ "EmitMarker", &UDungeonBuilder::execEmitMarker },
			{ "GetMarkers", &UDungeonBuilder::execGetMarkers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuilder, nullptr, "EmitDungeonMarkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics
	{
		struct DungeonBuilder_eventEmitMarker_Parms
		{
			FString SocketType;
			FTransform Transform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SocketType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_SocketType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_SocketType = { "SocketType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBuilder_eventEmitMarker_Parms, SocketType), METADATA_PARAMS(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_SocketType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_SocketType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBuilder_eventEmitMarker_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_SocketType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuilder, nullptr, "EmitMarker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::DungeonBuilder_eventEmitMarker_Parms), Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonBuilder_EmitMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuilder_EmitMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics
	{
		struct DungeonBuilder_eventGetMarkers_Parms
		{
			TArray<FDAMarkerInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDAMarkerInfo, METADATA_PARAMS(nullptr, 0) }; // 1351477826
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonBuilder_eventGetMarkers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1351477826
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuilder, nullptr, "GetMarkers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::DungeonBuilder_eventGetMarkers_Parms), Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonBuilder_GetMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuilder_GetMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonBuilder);
	UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister()
	{
		return UDungeonBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dungeon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_query_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_query;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonBuilder_EmitDungeonMarkers, "EmitDungeonMarkers" }, // 3761467414
		{ &Z_Construct_UFunction_UDungeonBuilder_EmitMarker, "EmitMarker" }, // 1745365945
		{ &Z_Construct_UFunction_UDungeonBuilder_GetMarkers, "GetMarkers" }, // 3617767300
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonBuilder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Core/DungeonBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonBuilder, config), Z_Construct_UClass_UDungeonConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_config_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_Dungeon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonBuilder, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_Dungeon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_Dungeon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_model_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonBuilder, model), Z_Construct_UClass_UDungeonModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_model_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_query_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonBuilder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_query = { "query", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonBuilder, query), Z_Construct_UClass_UDungeonQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_query_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_query_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_Dungeon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuilder_Statics::NewProp_query,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonBuilder_Statics::ClassParams = {
		&UDungeonBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDungeonBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonBuilder()
	{
		if (!Z_Registration_Info_UClass_UDungeonBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonBuilder.OuterSingleton, Z_Construct_UClass_UDungeonBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonBuilder>()
	{
		return UDungeonBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonBuilder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonBuilder, UDungeonBuilder::StaticClass, TEXT("UDungeonBuilder"), &Z_Registration_Info_UClass_UDungeonBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonBuilder), 3737302771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonBuilder_h_402247780(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
