// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Volumes/DungeonVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonVolume() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
// End Cross Module References
	void ADungeonVolume::StaticRegisterNativesADungeonVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonVolume);
	UClass* Z_Construct_UClass_ADungeonVolume_NoRegister()
	{
		return ADungeonVolume::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dungeon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeUpdate_MetaData[];
#endif
		static void NewProp_RealtimeUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RealtimeUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Core/Volumes/DungeonVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonVolume_Statics::NewProp_Dungeon_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonVolume_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonVolume, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonVolume_Statics::NewProp_Dungeon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVolume_Statics::NewProp_Dungeon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonVolume.h" },
	};
#endif
	void Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate_SetBit(void* Obj)
	{
		((ADungeonVolume*)Obj)->RealtimeUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate = { "RealtimeUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADungeonVolume), &Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVolume_Statics::NewProp_Dungeon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonVolume_Statics::NewProp_RealtimeUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonVolume_Statics::ClassParams = {
		&ADungeonVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADungeonVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVolume_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonVolume()
	{
		if (!Z_Registration_Info_UClass_ADungeonVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonVolume.OuterSingleton, Z_Construct_UClass_ADungeonVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonVolume.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonVolume>()
	{
		return ADungeonVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonVolume);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonVolume, ADungeonVolume::StaticClass, TEXT("ADungeonVolume"), &Z_Registration_Info_UClass_ADungeonVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonVolume), 2836607509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonVolume_h_4099011527(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
