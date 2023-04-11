// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacDungeonBuilder() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonBuilder();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UIsaacDungeonBuilder::StaticRegisterNativesUIsaacDungeonBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacDungeonBuilder);
	UClass* Z_Construct_UClass_UIsaacDungeonBuilder_NoRegister()
	{
		return UIsaacDungeonBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UIsaacDungeonBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsaacDungeonBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Builders/Isaac/IsaacDungeonBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsaacDungeonBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacDungeonBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacDungeonBuilder_Statics::ClassParams = {
		&UIsaacDungeonBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsaacDungeonBuilder()
	{
		if (!Z_Registration_Info_UClass_UIsaacDungeonBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacDungeonBuilder.OuterSingleton, Z_Construct_UClass_UIsaacDungeonBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsaacDungeonBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacDungeonBuilder>()
	{
		return UIsaacDungeonBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacDungeonBuilder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacDungeonBuilder, UIsaacDungeonBuilder::StaticClass, TEXT("UIsaacDungeonBuilder"), &Z_Registration_Info_UClass_UIsaacDungeonBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacDungeonBuilder), 1556468518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonBuilder_h_1767438256(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
