// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonConfig() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UDungeonConfig::StaticRegisterNativesUDungeonConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonConfig);
	UClass* Z_Construct_UClass_UDungeonConfig_NoRegister()
	{
		return UDungeonConfig::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instanced_MetaData[];
#endif
		static void NewProp_Instanced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Instanced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBuildTimePerFrameMs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBuildTimePerFrameMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/DungeonConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** \n      Changing this number would completely change the layout of the dungeon. \n      This is the base random number seed that is used to build the dungeon \n    */" },
		{ "ModuleRelativePath", "Public/Core/DungeonConfig.h" },
		{ "ToolTip", "Changing this number would completely change the layout of the dungeon.\nThis is the base random number seed that is used to build the dungeon" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonConfig, Seed), METADATA_PARAMS(Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    Generate the dungeon with instanced meshes to improve performance\n    */" },
		{ "ModuleRelativePath", "Public/Core/DungeonConfig.h" },
		{ "ToolTip", "Generate the dungeon with instanced meshes to improve performance" },
	};
#endif
	void Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced_SetBit(void* Obj)
	{
		((UDungeonConfig*)Obj)->Instanced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced = { "Instanced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDungeonConfig), &Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonConfig_Statics::NewProp_MaxBuildTimePerFrameMs_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    The dungeon is built asynchronously over multiple frames if this value is > 0.\n    If value is 0, the entire dungeon is built in a single frame (might face lag)\n    Set it to a value in milli seconds (e.g. 16-33) to have it built over multiple frames,\n    while maintaining a smooth frame rate\n    */" },
		{ "ModuleRelativePath", "Public/Core/DungeonConfig.h" },
		{ "ToolTip", "The dungeon is built asynchronously over multiple frames if this value is > 0.\nIf value is 0, the entire dungeon is built in a single frame (might face lag)\nSet it to a value in milli seconds (e.g. 16-33) to have it built over multiple frames,\nwhile maintaining a smooth frame rate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonConfig_Statics::NewProp_MaxBuildTimePerFrameMs = { "MaxBuildTimePerFrameMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonConfig, MaxBuildTimePerFrameMs), METADATA_PARAMS(Z_Construct_UClass_UDungeonConfig_Statics::NewProp_MaxBuildTimePerFrameMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfig_Statics::NewProp_MaxBuildTimePerFrameMs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonConfig_Statics::NewProp_Instanced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonConfig_Statics::NewProp_MaxBuildTimePerFrameMs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonConfig_Statics::ClassParams = {
		&UDungeonConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonConfig()
	{
		if (!Z_Registration_Info_UClass_UDungeonConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonConfig.OuterSingleton, Z_Construct_UClass_UDungeonConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonConfig.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonConfig>()
	{
		return UDungeonConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonConfig);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonConfig, UDungeonConfig::StaticClass, TEXT("UDungeonConfig"), &Z_Registration_Info_UClass_UDungeonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonConfig), 2971444196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonConfig_h_3626881400(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
