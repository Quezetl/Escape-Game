// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/SnapConnection/SnapConnectionAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionAssetFactory() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapConnectionAssetFactory_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapConnectionAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void USnapConnectionAssetFactory::StaticRegisterNativesUSnapConnectionAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapConnectionAssetFactory);
	UClass* Z_Construct_UClass_USnapConnectionAssetFactory_NoRegister()
	{
		return USnapConnectionAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USnapConnectionAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapConnectionAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapConnectionAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Assets/SnapConnection/SnapConnectionAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/SnapConnection/SnapConnectionAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapConnectionAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapConnectionAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapConnectionAssetFactory_Statics::ClassParams = {
		&USnapConnectionAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USnapConnectionAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapConnectionAssetFactory()
	{
		if (!Z_Registration_Info_UClass_USnapConnectionAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapConnectionAssetFactory.OuterSingleton, Z_Construct_UClass_USnapConnectionAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapConnectionAssetFactory.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapConnectionAssetFactory>()
	{
		return USnapConnectionAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapConnectionAssetFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapConnectionAssetFactory, USnapConnectionAssetFactory::StaticClass, TEXT("USnapConnectionAssetFactory"), &Z_Registration_Info_UClass_USnapConnectionAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapConnectionAssetFactory), 3047495970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionAssetFactory_h_3344951011(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapConnection_SnapConnectionAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
