// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/LevelStreaming/DungeonLevelStreamingNavigation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonLevelStreamingNavigation() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingNavigation_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLevelStreamingNavigation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UDungeonLevelStreamingNavigation::StaticRegisterNativesUDungeonLevelStreamingNavigation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonLevelStreamingNavigation);
	UClass* Z_Construct_UClass_UDungeonLevelStreamingNavigation_NoRegister()
	{
		return UDungeonLevelStreamingNavigation::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoResizeNavVolume_MetaData[];
#endif
		static void NewProp_bAutoResizeNavVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoResizeNavVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/LevelStreaming/DungeonLevelStreamingNavigation.h" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingNavigation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingNavigation.h" },
	};
#endif
	void Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UDungeonLevelStreamingNavigation*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDungeonLevelStreamingNavigation), &Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bAutoResizeNavVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/DungeonLevelStreamingNavigation.h" },
	};
#endif
	void Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bAutoResizeNavVolume_SetBit(void* Obj)
	{
		((UDungeonLevelStreamingNavigation*)Obj)->bAutoResizeNavVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bAutoResizeNavVolume = { "bAutoResizeNavVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDungeonLevelStreamingNavigation), &Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bAutoResizeNavVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bAutoResizeNavVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bAutoResizeNavVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::NewProp_bAutoResizeNavVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonLevelStreamingNavigation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::ClassParams = {
		&UDungeonLevelStreamingNavigation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonLevelStreamingNavigation()
	{
		if (!Z_Registration_Info_UClass_UDungeonLevelStreamingNavigation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonLevelStreamingNavigation.OuterSingleton, Z_Construct_UClass_UDungeonLevelStreamingNavigation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonLevelStreamingNavigation.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonLevelStreamingNavigation>()
	{
		return UDungeonLevelStreamingNavigation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonLevelStreamingNavigation);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingNavigation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingNavigation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonLevelStreamingNavigation, UDungeonLevelStreamingNavigation::StaticClass, TEXT("UDungeonLevelStreamingNavigation"), &Z_Registration_Info_UClass_UDungeonLevelStreamingNavigation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonLevelStreamingNavigation), 367173437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingNavigation_h_3331105045(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingNavigation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingNavigation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
