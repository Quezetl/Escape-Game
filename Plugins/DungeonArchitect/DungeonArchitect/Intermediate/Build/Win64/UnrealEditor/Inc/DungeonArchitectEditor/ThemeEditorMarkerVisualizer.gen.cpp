// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/Visualization/ThemeEditorMarkerVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThemeEditorMarkerVisualizer() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AThemeEditorMarkerVisualizer_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AThemeEditorMarkerVisualizer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAProcMeshComponent_NoRegister();
// End Cross Module References
	void AThemeEditorMarkerVisualizer::StaticRegisterNativesAThemeEditorMarkerVisualizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThemeEditorMarkerVisualizer);
	UClass* Z_Construct_UClass_AThemeEditorMarkerVisualizer_NoRegister()
	{
		return AThemeEditorMarkerVisualizer::StaticClass();
	}
	struct Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/Visualization/ThemeEditorMarkerVisualizer.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/Visualization/ThemeEditorMarkerVisualizer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/Visualization/ThemeEditorMarkerVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThemeEditorMarkerVisualizer, MeshComponent), Z_Construct_UClass_UDAProcMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThemeEditorMarkerVisualizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::ClassParams = {
		&AThemeEditorMarkerVisualizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThemeEditorMarkerVisualizer()
	{
		if (!Z_Registration_Info_UClass_AThemeEditorMarkerVisualizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThemeEditorMarkerVisualizer.OuterSingleton, Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThemeEditorMarkerVisualizer.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<AThemeEditorMarkerVisualizer>()
	{
		return AThemeEditorMarkerVisualizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThemeEditorMarkerVisualizer);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_Visualization_ThemeEditorMarkerVisualizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_Visualization_ThemeEditorMarkerVisualizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThemeEditorMarkerVisualizer, AThemeEditorMarkerVisualizer::StaticClass, TEXT("AThemeEditorMarkerVisualizer"), &Z_Registration_Info_UClass_AThemeEditorMarkerVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThemeEditorMarkerVisualizer), 509791454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_Visualization_ThemeEditorMarkerVisualizer_h_1184435196(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_Visualization_ThemeEditorMarkerVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_Visualization_ThemeEditorMarkerVisualizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
