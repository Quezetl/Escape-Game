// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchPadStyle() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath;
class UScriptStruct* FDALaunchPadStyleRegistryPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DALaunchPadStyleRegistryPath"));
	}
	return Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDALaunchPadStyleRegistryPath>()
{
	return FDALaunchPadStyleRegistryPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDALaunchPadStyleRegistryPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistryPath, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistryPath, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistryPath, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistryPath, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"DALaunchPadStyleRegistryPath",
		sizeof(FDALaunchPadStyleRegistryPath),
		alignof(FDALaunchPadStyleRegistryPath),
		Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath()
	{
		if (!Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.InnerSingleton, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry;
class UScriptStruct* FDALaunchPadStyleRegistry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry, Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DALaunchPadStyleRegistry"));
	}
	return Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDALaunchPadStyleRegistry>()
{
	return FDALaunchPadStyleRegistry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDALaunchPadStyleRegistry>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath, METADATA_PARAMS(nullptr, 0) }; // 2978807732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistry, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths_MetaData)) }; // 2978807732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
		nullptr,
		&NewStructOps,
		"DALaunchPadStyleRegistry",
		sizeof(FDALaunchPadStyleRegistry),
		alignof(FDALaunchPadStyleRegistry),
		Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry()
	{
		if (!Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.InnerSingleton, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Styles_LaunchPadStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Styles_LaunchPadStyle_h_Statics::ScriptStructInfo[] = {
		{ FDALaunchPadStyleRegistryPath::StaticStruct, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewStructOps, TEXT("DALaunchPadStyleRegistryPath"), &Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDALaunchPadStyleRegistryPath), 2978807732U) },
		{ FDALaunchPadStyleRegistry::StaticStruct, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewStructOps, TEXT("DALaunchPadStyleRegistry"), &Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDALaunchPadStyleRegistry), 2419733533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Styles_LaunchPadStyle_h_2545578894(TEXT("/Script/DungeonArchitectEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Styles_LaunchPadStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Styles_LaunchPadStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
