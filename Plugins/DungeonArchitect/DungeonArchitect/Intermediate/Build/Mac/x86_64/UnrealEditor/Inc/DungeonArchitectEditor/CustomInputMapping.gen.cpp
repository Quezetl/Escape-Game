// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Config/CustomInputMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomInputMapping() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ADACustomInputConfigBinder_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ADACustomInputConfigBinder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
// End Cross Module References
	void ADACustomInputConfigBinder::StaticRegisterNativesADACustomInputConfigBinder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADACustomInputConfigBinder);
	UClass* Z_Construct_UClass_ADACustomInputConfigBinder_NoRegister()
	{
		return ADACustomInputConfigBinder::StaticClass();
	}
	struct Z_Construct_UClass_ADACustomInputConfigBinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADACustomInputConfigBinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADACustomInputConfigBinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Config/CustomInputMapping.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Config/CustomInputMapping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2971228154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Action Mappings */" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Config/CustomInputMapping.h" },
		{ "ToolTip", "List of Action Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADACustomInputConfigBinder, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings_MetaData)) }; // 2971228154
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 3392225251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Axis Mappings */" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Config/CustomInputMapping.h" },
		{ "ToolTip", "List of Axis Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADACustomInputConfigBinder, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings_MetaData)) }; // 3392225251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADACustomInputConfigBinder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADACustomInputConfigBinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADACustomInputConfigBinder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::ClassParams = {
		&ADACustomInputConfigBinder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADACustomInputConfigBinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADACustomInputConfigBinder()
	{
		if (!Z_Registration_Info_UClass_ADACustomInputConfigBinder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADACustomInputConfigBinder.OuterSingleton, Z_Construct_UClass_ADACustomInputConfigBinder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADACustomInputConfigBinder.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<ADACustomInputConfigBinder>()
	{
		return ADACustomInputConfigBinder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADACustomInputConfigBinder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Config_CustomInputMapping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Config_CustomInputMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADACustomInputConfigBinder, ADACustomInputConfigBinder::StaticClass, TEXT("ADACustomInputConfigBinder"), &Z_Registration_Info_UClass_ADACustomInputConfigBinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADACustomInputConfigBinder), 4234395396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Config_CustomInputMapping_h_3944567052(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Config_CustomInputMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Config_CustomInputMapping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
