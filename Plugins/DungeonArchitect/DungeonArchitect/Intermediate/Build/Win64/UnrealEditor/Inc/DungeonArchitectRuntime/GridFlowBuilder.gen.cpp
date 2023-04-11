// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/GridFlow/GridFlowBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowBuilder() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowBuilder();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UGridFlowBuilder::StaticRegisterNativesUGridFlowBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowBuilder);
	UClass* Z_Construct_UClass_UGridFlowBuilder_NoRegister()
	{
		return UGridFlowBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UGridFlowBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFlowBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFlowBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/GridFlow/GridFlowBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFlowBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowBuilder_Statics::ClassParams = {
		&UGridFlowBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGridFlowBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridFlowBuilder()
	{
		if (!Z_Registration_Info_UClass_UGridFlowBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowBuilder.OuterSingleton, Z_Construct_UClass_UGridFlowBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFlowBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowBuilder>()
	{
		return UGridFlowBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowBuilder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowBuilder, UGridFlowBuilder::StaticClass, TEXT("UGridFlowBuilder"), &Z_Registration_Info_UClass_UGridFlowBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowBuilder), 1870384753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowBuilder_h_3616375972(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
