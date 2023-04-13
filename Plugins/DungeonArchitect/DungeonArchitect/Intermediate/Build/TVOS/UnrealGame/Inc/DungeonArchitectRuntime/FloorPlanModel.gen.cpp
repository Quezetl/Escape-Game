// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/FloorPlan/FloorPlanModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlanModel() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanModel();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UFloorPlanModel::StaticRegisterNativesUFloorPlanModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorPlanModel);
	UClass* Z_Construct_UClass_UFloorPlanModel_NoRegister()
	{
		return UFloorPlanModel::StaticClass();
	}
	struct Z_Construct_UClass_UFloorPlanModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorPlanModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonModel,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Floor plan model */" },
		{ "IncludePath", "Builders/FloorPlan/FloorPlanModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanModel.h" },
		{ "ToolTip", "Floor plan model" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorPlanModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorPlanModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorPlanModel_Statics::ClassParams = {
		&UFloorPlanModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFloorPlanModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorPlanModel()
	{
		if (!Z_Registration_Info_UClass_UFloorPlanModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorPlanModel.OuterSingleton, Z_Construct_UClass_UFloorPlanModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorPlanModel.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFloorPlanModel>()
	{
		return UFloorPlanModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorPlanModel);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorPlanModel, UFloorPlanModel::StaticClass, TEXT("UFloorPlanModel"), &Z_Registration_Info_UClass_UFloorPlanModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorPlanModel), 3832575414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanModel_h_3883700581(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
