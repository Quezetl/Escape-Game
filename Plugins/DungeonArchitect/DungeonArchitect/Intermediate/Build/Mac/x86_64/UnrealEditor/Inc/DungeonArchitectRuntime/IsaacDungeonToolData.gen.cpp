// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacDungeonToolData() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonToolData_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonToolData();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonToolData();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	void UIsaacDungeonToolData::StaticRegisterNativesUIsaacDungeonToolData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacDungeonToolData);
	UClass* Z_Construct_UClass_UIsaacDungeonToolData_NoRegister()
	{
		return UIsaacDungeonToolData::StaticClass();
	}
	struct Z_Construct_UClass_UIsaacDungeonToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaintedCells_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintedCells_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintedCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsaacDungeonToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDungeonToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonToolData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Isaac/IsaacDungeonToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonToolData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsaacDungeonToolData_Statics::NewProp_PaintedCells_Inner = { "PaintedCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsaacDungeonToolData_Statics::NewProp_PaintedCells_MetaData[] = {
		{ "Comment", "// The cells painted by the \"Paint\" tool\n" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonToolData.h" },
		{ "ToolTip", "The cells painted by the \"Paint\" tool" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsaacDungeonToolData_Statics::NewProp_PaintedCells = { "PaintedCells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsaacDungeonToolData, PaintedCells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonToolData_Statics::NewProp_PaintedCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonToolData_Statics::NewProp_PaintedCells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsaacDungeonToolData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonToolData_Statics::NewProp_PaintedCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonToolData_Statics::NewProp_PaintedCells,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsaacDungeonToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacDungeonToolData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacDungeonToolData_Statics::ClassParams = {
		&UIsaacDungeonToolData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIsaacDungeonToolData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonToolData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsaacDungeonToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsaacDungeonToolData()
	{
		if (!Z_Registration_Info_UClass_UIsaacDungeonToolData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacDungeonToolData.OuterSingleton, Z_Construct_UClass_UIsaacDungeonToolData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsaacDungeonToolData.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacDungeonToolData>()
	{
		return UIsaacDungeonToolData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacDungeonToolData);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonToolData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonToolData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacDungeonToolData, UIsaacDungeonToolData::StaticClass, TEXT("UIsaacDungeonToolData"), &Z_Registration_Info_UClass_UIsaacDungeonToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacDungeonToolData), 3438415418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonToolData_h_3105999443(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonToolData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
