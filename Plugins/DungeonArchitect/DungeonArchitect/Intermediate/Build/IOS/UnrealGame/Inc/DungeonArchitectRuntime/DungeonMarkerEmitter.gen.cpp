// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMarkerEmitter() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMarkerEmitter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDungeonMarkerEmitter::execEmitMarkers)
	{
		P_GET_OBJECT(UDungeonBuilder,Z_Param_Builder);
		P_GET_OBJECT(UDungeonModel,Z_Param_Model);
		P_GET_OBJECT(UDungeonConfig,Z_Param_Config);
		P_GET_OBJECT(UDungeonQuery,Z_Param_Query);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmitMarkers_Implementation(Z_Param_Builder,Z_Param_Model,Z_Param_Config,Z_Param_Query);
		P_NATIVE_END;
	}
	static FName NAME_UDungeonMarkerEmitter_EmitMarkers = FName(TEXT("EmitMarkers"));
	void UDungeonMarkerEmitter::EmitMarkers(UDungeonBuilder* Builder, UDungeonModel* Model, UDungeonConfig* Config, UDungeonQuery* Query)
	{
		DungeonMarkerEmitter_eventEmitMarkers_Parms Parms;
		Parms.Builder=Builder;
		Parms.Model=Model;
		Parms.Config=Config;
		Parms.Query=Query;
		ProcessEvent(FindFunctionChecked(NAME_UDungeonMarkerEmitter_EmitMarkers),&Parms);
	}
	void UDungeonMarkerEmitter::StaticRegisterNativesUDungeonMarkerEmitter()
	{
		UClass* Class = UDungeonMarkerEmitter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EmitMarkers", &UDungeonMarkerEmitter::execEmitMarkers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMarkerEmitter_eventEmitMarkers_Parms, Builder), Z_Construct_UClass_UDungeonBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMarkerEmitter_eventEmitMarkers_Parms, Model), Z_Construct_UClass_UDungeonModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMarkerEmitter_eventEmitMarkers_Parms, Config), Z_Construct_UClass_UDungeonConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DungeonMarkerEmitter_eventEmitMarkers_Parms, Query), Z_Construct_UClass_UDungeonQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Builder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Called by the theming engine to emit markers */" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h" },
		{ "ToolTip", "Called by the theming engine to emit markers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonMarkerEmitter, nullptr, "EmitMarkers", nullptr, nullptr, sizeof(DungeonMarkerEmitter_eventEmitMarkers_Parms), Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonMarkerEmitter);
	UClass* Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister()
	{
		return UDungeonMarkerEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonMarkerEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonMarkerEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDungeonMarkerEmitter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonMarkerEmitter_EmitMarkers, "EmitMarkers" }, // 3413670228
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonMarkerEmitter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Implement this class in blueprint (or C++) to emit your own custom markers in the scene\n*/" },
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/DungeonMarkerEmitter.h" },
		{ "ToolTip", "Implement this class in blueprint (or C++) to emit your own custom markers in the scene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonMarkerEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonMarkerEmitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonMarkerEmitter_Statics::ClassParams = {
		&UDungeonMarkerEmitter::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonMarkerEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMarkerEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonMarkerEmitter()
	{
		if (!Z_Registration_Info_UClass_UDungeonMarkerEmitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonMarkerEmitter.OuterSingleton, Z_Construct_UClass_UDungeonMarkerEmitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonMarkerEmitter.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonMarkerEmitter>()
	{
		return UDungeonMarkerEmitter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonMarkerEmitter);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonMarkerEmitter, UDungeonMarkerEmitter::StaticClass, TEXT("UDungeonMarkerEmitter"), &Z_Registration_Info_UClass_UDungeonMarkerEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonMarkerEmitter), 2805157907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_3551979491(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_DungeonMarkerEmitter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
