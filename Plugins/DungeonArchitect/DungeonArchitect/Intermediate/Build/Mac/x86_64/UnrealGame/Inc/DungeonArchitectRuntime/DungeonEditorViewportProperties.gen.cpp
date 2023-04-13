// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonEditorViewportProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonEditorViewportProperties() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEditorViewportProperties_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEditorViewportProperties();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UDungeonEditorViewportProperties::StaticRegisterNativesUDungeonEditorViewportProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonEditorViewportProperties);
	UClass* Z_Construct_UClass_UDungeonEditorViewportProperties_NoRegister()
	{
		return UDungeonEditorViewportProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonEditorViewportProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DungeonConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerEmitters_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerEmitters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerEmitters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerEmitters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuilderClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BuilderClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Utils/DungeonEditorViewportProperties.h" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonEditorViewportProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_DungeonConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonEditorViewportProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_DungeonConfig = { "DungeonConfig", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonEditorViewportProperties, DungeonConfig), Z_Construct_UClass_UDungeonConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_DungeonConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_DungeonConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters_Inner_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Lets you emit your own markers into the scene */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonEditorViewportProperties.h" },
		{ "ToolTip", "Lets you emit your own markers into the scene" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters_Inner = { "MarkerEmitters", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonMarkerEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Lets you emit your own markers into the scene */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonEditorViewportProperties.h" },
		{ "ToolTip", "Lets you emit your own markers into the scene" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters = { "MarkerEmitters", nullptr, (EPropertyFlags)0x001002800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonEditorViewportProperties, MarkerEmitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_BuilderClass_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Lets you swap out the default dungeon builder with your own implementation */" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonEditorViewportProperties.h" },
		{ "ToolTip", "Lets you swap out the default dungeon builder with your own implementation" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_BuilderClass = { "BuilderClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonEditorViewportProperties, BuilderClass), Z_Construct_UClass_UDungeonBuilder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_BuilderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_BuilderClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_DungeonConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_MarkerEmitters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::NewProp_BuilderClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonEditorViewportProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::ClassParams = {
		&UDungeonEditorViewportProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonEditorViewportProperties()
	{
		if (!Z_Registration_Info_UClass_UDungeonEditorViewportProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonEditorViewportProperties.OuterSingleton, Z_Construct_UClass_UDungeonEditorViewportProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonEditorViewportProperties.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonEditorViewportProperties>()
	{
		return UDungeonEditorViewportProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonEditorViewportProperties);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonEditorViewportProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonEditorViewportProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonEditorViewportProperties, UDungeonEditorViewportProperties::StaticClass, TEXT("UDungeonEditorViewportProperties"), &Z_Registration_Info_UClass_UDungeonEditorViewportProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonEditorViewportProperties), 2780760846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonEditorViewportProperties_h_1848855053(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonEditorViewportProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonEditorViewportProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
