// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionInfo() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED();
// End Cross Module References
	void USnapConnectionInfo::StaticRegisterNativesUSnapConnectionInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapConnectionInfo);
	UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister()
	{
		return USnapConnectionInfo::StaticClass();
	}
	struct Z_Construct_UClass_USnapConnectionInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionCategory_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVerticalDoor_MetaData[];
#endif
		static void NewProp_bVerticalDoor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerticalDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThemeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThemeAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallVisuals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallVisuals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorVisuals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorVisuals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapConnectionInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapConnectionInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ConnectionCategory_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ConnectionCategory = { "ConnectionCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapConnectionInfo, ConnectionCategory), METADATA_PARAMS(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ConnectionCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ConnectionCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "Comment", "/** Check this if you are create a vertical door to move between floors */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
		{ "ToolTip", "Check this if you are create a vertical door to move between floors" },
	};
#endif
	void Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor_SetBit(void* Obj)
	{
		((USnapConnectionInfo*)Obj)->bVerticalDoor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor = { "bVerticalDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USnapConnectionInfo), &Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ThemeAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ThemeAsset = { "ThemeAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapConnectionInfo, ThemeAsset), Z_Construct_UClass_UDungeonThemeAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ThemeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ThemeAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapConnectionInfo, Version), METADATA_PARAMS(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_WallVisuals_MetaData[] = {
		{ "Comment", "/** Deprecated property. This value is now fetched from the connection theme graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
		{ "ToolTip", "Deprecated property. This value is now fetched from the connection theme graph" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_WallVisuals = { "WallVisuals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapConnectionInfo, WallVisuals), Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED, METADATA_PARAMS(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_WallVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_WallVisuals_MetaData)) }; // 857200198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_DoorVisuals_MetaData[] = {
		{ "Comment", "/** Deprecated property. This value is now fetched from the connection theme graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
		{ "ToolTip", "Deprecated property. This value is now fetched from the connection theme graph" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_DoorVisuals = { "DoorVisuals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapConnectionInfo, DoorVisuals), Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED, METADATA_PARAMS(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_DoorVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_DoorVisuals_MetaData)) }; // 857200198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapConnectionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ConnectionCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ThemeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_WallVisuals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_DoorVisuals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapConnectionInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapConnectionInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapConnectionInfo_Statics::ClassParams = {
		&USnapConnectionInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapConnectionInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapConnectionInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapConnectionInfo()
	{
		if (!Z_Registration_Info_UClass_USnapConnectionInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapConnectionInfo.OuterSingleton, Z_Construct_UClass_USnapConnectionInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapConnectionInfo.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapConnectionInfo>()
	{
		return USnapConnectionInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapConnectionInfo);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapConnectionInfo, USnapConnectionInfo::StaticClass, TEXT("USnapConnectionInfo"), &Z_Registration_Info_UClass_USnapConnectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapConnectionInfo), 60535547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionInfo_h_2860356319(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
