// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonQuery() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonQuery_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonQuery();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void USnapMapDungeonQuery::StaticRegisterNativesUSnapMapDungeonQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonQuery);
	UClass* Z_Construct_UClass_USnapMapDungeonQuery_NoRegister()
	{
		return USnapMapDungeonQuery::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapDungeonQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapDungeonQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapDungeonQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapDungeonQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonQuery_Statics::ClassParams = {
		&USnapMapDungeonQuery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USnapMapDungeonQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapDungeonQuery()
	{
		if (!Z_Registration_Info_UClass_USnapMapDungeonQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonQuery.OuterSingleton, Z_Construct_UClass_USnapMapDungeonQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapDungeonQuery.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonQuery>()
	{
		return USnapMapDungeonQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonQuery);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonQuery, USnapMapDungeonQuery::StaticClass, TEXT("USnapMapDungeonQuery"), &Z_Registration_Info_UClass_USnapMapDungeonQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonQuery), 2370855724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonQuery_h_2164659080(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
