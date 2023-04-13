// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/EditorMode/DungeonEdModeHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonEdModeHandler() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdModeHandler_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdModeHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UDungeonEdModeHandler::StaticRegisterNativesUDungeonEdModeHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonEdModeHandler);
	UClass* Z_Construct_UClass_UDungeonEdModeHandler_NoRegister()
	{
		return UDungeonEdModeHandler::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonEdModeHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonEdModeHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonEdModeHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/DungeonEdModeHandler.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonEdModeHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonEdModeHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonEdModeHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonEdModeHandler_Statics::ClassParams = {
		&UDungeonEdModeHandler::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonEdModeHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEdModeHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonEdModeHandler()
	{
		if (!Z_Registration_Info_UClass_UDungeonEdModeHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonEdModeHandler.OuterSingleton, Z_Construct_UClass_UDungeonEdModeHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonEdModeHandler.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonEdModeHandler>()
	{
		return UDungeonEdModeHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonEdModeHandler);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonEdModeHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonEdModeHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonEdModeHandler, UDungeonEdModeHandler::StaticClass, TEXT("UDungeonEdModeHandler"), &Z_Registration_Info_UClass_UDungeonEdModeHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonEdModeHandler), 1857503731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonEdModeHandler_h_1480597206(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonEdModeHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonEdModeHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
