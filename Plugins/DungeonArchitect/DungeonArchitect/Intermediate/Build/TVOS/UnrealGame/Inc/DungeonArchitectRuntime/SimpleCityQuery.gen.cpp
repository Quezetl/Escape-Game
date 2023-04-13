// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityQuery() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityQuery_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityQuery();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void USimpleCityQuery::StaticRegisterNativesUSimpleCityQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityQuery);
	UClass* Z_Construct_UClass_USimpleCityQuery_NoRegister()
	{
		return USimpleCityQuery::StaticClass();
	}
	struct Z_Construct_UClass_USimpleCityQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleCityQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCityQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/SimpleCity/SimpleCityQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleCityQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityQuery_Statics::ClassParams = {
		&USimpleCityQuery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleCityQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleCityQuery()
	{
		if (!Z_Registration_Info_UClass_USimpleCityQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityQuery.OuterSingleton, Z_Construct_UClass_USimpleCityQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleCityQuery.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityQuery>()
	{
		return USimpleCityQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityQuery);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityQuery, USimpleCityQuery::StaticClass, TEXT("USimpleCityQuery"), &Z_Registration_Info_UClass_USimpleCityQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityQuery), 1464414550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityQuery_h_2039074271(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
