// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/Volumes/GridDungeonPlatformVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonPlatformVolume() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AGridDungeonPlatformVolume_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AGridDungeonPlatformVolume();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_FCellType();
// End Cross Module References
	void AGridDungeonPlatformVolume::StaticRegisterNativesAGridDungeonPlatformVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridDungeonPlatformVolume);
	UClass* Z_Construct_UClass_AGridDungeonPlatformVolume_NoRegister()
	{
		return AGridDungeonPlatformVolume::StaticClass();
	}
	struct Z_Construct_UClass_AGridDungeonPlatformVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Builders/Grid/Volumes/GridDungeonPlatformVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/Volumes/GridDungeonPlatformVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/Volumes/GridDungeonPlatformVolume.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridDungeonPlatformVolume, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_FCellType, METADATA_PARAMS(Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType_MetaData)) }; // 1492273055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridDungeonPlatformVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::ClassParams = {
		&AGridDungeonPlatformVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridDungeonPlatformVolume()
	{
		if (!Z_Registration_Info_UClass_AGridDungeonPlatformVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridDungeonPlatformVolume.OuterSingleton, Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridDungeonPlatformVolume.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<AGridDungeonPlatformVolume>()
	{
		return AGridDungeonPlatformVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridDungeonPlatformVolume);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Volumes_GridDungeonPlatformVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Volumes_GridDungeonPlatformVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridDungeonPlatformVolume, AGridDungeonPlatformVolume::StaticClass, TEXT("AGridDungeonPlatformVolume"), &Z_Registration_Info_UClass_AGridDungeonPlatformVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridDungeonPlatformVolume), 861385249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Volumes_GridDungeonPlatformVolume_h_2281499234(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Volumes_GridDungeonPlatformVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Volumes_GridDungeonPlatformVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
