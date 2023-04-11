// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugAppMode() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ASnapMapFlowEditorVisualization_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ASnapMapFlowEditorVisualization();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void ASnapMapFlowEditorVisualization::StaticRegisterNativesASnapMapFlowEditorVisualization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnapMapFlowEditorVisualization);
	UClass* Z_Construct_UClass_ASnapMapFlowEditorVisualization_NoRegister()
	{
		return ASnapMapFlowEditorVisualization::StaticClass();
	}
	struct Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedLevels_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedLevels_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedLevels_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedLevels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedPackages_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedPackages_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedPackages_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedPackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////// ASnapMapFlowEditorVisualization ///////////////////////\n" },
		{ "IncludePath", "Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
		{ "ToolTip", "ASnapMapFlowEditorVisualization" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_ValueProp = { "LoadedLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_Key_KeyProp = { "LoadedLevels_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels = { "LoadedLevels", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapMapFlowEditorVisualization, LoadedLevels), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_ValueProp = { "LoadedPackages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_Key_KeyProp = { "LoadedPackages_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages = { "LoadedPackages", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapMapFlowEditorVisualization, LoadedPackages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawBounds = { "DebugDrawBounds", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapMapFlowEditorVisualization, DebugDrawBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawColor = { "DebugDrawColor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapMapFlowEditorVisualization, DebugDrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnapMapFlowEditorVisualization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::ClassParams = {
		&ASnapMapFlowEditorVisualization::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::PropPointers),
		0,
		0x048000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnapMapFlowEditorVisualization()
	{
		if (!Z_Registration_Info_UClass_ASnapMapFlowEditorVisualization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnapMapFlowEditorVisualization.OuterSingleton, Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnapMapFlowEditorVisualization.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<ASnapMapFlowEditorVisualization>()
	{
		return ASnapMapFlowEditorVisualization::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnapMapFlowEditorVisualization);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_DebugAppMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_DebugAppMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnapMapFlowEditorVisualization, ASnapMapFlowEditorVisualization::StaticClass, TEXT("ASnapMapFlowEditorVisualization"), &Z_Registration_Info_UClass_ASnapMapFlowEditorVisualization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnapMapFlowEditorVisualization), 4103747143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_DebugAppMode_h_3260588280(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_DebugAppMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_DebugAppMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
