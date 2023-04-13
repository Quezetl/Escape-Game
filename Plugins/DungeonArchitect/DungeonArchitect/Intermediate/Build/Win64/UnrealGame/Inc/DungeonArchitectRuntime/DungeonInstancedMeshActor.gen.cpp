// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonInstancedMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonInstancedMeshActor() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonInstancedMeshActor_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonInstancedMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void ADungeonInstancedMeshActor::StaticRegisterNativesADungeonInstancedMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonInstancedMeshActor);
	UClass* Z_Construct_UClass_ADungeonInstancedMeshActor_NoRegister()
	{
		return ADungeonInstancedMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonInstancedMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Core/Actors/DungeonInstancedMeshActor.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonInstancedMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonInstancedMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::ClassParams = {
		&ADungeonInstancedMeshActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonInstancedMeshActor()
	{
		if (!Z_Registration_Info_UClass_ADungeonInstancedMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonInstancedMeshActor.OuterSingleton, Z_Construct_UClass_ADungeonInstancedMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonInstancedMeshActor.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonInstancedMeshActor>()
	{
		return ADungeonInstancedMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonInstancedMeshActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonInstancedMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonInstancedMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonInstancedMeshActor, ADungeonInstancedMeshActor::StaticClass, TEXT("ADungeonInstancedMeshActor"), &Z_Registration_Info_UClass_ADungeonInstancedMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonInstancedMeshActor), 2683150100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonInstancedMeshActor_h_2225178824(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonInstancedMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonInstancedMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
