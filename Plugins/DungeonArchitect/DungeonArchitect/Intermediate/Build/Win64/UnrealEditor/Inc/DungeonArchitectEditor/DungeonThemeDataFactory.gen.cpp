// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/Theme/DungeonThemeDataFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonThemeDataFactory() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonThemeDataFactory_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonThemeDataFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UDungeonThemeDataFactory::StaticRegisterNativesUDungeonThemeDataFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonThemeDataFactory);
	UClass* Z_Construct_UClass_UDungeonThemeDataFactory_NoRegister()
	{
		return UDungeonThemeDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonThemeDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonThemeDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonThemeDataFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Assets/Theme/DungeonThemeDataFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/Theme/DungeonThemeDataFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonThemeDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonThemeDataFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonThemeDataFactory_Statics::ClassParams = {
		&UDungeonThemeDataFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDungeonThemeDataFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonThemeDataFactory()
	{
		if (!Z_Registration_Info_UClass_UDungeonThemeDataFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonThemeDataFactory.OuterSingleton, Z_Construct_UClass_UDungeonThemeDataFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonThemeDataFactory.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonThemeDataFactory>()
	{
		return UDungeonThemeDataFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonThemeDataFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Theme_DungeonThemeDataFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Theme_DungeonThemeDataFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonThemeDataFactory, UDungeonThemeDataFactory::StaticClass, TEXT("UDungeonThemeDataFactory"), &Z_Registration_Info_UClass_UDungeonThemeDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonThemeDataFactory), 41463481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Theme_DungeonThemeDataFactory_h_1077715315(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Theme_DungeonThemeDataFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Theme_DungeonThemeDataFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
