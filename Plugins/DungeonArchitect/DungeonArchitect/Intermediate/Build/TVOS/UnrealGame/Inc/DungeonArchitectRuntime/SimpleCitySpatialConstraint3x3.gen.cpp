// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraint3x3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCitySpatialConstraint3x3() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCitySpatialConstraint3x3_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCitySpatialConstraint3x3();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpatialConstraint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraint3x3Data;
class UScriptStruct* FSimpleCitySpatialConstraint3x3Data::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraint3x3Data.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraint3x3Data.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SimpleCitySpatialConstraint3x3Data"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraint3x3Data.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSimpleCitySpatialConstraint3x3Data>()
{
	return FSimpleCitySpatialConstraint3x3Data::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraint3x3.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleCitySpatialConstraint3x3Data>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimpleCitySpatialConstraintCellData, METADATA_PARAMS(nullptr, 0) }; // 1367798497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::NewProp_Cells_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraint3x3.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCitySpatialConstraint3x3Data, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::NewProp_Cells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::NewProp_Cells_MetaData)) }; // 1367798497
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::NewProp_Cells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::NewProp_Cells,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SimpleCitySpatialConstraint3x3Data",
		sizeof(FSimpleCitySpatialConstraint3x3Data),
		alignof(FSimpleCitySpatialConstraint3x3Data),
		Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraint3x3Data.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraint3x3Data.InnerSingleton, Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraint3x3Data.InnerSingleton;
	}
	void USimpleCitySpatialConstraint3x3::StaticRegisterNativesUSimpleCitySpatialConstraint3x3()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCitySpatialConstraint3x3);
	UClass* Z_Construct_UClass_USimpleCitySpatialConstraint3x3_NoRegister()
	{
		return USimpleCitySpatialConstraint3x3::StaticClass();
	}
	struct Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonSpatialConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraint3x3.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraint3x3.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::NewProp_Configuration_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SpatialConstraints/SimpleCitySpatialConstraint3x3.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCitySpatialConstraint3x3, Configuration), Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data, METADATA_PARAMS(Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::NewProp_Configuration_MetaData)) }; // 1547501036
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::NewProp_Configuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCitySpatialConstraint3x3>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::ClassParams = {
		&USimpleCitySpatialConstraint3x3::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleCitySpatialConstraint3x3()
	{
		if (!Z_Registration_Info_UClass_USimpleCitySpatialConstraint3x3.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCitySpatialConstraint3x3.OuterSingleton, Z_Construct_UClass_USimpleCitySpatialConstraint3x3_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleCitySpatialConstraint3x3.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCitySpatialConstraint3x3>()
	{
		return USimpleCitySpatialConstraint3x3::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCitySpatialConstraint3x3);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraint3x3_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraint3x3_h_Statics::ScriptStructInfo[] = {
		{ FSimpleCitySpatialConstraint3x3Data::StaticStruct, Z_Construct_UScriptStruct_FSimpleCitySpatialConstraint3x3Data_Statics::NewStructOps, TEXT("SimpleCitySpatialConstraint3x3Data"), &Z_Registration_Info_UScriptStruct_SimpleCitySpatialConstraint3x3Data, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleCitySpatialConstraint3x3Data), 1547501036U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraint3x3_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCitySpatialConstraint3x3, USimpleCitySpatialConstraint3x3::StaticClass, TEXT("USimpleCitySpatialConstraint3x3"), &Z_Registration_Info_UClass_USimpleCitySpatialConstraint3x3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCitySpatialConstraint3x3), 603467063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraint3x3_h_587459834(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraint3x3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraint3x3_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraint3x3_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SpatialConstraints_SimpleCitySpatialConstraint3x3_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
