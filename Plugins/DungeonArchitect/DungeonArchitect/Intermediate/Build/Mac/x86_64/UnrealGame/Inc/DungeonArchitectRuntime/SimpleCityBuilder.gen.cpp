// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityBuilder() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityBuilder_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityBuilder();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void USimpleCityBuilder::StaticRegisterNativesUSimpleCityBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityBuilder);
	UClass* Z_Construct_UClass_USimpleCityBuilder_NoRegister()
	{
		return USimpleCityBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USimpleCityBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleCityBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Builders/SimpleCity/SimpleCityBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleCityBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityBuilder_Statics::ClassParams = {
		&USimpleCityBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleCityBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleCityBuilder()
	{
		if (!Z_Registration_Info_UClass_USimpleCityBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityBuilder.OuterSingleton, Z_Construct_UClass_USimpleCityBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleCityBuilder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityBuilder>()
	{
		return USimpleCityBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityBuilder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityBuilder, USimpleCityBuilder::StaticClass, TEXT("USimpleCityBuilder"), &Z_Registration_Info_UClass_USimpleCityBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityBuilder), 1474253648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityBuilder_h_2667632920(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
