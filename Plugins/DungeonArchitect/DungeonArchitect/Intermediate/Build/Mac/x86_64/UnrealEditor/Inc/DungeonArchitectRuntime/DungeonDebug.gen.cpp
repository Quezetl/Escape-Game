// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/Debug/DungeonDebug.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonDebug() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonDebug_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonDebug();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ADungeonDebug::StaticRegisterNativesADungeonDebug()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonDebug);
	UClass* Z_Construct_UClass_ADungeonDebug_NoRegister()
	{
		return ADungeonDebug::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloneTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloneTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonDebug_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Rendering Input Actor Misc" },
		{ "IncludePath", "Core/Utils/Debug/DungeonDebug.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonDebug_Statics::NewProp_CloneTemplate_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Core/Utils/Debug/DungeonDebug.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonDebug_Statics::NewProp_CloneTemplate = { "CloneTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADungeonDebug, CloneTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonDebug_Statics::NewProp_CloneTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDebug_Statics::NewProp_CloneTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonDebug_Statics::NewProp_CloneTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonDebug>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonDebug_Statics::ClassParams = {
		&ADungeonDebug::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADungeonDebug_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDebug_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonDebug()
	{
		if (!Z_Registration_Info_UClass_ADungeonDebug.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonDebug.OuterSingleton, Z_Construct_UClass_ADungeonDebug_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonDebug.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonDebug>()
	{
		return ADungeonDebug::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonDebug);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_DungeonDebug_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_DungeonDebug_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonDebug, ADungeonDebug::StaticClass, TEXT("ADungeonDebug"), &Z_Registration_Info_UClass_ADungeonDebug, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonDebug), 2741957105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_DungeonDebug_h_3936604215(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_DungeonDebug_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Debug_DungeonDebug_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
