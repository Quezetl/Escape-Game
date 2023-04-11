// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Builders/Grid/EditorMode/Tools/GridDungeonEdToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonEdToolData() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridDungeonEdToolData_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridDungeonEdToolData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType();
// End Cross Module References
	void UGridDungeonEdToolData::StaticRegisterNativesUGridDungeonEdToolData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonEdToolData);
	UClass* Z_Construct_UClass_UGridDungeonEdToolData_NoRegister()
	{
		return UGridDungeonEdToolData::StaticClass();
	}
	struct Z_Construct_UClass_UGridDungeonEdToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FloorIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BrushSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridDungeonEdToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonEdToolData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/Grid/EditorMode/Tools/GridDungeonEdToolData.h" },
		{ "ModuleRelativePath", "Public/Builders/Grid/EditorMode/Tools/GridDungeonEdToolData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_FloorIndex_MetaData[] = {
		{ "Category", "Dungeon Edit Mode" },
		{ "ModuleRelativePath", "Public/Builders/Grid/EditorMode/Tools/GridDungeonEdToolData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_FloorIndex = { "FloorIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonEdToolData, FloorIndex), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_FloorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_FloorIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_BrushSize_MetaData[] = {
		{ "Category", "Dungeon Edit Mode" },
		{ "ModuleRelativePath", "Public/Builders/Grid/EditorMode/Tools/GridDungeonEdToolData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonEdToolData, BrushSize), METADATA_PARAMS(Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_BrushSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_BrushSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon Edit Mode" },
		{ "ModuleRelativePath", "Public/Builders/Grid/EditorMode/Tools/GridDungeonEdToolData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridDungeonEdToolData, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridPaintToolCellType, METADATA_PARAMS(Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_CellType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_CellType_MetaData)) }; // 506985233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridDungeonEdToolData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_FloorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_BrushSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_CellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridDungeonEdToolData_Statics::NewProp_CellType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridDungeonEdToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonEdToolData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonEdToolData_Statics::ClassParams = {
		&UGridDungeonEdToolData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridDungeonEdToolData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonEdToolData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridDungeonEdToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonEdToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridDungeonEdToolData()
	{
		if (!Z_Registration_Info_UClass_UGridDungeonEdToolData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonEdToolData.OuterSingleton, Z_Construct_UClass_UGridDungeonEdToolData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridDungeonEdToolData.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridDungeonEdToolData>()
	{
		return UGridDungeonEdToolData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonEdToolData);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_Grid_EditorMode_Tools_GridDungeonEdToolData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_Grid_EditorMode_Tools_GridDungeonEdToolData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonEdToolData, UGridDungeonEdToolData::StaticClass, TEXT("UGridDungeonEdToolData"), &Z_Registration_Info_UClass_UGridDungeonEdToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonEdToolData), 3259256028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_Grid_EditorMode_Tools_GridDungeonEdToolData_h_150490326(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_Grid_EditorMode_Tools_GridDungeonEdToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_Grid_EditorMode_Tools_GridDungeonEdToolData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
