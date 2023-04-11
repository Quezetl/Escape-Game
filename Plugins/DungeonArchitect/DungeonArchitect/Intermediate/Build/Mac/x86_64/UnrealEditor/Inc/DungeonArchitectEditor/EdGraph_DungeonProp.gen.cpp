// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraph_DungeonProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_DungeonProp() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_DungeonProp_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_DungeonProp();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UEdGraph_DungeonProp::StaticRegisterNativesUEdGraph_DungeonProp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_DungeonProp);
	UClass* Z_Construct_UClass_UEdGraph_DungeonProp_NoRegister()
	{
		return UEdGraph_DungeonProp::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraph_DungeonProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraph_DungeonProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_DungeonProp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraph_DungeonProp.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraph_DungeonProp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraph_DungeonProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_DungeonProp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_DungeonProp_Statics::ClassParams = {
		&UEdGraph_DungeonProp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraph_DungeonProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_DungeonProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraph_DungeonProp()
	{
		if (!Z_Registration_Info_UClass_UEdGraph_DungeonProp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_DungeonProp.OuterSingleton, Z_Construct_UClass_UEdGraph_DungeonProp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraph_DungeonProp.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraph_DungeonProp>()
	{
		return UEdGraph_DungeonProp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_DungeonProp);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraph_DungeonProp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraph_DungeonProp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph_DungeonProp, UEdGraph_DungeonProp::StaticClass, TEXT("UEdGraph_DungeonProp"), &Z_Registration_Info_UClass_UEdGraph_DungeonProp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_DungeonProp), 166849069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraph_DungeonProp_h_2498677033(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraph_DungeonProp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraph_DungeonProp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
