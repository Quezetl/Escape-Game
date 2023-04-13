// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonModel() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonMarkerInfo();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpawnLogic_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonMarkerInfo;
class UScriptStruct* FDungeonMarkerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonMarkerInfo, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonMarkerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonMarkerInfo>()
{
	return FDungeonMarkerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnLogics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLogics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLogics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonMarkerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_transform_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMarkerInfo, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMarkerInfo, NodeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_NodeId_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics_Inner = { "SpawnLogics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDungeonSpawnLogic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics = { "SpawnLogics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMarkerInfo, SpawnLogics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_TemplateObject_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_TemplateObject = { "TemplateObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDungeonMarkerInfo, TemplateObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_TemplateObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_TemplateObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_TemplateObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DungeonMarkerInfo",
		sizeof(FDungeonMarkerInfo),
		alignof(FDungeonMarkerInfo),
		Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDungeonMarkerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.InnerSingleton, Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.InnerSingleton;
	}
	void UDungeonModel::StaticRegisterNativesUDungeonModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonModel);
	UClass* Z_Construct_UClass_UDungeonModel_NoRegister()
	{
		return UDungeonModel::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* \n*/" },
		{ "IncludePath", "Core/DungeonModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonModel_Statics::ClassParams = {
		&UDungeonModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDungeonModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonModel()
	{
		if (!Z_Registration_Info_UClass_UDungeonModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonModel.OuterSingleton, Z_Construct_UClass_UDungeonModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonModel.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonModel>()
	{
		return UDungeonModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonModel);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ScriptStructInfo[] = {
		{ FDungeonMarkerInfo::StaticStruct, Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewStructOps, TEXT("DungeonMarkerInfo"), &Z_Registration_Info_UScriptStruct_DungeonMarkerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonMarkerInfo), 3778605977U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonModel, UDungeonModel::StaticClass, TEXT("UDungeonModel"), &Z_Registration_Info_UClass_UDungeonModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonModel), 98099887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_3140122451(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
