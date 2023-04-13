// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/FloorPlan/FloorPlanBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlanBuilder() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFloorPlanBuilder();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UFloorPlanBuilder::StaticRegisterNativesUFloorPlanBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorPlanBuilder);
	UClass* Z_Construct_UClass_UFloorPlanBuilder_NoRegister()
	{
		return UFloorPlanBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UFloorPlanBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorPlanBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorPlanBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Builders/FloorPlan/FloorPlanBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/FloorPlanBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorPlanBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorPlanBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorPlanBuilder_Statics::ClassParams = {
		&UFloorPlanBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFloorPlanBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorPlanBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorPlanBuilder()
	{
		if (!Z_Registration_Info_UClass_UFloorPlanBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorPlanBuilder.OuterSingleton, Z_Construct_UClass_UFloorPlanBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorPlanBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFloorPlanBuilder>()
	{
		return UFloorPlanBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorPlanBuilder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorPlanBuilder, UFloorPlanBuilder::StaticClass, TEXT("UFloorPlanBuilder"), &Z_Registration_Info_UClass_UFloorPlanBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorPlanBuilder), 811627154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanBuilder_h_3701133134(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_FloorPlanBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
