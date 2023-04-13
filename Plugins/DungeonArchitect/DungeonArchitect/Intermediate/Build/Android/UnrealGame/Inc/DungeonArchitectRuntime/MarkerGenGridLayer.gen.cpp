// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarkerGenGridLayer() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridLayer_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridLayer();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenLayer();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	void UMarkerGenGridLayer::StaticRegisterNativesUMarkerGenGridLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenGridLayer);
	UClass* Z_Construct_UClass_UMarkerGenGridLayer_NoRegister()
	{
		return UMarkerGenGridLayer::StaticClass();
	}
	struct Z_Construct_UClass_UMarkerGenGridLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SameHeightMarkers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SameHeightMarkers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SameHeightMarkers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpandMarkerDomain_MetaData[];
#endif
		static void NewProp_bExpandMarkerDomain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandMarkerDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandMarkerDomainAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpandMarkerDomainAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarkerGenGridLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMarkerGenLayer,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenGridLayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridLayer.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridLayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_SameHeightMarkers_Inner = { "SameHeightMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_SameHeightMarkers_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n\x09 * List of marker names that should be on the same level while testing for the pattern\n\x09 * E.g. 1: If you add \"Ground\" to the list, and if that marker exist at the location of any of the pattern rule blocks,\n\x09 * they'll have to be on the same height, or the pattern won't match. This might be useful if you're inserting\n\x09 * a larger ground tile (2x2) and don't want it to match with a adjacent ground tile of a different height\n\x09 * E.g. 2: You're trying to turn a (Door-Wall) edge into a larger 2x Door. We don't want to match the pattern\n\x09 * if the Wall and Door adjacent edges are on different heights, so you'd specify both \"Wall\" and \"Door\" in this list\n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridLayer.h" },
		{ "ToolTip", "List of marker names that should be on the same level while testing for the pattern\nE.g. 1: If you add \"Ground\" to the list, and if that marker exist at the location of any of the pattern rule blocks,\nthey'll have to be on the same height, or the pattern won't match. This might be useful if you're inserting\na larger ground tile (2x2) and don't want it to match with a adjacent ground tile of a different height\nE.g. 2: You're trying to turn a (Door-Wall) edge into a larger 2x Door. We don't want to match the pattern\nif the Wall and Door adjacent edges are on different heights, so you'd specify both \"Wall\" and \"Door\" in this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_SameHeightMarkers = { "SameHeightMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenGridLayer, SameHeightMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_SameHeightMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_SameHeightMarkers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_bExpandMarkerDomain_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridLayer.h" },
	};
#endif
	void Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_bExpandMarkerDomain_SetBit(void* Obj)
	{
		((UMarkerGenGridLayer*)Obj)->bExpandMarkerDomain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_bExpandMarkerDomain = { "bExpandMarkerDomain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMarkerGenGridLayer), &Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_bExpandMarkerDomain_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_bExpandMarkerDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_bExpandMarkerDomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_ExpandMarkerDomainAmount_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bExpandMarkerDomain" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridLayer.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_ExpandMarkerDomainAmount = { "ExpandMarkerDomainAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenGridLayer, ExpandMarkerDomainAmount), METADATA_PARAMS(Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_ExpandMarkerDomainAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_ExpandMarkerDomainAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarkerGenGridLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_SameHeightMarkers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_SameHeightMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_bExpandMarkerDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridLayer_Statics::NewProp_ExpandMarkerDomainAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarkerGenGridLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenGridLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenGridLayer_Statics::ClassParams = {
		&UMarkerGenGridLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMarkerGenGridLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridLayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMarkerGenGridLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMarkerGenGridLayer()
	{
		if (!Z_Registration_Info_UClass_UMarkerGenGridLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenGridLayer.OuterSingleton, Z_Construct_UClass_UMarkerGenGridLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMarkerGenGridLayer.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenGridLayer>()
	{
		return UMarkerGenGridLayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenGridLayer);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMarkerGenGridLayer, UMarkerGenGridLayer::StaticClass, TEXT("UMarkerGenGridLayer"), &Z_Registration_Info_UClass_UMarkerGenGridLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenGridLayer), 1400959866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridLayer_h_2599527135(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
