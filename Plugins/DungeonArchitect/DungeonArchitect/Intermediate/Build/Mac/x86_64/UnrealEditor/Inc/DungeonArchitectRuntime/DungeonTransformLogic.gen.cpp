// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/Rules/DungeonTransformLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonTransformLogic() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UDungeonTransformLogic::StaticRegisterNativesUDungeonTransformLogic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonTransformLogic);
	UClass* Z_Construct_UClass_UDungeonTransformLogic_NoRegister()
	{
		return UDungeonTransformLogic::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonTransformLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonTransformLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonTransformLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Frameworks/ThemeEngine/Rules/DungeonTransformLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Rules/DungeonTransformLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonTransformLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonTransformLogic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonTransformLogic_Statics::ClassParams = {
		&UDungeonTransformLogic::StaticClass,
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
		0x043010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonTransformLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonTransformLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonTransformLogic()
	{
		if (!Z_Registration_Info_UClass_UDungeonTransformLogic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonTransformLogic.OuterSingleton, Z_Construct_UClass_UDungeonTransformLogic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonTransformLogic.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonTransformLogic>()
	{
		return UDungeonTransformLogic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonTransformLogic);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonTransformLogic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonTransformLogic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonTransformLogic, UDungeonTransformLogic::StaticClass, TEXT("UDungeonTransformLogic"), &Z_Registration_Info_UClass_UDungeonTransformLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonTransformLogic), 71610978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonTransformLogic_h_617398290(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonTransformLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Rules_DungeonTransformLogic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
