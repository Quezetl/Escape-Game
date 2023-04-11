// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/FloorPlan/Volumes/FloorPlanDoorVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlanDoorVolume() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AFloorPlanDoorVolume_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AFloorPlanDoorVolume();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void AFloorPlanDoorVolume::StaticRegisterNativesAFloorPlanDoorVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorPlanDoorVolume);
	UClass* Z_Construct_UClass_AFloorPlanDoorVolume_NoRegister()
	{
		return AFloorPlanDoorVolume::StaticClass();
	}
	struct Z_Construct_UClass_AFloorPlanDoorVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorMarker_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DoorMarker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorPlanDoorVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPlanDoorVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Builders/FloorPlan/Volumes/FloorPlanDoorVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanDoorVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorPlanDoorVolume_Statics::NewProp_DoorMarker_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanDoorVolume.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFloorPlanDoorVolume_Statics::NewProp_DoorMarker = { "DoorMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorPlanDoorVolume, DoorMarker), METADATA_PARAMS(Z_Construct_UClass_AFloorPlanDoorVolume_Statics::NewProp_DoorMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanDoorVolume_Statics::NewProp_DoorMarker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorPlanDoorVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanDoorVolume_Statics::NewProp_DoorMarker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorPlanDoorVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorPlanDoorVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorPlanDoorVolume_Statics::ClassParams = {
		&AFloorPlanDoorVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloorPlanDoorVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanDoorVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorPlanDoorVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanDoorVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorPlanDoorVolume()
	{
		if (!Z_Registration_Info_UClass_AFloorPlanDoorVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorPlanDoorVolume.OuterSingleton, Z_Construct_UClass_AFloorPlanDoorVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorPlanDoorVolume.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<AFloorPlanDoorVolume>()
	{
		return AFloorPlanDoorVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorPlanDoorVolume);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanDoorVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanDoorVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorPlanDoorVolume, AFloorPlanDoorVolume::StaticClass, TEXT("AFloorPlanDoorVolume"), &Z_Registration_Info_UClass_AFloorPlanDoorVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorPlanDoorVolume), 1806377860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanDoorVolume_h_2350926005(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanDoorVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanDoorVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
