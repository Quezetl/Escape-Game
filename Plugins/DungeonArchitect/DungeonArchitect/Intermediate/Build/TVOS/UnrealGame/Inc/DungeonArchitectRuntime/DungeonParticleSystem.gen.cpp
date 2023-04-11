// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonParticleSystem() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonParticleSystem_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonParticleSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void ADungeonParticleSystem::StaticRegisterNativesADungeonParticleSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonParticleSystem);
	UClass* Z_Construct_UClass_ADungeonParticleSystem_NoRegister()
	{
		return ADungeonParticleSystem::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonParticleSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonParticleSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonParticleSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Core/Actors/DungeonParticleSystem.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonParticleSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonParticleSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonParticleSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonParticleSystem_Statics::ClassParams = {
		&ADungeonParticleSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonParticleSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonParticleSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonParticleSystem()
	{
		if (!Z_Registration_Info_UClass_ADungeonParticleSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonParticleSystem.OuterSingleton, Z_Construct_UClass_ADungeonParticleSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonParticleSystem.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonParticleSystem>()
	{
		return ADungeonParticleSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonParticleSystem);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonParticleSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonParticleSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonParticleSystem, ADungeonParticleSystem::StaticClass, TEXT("ADungeonParticleSystem"), &Z_Registration_Info_UClass_ADungeonParticleSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonParticleSystem), 215338412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonParticleSystem_h_1224310469(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonParticleSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonParticleSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
