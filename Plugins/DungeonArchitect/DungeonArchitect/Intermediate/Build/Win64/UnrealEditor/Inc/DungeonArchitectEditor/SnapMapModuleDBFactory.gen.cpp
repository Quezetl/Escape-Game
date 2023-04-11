// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/SnapMap/ModuleDatabase/SnapMapModuleDBFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapModuleDBFactory() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapModuleDBFactory_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapModuleDBFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void USnapMapModuleDBFactory::StaticRegisterNativesUSnapMapModuleDBFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapModuleDBFactory);
	UClass* Z_Construct_UClass_USnapMapModuleDBFactory_NoRegister()
	{
		return USnapMapModuleDBFactory::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapModuleDBFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapModuleDBFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapModuleDBFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Assets/SnapMap/ModuleDatabase/SnapMapModuleDBFactory.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/SnapMap/ModuleDatabase/SnapMapModuleDBFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapModuleDBFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapModuleDBFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapModuleDBFactory_Statics::ClassParams = {
		&USnapMapModuleDBFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USnapMapModuleDBFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapModuleDBFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapModuleDBFactory()
	{
		if (!Z_Registration_Info_UClass_USnapMapModuleDBFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapModuleDBFactory.OuterSingleton, Z_Construct_UClass_USnapMapModuleDBFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapModuleDBFactory.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapModuleDBFactory>()
	{
		return USnapMapModuleDBFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapModuleDBFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_ModuleDatabase_SnapMapModuleDBFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_ModuleDatabase_SnapMapModuleDBFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapModuleDBFactory, USnapMapModuleDBFactory::StaticClass, TEXT("USnapMapModuleDBFactory"), &Z_Registration_Info_UClass_USnapMapModuleDBFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapModuleDBFactory), 291888926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_ModuleDatabase_SnapMapModuleDBFactory_h_2736531477(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_ModuleDatabase_SnapMapModuleDBFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_ModuleDatabase_SnapMapModuleDBFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
