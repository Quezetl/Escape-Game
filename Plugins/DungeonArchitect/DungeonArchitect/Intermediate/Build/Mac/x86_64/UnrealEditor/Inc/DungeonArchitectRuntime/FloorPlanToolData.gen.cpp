// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/FloorPlan/FloorPlanToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlanToolData() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanToolData_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanToolData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonToolData();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UFloorPlanToolData::StaticRegisterNativesUFloorPlanToolData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorPlanToolData);
	UClass* Z_Construct_UClass_UFloorPlanToolData_NoRegister()
	{
		return UFloorPlanToolData::StaticClass();
	}
	struct Z_Construct_UClass_UFloorPlanToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorPlanToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanToolData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/FloorPlan/FloorPlanToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanToolData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorPlanToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorPlanToolData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorPlanToolData_Statics::ClassParams = {
		&UFloorPlanToolData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloorPlanToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorPlanToolData()
	{
		if (!Z_Registration_Info_UClass_UFloorPlanToolData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorPlanToolData.OuterSingleton, Z_Construct_UClass_UFloorPlanToolData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorPlanToolData.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFloorPlanToolData>()
	{
		return UFloorPlanToolData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorPlanToolData);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanToolData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanToolData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorPlanToolData, UFloorPlanToolData::StaticClass, TEXT("UFloorPlanToolData"), &Z_Registration_Info_UClass_UFloorPlanToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorPlanToolData), 2548784576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanToolData_h_3383267546(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanToolData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
