// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonSpotLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_DungeonSpotLight() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonSpotLight();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorBase();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	void UEdGraphNode_DungeonSpotLight::StaticRegisterNativesUEdGraphNode_DungeonSpotLight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_DungeonSpotLight);
	UClass* Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_NoRegister()
	{
		return UEdGraphNode_DungeonSpotLight::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode_DungeonActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonSpotLight.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonSpotLight.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::NewProp_SpotLight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonSpotLight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_DungeonSpotLight, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::NewProp_SpotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::NewProp_SpotLight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::NewProp_SpotLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_DungeonSpotLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::ClassParams = {
		&UEdGraphNode_DungeonSpotLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_DungeonSpotLight()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_DungeonSpotLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_DungeonSpotLight.OuterSingleton, Z_Construct_UClass_UEdGraphNode_DungeonSpotLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_DungeonSpotLight.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_DungeonSpotLight>()
	{
		return UEdGraphNode_DungeonSpotLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_DungeonSpotLight);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonSpotLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonSpotLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_DungeonSpotLight, UEdGraphNode_DungeonSpotLight::StaticClass, TEXT("UEdGraphNode_DungeonSpotLight"), &Z_Registration_Info_UClass_UEdGraphNode_DungeonSpotLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_DungeonSpotLight), 1533336819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonSpotLight_h_3893796148(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonSpotLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonSpotLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
