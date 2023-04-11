// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternGraphSchema() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphSchema_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References
	void UMGPatternGraphSchema::StaticRegisterNativesUMGPatternGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternGraphSchema);
	UClass* Z_Construct_UClass_UMGPatternGraphSchema_NoRegister()
	{
		return UMGPatternGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternGraphSchema_Statics::ClassParams = {
		&UMGPatternGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UMGPatternGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternGraphSchema.OuterSingleton, Z_Construct_UClass_UMGPatternGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternGraphSchema.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGPatternGraphSchema>()
	{
		return UMGPatternGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternGraphSchema);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternGraphSchema, UMGPatternGraphSchema::StaticClass, TEXT("UMGPatternGraphSchema"), &Z_Registration_Info_UClass_UMGPatternGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternGraphSchema), 3626191244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphSchema_h_84356215(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
