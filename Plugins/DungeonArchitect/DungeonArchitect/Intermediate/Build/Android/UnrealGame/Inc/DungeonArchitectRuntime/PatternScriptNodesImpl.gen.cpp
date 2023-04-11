// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternScriptNodesImpl() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_EmitMarker();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternActionScriptNodeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternConditionalScriptNodeBase();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalNot();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalOr();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerExists();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_OnPass_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_OnPass();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_Result_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_Result();
// End Cross Module References
	void UMGPatternScriptNode_EmitMarker::StaticRegisterNativesUMGPatternScriptNode_EmitMarker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_EmitMarker);
	UClass* Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_NoRegister()
	{
		return UMGPatternScriptNode_EmitMarker::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CopyRotationFromMarkers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyRotationFromMarkers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyRotationFromMarkers;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CopyHeightFromMarkers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyHeightFromMarkers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyHeightFromMarkers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternActionScriptNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// NOTE: This is an auto-generated file.  Do not modify,  update the definitions.py file instead\n" },
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ToolTip", "NOTE: This is an auto-generated file.  Do not modify,  update the definitions.py file instead" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Emit Marker" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNode_EmitMarker, MarkerName), METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_MarkerName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers_Inner = { "CopyRotationFromMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers_MetaData[] = {
		{ "Category", "Emit Marker" },
		{ "Comment", "/**  Copy the rotation from one of the markers found in this list */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ToolTip", "Copy the rotation from one of the markers found in this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers = { "CopyRotationFromMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNode_EmitMarker, CopyRotationFromMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers_Inner = { "CopyHeightFromMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers_MetaData[] = {
		{ "Category", "Emit Marker" },
		{ "Comment", "/**  Copy the height from one of the markers found in this list */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ToolTip", "Copy the height from one of the markers found in this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers = { "CopyHeightFromMarkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNode_EmitMarker, CopyHeightFromMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyRotationFromMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::NewProp_CopyHeightFromMarkers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_EmitMarker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::ClassParams = {
		&UMGPatternScriptNode_EmitMarker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNode_EmitMarker()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNode_EmitMarker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_EmitMarker.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_EmitMarker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNode_EmitMarker.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_EmitMarker>()
	{
		return UMGPatternScriptNode_EmitMarker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_EmitMarker);
	void UMGPatternScriptNode_RemoveMarker::StaticRegisterNativesUMGPatternScriptNode_RemoveMarker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_RemoveMarker);
	UClass* Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_NoRegister()
	{
		return UMGPatternScriptNode_RemoveMarker::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternActionScriptNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Remove Marker" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNode_RemoveMarker, MarkerName), METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::NewProp_MarkerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::NewProp_MarkerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_RemoveMarker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::ClassParams = {
		&UMGPatternScriptNode_RemoveMarker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNode_RemoveMarker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_RemoveMarker.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNode_RemoveMarker.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_RemoveMarker>()
	{
		return UMGPatternScriptNode_RemoveMarker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_RemoveMarker);
	void UMGPatternScriptNode_LogicalAnd::StaticRegisterNativesUMGPatternScriptNode_LogicalAnd()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_LogicalAnd);
	UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_NoRegister()
	{
		return UMGPatternScriptNode_LogicalAnd::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_LogicalAnd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::ClassParams = {
		&UMGPatternScriptNode_LogicalAnd::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalAnd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalAnd.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalAnd.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_LogicalAnd>()
	{
		return UMGPatternScriptNode_LogicalAnd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_LogicalAnd);
	void UMGPatternScriptNode_LogicalNot::StaticRegisterNativesUMGPatternScriptNode_LogicalNot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_LogicalNot);
	UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_NoRegister()
	{
		return UMGPatternScriptNode_LogicalNot::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_LogicalNot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::ClassParams = {
		&UMGPatternScriptNode_LogicalNot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalNot()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalNot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalNot.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_LogicalNot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalNot.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_LogicalNot>()
	{
		return UMGPatternScriptNode_LogicalNot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_LogicalNot);
	void UMGPatternScriptNode_LogicalOr::StaticRegisterNativesUMGPatternScriptNode_LogicalOr()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_LogicalOr);
	UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_NoRegister()
	{
		return UMGPatternScriptNode_LogicalOr::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_LogicalOr>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::ClassParams = {
		&UMGPatternScriptNode_LogicalOr::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNode_LogicalOr()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalOr.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalOr.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_LogicalOr_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalOr.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_LogicalOr>()
	{
		return UMGPatternScriptNode_LogicalOr::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_LogicalOr);
	void UMGPatternScriptNode_MarkerExists::StaticRegisterNativesUMGPatternScriptNode_MarkerExists()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_MarkerExists);
	UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_NoRegister()
	{
		return UMGPatternScriptNode_MarkerExists::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Markers" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNode_MarkerExists, MarkerName), METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::NewProp_MarkerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::NewProp_MarkerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_MarkerExists>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::ClassParams = {
		&UMGPatternScriptNode_MarkerExists::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNode_MarkerExists()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerExists.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerExists.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_MarkerExists_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerExists.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_MarkerExists>()
	{
		return UMGPatternScriptNode_MarkerExists::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_MarkerExists);
	void UMGPatternScriptNode_OnPass::StaticRegisterNativesUMGPatternScriptNode_OnPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_OnPass);
	UClass* Z_Construct_UClass_UMGPatternScriptNode_OnPass_NoRegister()
	{
		return UMGPatternScriptNode_OnPass::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternActionScriptNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_OnPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::ClassParams = {
		&UMGPatternScriptNode_OnPass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNode_OnPass()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNode_OnPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_OnPass.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_OnPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNode_OnPass.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_OnPass>()
	{
		return UMGPatternScriptNode_OnPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_OnPass);
	void UMGPatternScriptNode_Result::StaticRegisterNativesUMGPatternScriptNode_Result()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNode_Result);
	UClass* Z_Construct_UClass_UMGPatternScriptNode_Result_NoRegister()
	{
		return UMGPatternScriptNode_Result::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNode_Result_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternConditionalScriptNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/Impl/PatternScriptNodesImpl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNode_Result>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::ClassParams = {
		&UMGPatternScriptNode_Result::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNode_Result()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNode_Result.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNode_Result.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNode_Result_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNode_Result.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNode_Result>()
	{
		return UMGPatternScriptNode_Result::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNode_Result);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_Impl_PatternScriptNodesImpl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_Impl_PatternScriptNodesImpl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternScriptNode_EmitMarker, UMGPatternScriptNode_EmitMarker::StaticClass, TEXT("UMGPatternScriptNode_EmitMarker"), &Z_Registration_Info_UClass_UMGPatternScriptNode_EmitMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_EmitMarker), 3292009257U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_RemoveMarker, UMGPatternScriptNode_RemoveMarker::StaticClass, TEXT("UMGPatternScriptNode_RemoveMarker"), &Z_Registration_Info_UClass_UMGPatternScriptNode_RemoveMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_RemoveMarker), 2238334371U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_LogicalAnd, UMGPatternScriptNode_LogicalAnd::StaticClass, TEXT("UMGPatternScriptNode_LogicalAnd"), &Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalAnd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_LogicalAnd), 1034353365U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_LogicalNot, UMGPatternScriptNode_LogicalNot::StaticClass, TEXT("UMGPatternScriptNode_LogicalNot"), &Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalNot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_LogicalNot), 2461862492U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_LogicalOr, UMGPatternScriptNode_LogicalOr::StaticClass, TEXT("UMGPatternScriptNode_LogicalOr"), &Z_Registration_Info_UClass_UMGPatternScriptNode_LogicalOr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_LogicalOr), 255007468U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_MarkerExists, UMGPatternScriptNode_MarkerExists::StaticClass, TEXT("UMGPatternScriptNode_MarkerExists"), &Z_Registration_Info_UClass_UMGPatternScriptNode_MarkerExists, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_MarkerExists), 2363307578U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_OnPass, UMGPatternScriptNode_OnPass::StaticClass, TEXT("UMGPatternScriptNode_OnPass"), &Z_Registration_Info_UClass_UMGPatternScriptNode_OnPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_OnPass), 2414044054U) },
		{ Z_Construct_UClass_UMGPatternScriptNode_Result, UMGPatternScriptNode_Result::StaticClass, TEXT("UMGPatternScriptNode_Result"), &Z_Registration_Info_UClass_UMGPatternScriptNode_Result, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNode_Result), 1070436082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_Impl_PatternScriptNodesImpl_h_3561015640(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_Impl_PatternScriptNodesImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_Impl_PatternScriptNodesImpl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
