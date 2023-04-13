// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Builders/SnapMap/EditorMode/SnapMapEdModeHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapEdModeHandler() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEdModeHandler_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEdModeHandler();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdModeHandler();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void USnapMapEdModeHandler::StaticRegisterNativesUSnapMapEdModeHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapEdModeHandler);
	UClass* Z_Construct_UClass_USnapMapEdModeHandler_NoRegister()
	{
		return USnapMapEdModeHandler::StaticClass();
	}
	struct Z_Construct_UClass_USnapMapEdModeHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapMapEdModeHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonEdModeHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapMapEdModeHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/SnapMap/EditorMode/SnapMapEdModeHandler.h" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/EditorMode/SnapMapEdModeHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapMapEdModeHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapEdModeHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapEdModeHandler_Statics::ClassParams = {
		&USnapMapEdModeHandler::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapMapEdModeHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapMapEdModeHandler()
	{
		if (!Z_Registration_Info_UClass_USnapMapEdModeHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapEdModeHandler.OuterSingleton, Z_Construct_UClass_USnapMapEdModeHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapMapEdModeHandler.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapEdModeHandler>()
	{
		return USnapMapEdModeHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapEdModeHandler);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_SnapMapEdModeHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_SnapMapEdModeHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapEdModeHandler, USnapMapEdModeHandler::StaticClass, TEXT("USnapMapEdModeHandler"), &Z_Registration_Info_UClass_USnapMapEdModeHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapEdModeHandler), 649519032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_SnapMapEdModeHandler_h_2193637193(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_SnapMapEdModeHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_SnapMapEdModeHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
