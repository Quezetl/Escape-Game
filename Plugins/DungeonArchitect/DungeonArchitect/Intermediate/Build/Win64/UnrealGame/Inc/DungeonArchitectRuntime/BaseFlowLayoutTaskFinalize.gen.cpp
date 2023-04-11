// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskFinalize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskFinalize() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UBaseFlowLayoutTaskFinalize::StaticRegisterNativesUBaseFlowLayoutTaskFinalize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskFinalize);
	UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_NoRegister()
	{
		return UBaseFlowLayoutTaskFinalize::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OneWayDoorPromotionWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OneWayDoorPromotionWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugData_MetaData[];
#endif
		static void NewProp_bShowDebugData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskFinalize.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskFinalize.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_OneWayDoorPromotionWeight_MetaData[] = {
		{ "Category", "Finalize Graph" },
		{ "Comment", "/**\n        Some of the links will be converted to one way links, to avoid the player walking around locked doors.\n        Adjust this weight to modify the one-way door promotion criteria\n\n        Variable Name: OneWayDoorPromotionWeight\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskFinalize.h" },
		{ "ToolTip", "Some of the links will be converted to one way links, to avoid the player walking around locked doors.\nAdjust this weight to modify the one-way door promotion criteria\n\nVariable Name: OneWayDoorPromotionWeight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_OneWayDoorPromotionWeight = { "OneWayDoorPromotionWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskFinalize, OneWayDoorPromotionWeight), METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_OneWayDoorPromotionWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_OneWayDoorPromotionWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Tasks/BaseFlowLayoutTaskFinalize.h" },
	};
#endif
	void Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData_SetBit(void* Obj)
	{
		((UBaseFlowLayoutTaskFinalize*)Obj)->bShowDebugData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData = { "bShowDebugData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseFlowLayoutTaskFinalize), &Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_OneWayDoorPromotionWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskFinalize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::ClassParams = {
		&UBaseFlowLayoutTaskFinalize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize()
	{
		if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskFinalize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskFinalize.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseFlowLayoutTaskFinalize.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskFinalize>()
	{
		return UBaseFlowLayoutTaskFinalize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskFinalize);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskFinalize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskFinalize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskFinalize, UBaseFlowLayoutTaskFinalize::StaticClass, TEXT("UBaseFlowLayoutTaskFinalize"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskFinalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskFinalize), 745518728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskFinalize_h_3380160423(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskFinalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Tasks_BaseFlowLayoutTaskFinalize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
