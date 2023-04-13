// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarkerGenGridPattern() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridPatternRule_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridPatternRule();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPatternRule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridPattern_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridPattern();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPattern();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType;
	static UEnum* EMarkerGenGridPatternRuleType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EMarkerGenGridPatternRuleType"));
		}
		return Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMarkerGenGridPatternRuleType>()
	{
		return EMarkerGenGridPatternRuleType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enumerators[] = {
		{ "EMarkerGenGridPatternRuleType::Ground", (int64)EMarkerGenGridPatternRuleType::Ground },
		{ "EMarkerGenGridPatternRuleType::EdgeX", (int64)EMarkerGenGridPatternRuleType::EdgeX },
		{ "EMarkerGenGridPatternRuleType::EdgeY", (int64)EMarkerGenGridPatternRuleType::EdgeY },
		{ "EMarkerGenGridPatternRuleType::Corner", (int64)EMarkerGenGridPatternRuleType::Corner },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enum_MetaDataParams[] = {
		{ "Corner.Name", "EMarkerGenGridPatternRuleType::Corner" },
		{ "EdgeX.Name", "EMarkerGenGridPatternRuleType::EdgeX" },
		{ "EdgeY.Name", "EMarkerGenGridPatternRuleType::EdgeY" },
		{ "Ground.Name", "EMarkerGenGridPatternRuleType::Ground" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EMarkerGenGridPatternRuleType",
		"EMarkerGenGridPatternRuleType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType()
	{
		if (!Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.InnerSingleton;
	}
	void UMarkerGenGridPatternRule::StaticRegisterNativesUMarkerGenGridPatternRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenGridPatternRule);
	UClass* Z_Construct_UClass_UMarkerGenGridPatternRule_NoRegister()
	{
		return UMarkerGenGridPatternRule::StaticClass();
	}
	struct Z_Construct_UClass_UMarkerGenGridPatternRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RuleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RuleType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMarkerGenPatternRule,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_Coord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenGridPatternRule, Coord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_Coord_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType = { "RuleType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarkerGenGridPatternRule, RuleType), Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType, METADATA_PARAMS(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType_MetaData)) }; // 4289160182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_Coord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenGridPatternRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::ClassParams = {
		&UMarkerGenGridPatternRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMarkerGenGridPatternRule()
	{
		if (!Z_Registration_Info_UClass_UMarkerGenGridPatternRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenGridPatternRule.OuterSingleton, Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMarkerGenGridPatternRule.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenGridPatternRule>()
	{
		return UMarkerGenGridPatternRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenGridPatternRule);
	void UMarkerGenGridPattern::StaticRegisterNativesUMarkerGenGridPattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenGridPattern);
	UClass* Z_Construct_UClass_UMarkerGenGridPattern_NoRegister()
	{
		return UMarkerGenGridPattern::StaticClass();
	}
	struct Z_Construct_UClass_UMarkerGenGridPattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarkerGenGridPattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMarkerGenPattern,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarkerGenGridPattern_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarkerGenGridPattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenGridPattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenGridPattern_Statics::ClassParams = {
		&UMarkerGenGridPattern::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMarkerGenGridPattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMarkerGenGridPattern()
	{
		if (!Z_Registration_Info_UClass_UMarkerGenGridPattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenGridPattern.OuterSingleton, Z_Construct_UClass_UMarkerGenGridPattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMarkerGenGridPattern.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenGridPattern>()
	{
		return UMarkerGenGridPattern::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenGridPattern);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::EnumInfo[] = {
		{ EMarkerGenGridPatternRuleType_StaticEnum, TEXT("EMarkerGenGridPatternRuleType"), &Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4289160182U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMarkerGenGridPatternRule, UMarkerGenGridPatternRule::StaticClass, TEXT("UMarkerGenGridPatternRule"), &Z_Registration_Info_UClass_UMarkerGenGridPatternRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenGridPatternRule), 445355024U) },
		{ Z_Construct_UClass_UMarkerGenGridPattern, UMarkerGenGridPattern::StaticClass, TEXT("UMarkerGenGridPattern"), &Z_Registration_Info_UClass_UMarkerGenGridPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenGridPattern), 3657586232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_1084817627(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
