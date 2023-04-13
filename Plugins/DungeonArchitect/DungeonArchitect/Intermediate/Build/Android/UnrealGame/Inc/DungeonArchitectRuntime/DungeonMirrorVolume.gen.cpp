// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Volumes/DungeonMirrorVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMirrorVolume() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMirrorVolume_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonMirrorVolume();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void ADungeonMirrorVolume::StaticRegisterNativesADungeonMirrorVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonMirrorVolume);
	UClass* Z_Construct_UClass_ADungeonMirrorVolume_NoRegister()
	{
		return ADungeonMirrorVolume::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonMirrorVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonMirrorVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonMirrorVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Core/Volumes/DungeonMirrorVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonMirrorVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonMirrorVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonMirrorVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonMirrorVolume_Statics::ClassParams = {
		&ADungeonMirrorVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADungeonMirrorVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonMirrorVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonMirrorVolume()
	{
		if (!Z_Registration_Info_UClass_ADungeonMirrorVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonMirrorVolume.OuterSingleton, Z_Construct_UClass_ADungeonMirrorVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonMirrorVolume.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonMirrorVolume>()
	{
		return ADungeonMirrorVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonMirrorVolume);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMirrorVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMirrorVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonMirrorVolume, ADungeonMirrorVolume::StaticClass, TEXT("ADungeonMirrorVolume"), &Z_Registration_Info_UClass_ADungeonMirrorVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonMirrorVolume), 3246368446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMirrorVolume_h_4152216226(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMirrorVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonMirrorVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
