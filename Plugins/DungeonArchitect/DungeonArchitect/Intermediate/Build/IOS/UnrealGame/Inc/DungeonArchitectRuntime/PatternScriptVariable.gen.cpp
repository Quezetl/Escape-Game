// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternScriptVariable() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMGPatternScriptVarDataType;
	static UEnum* EMGPatternScriptVarDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EMGPatternScriptVarDataType"));
		}
		return Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMGPatternScriptVarDataType>()
	{
		return EMGPatternScriptVarDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enumerators[] = {
		{ "EMGPatternScriptVarDataType::Unknown", (int64)EMGPatternScriptVarDataType::Unknown },
		{ "EMGPatternScriptVarDataType::Bool", (int64)EMGPatternScriptVarDataType::Bool },
		{ "EMGPatternScriptVarDataType::Exec", (int64)EMGPatternScriptVarDataType::Exec },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "EMGPatternScriptVarDataType::Bool" },
		{ "Exec.Name", "EMGPatternScriptVarDataType::Exec" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptVariable.h" },
		{ "Unknown.Name", "EMGPatternScriptVarDataType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EMGPatternScriptVarDataType",
		"EMGPatternScriptVarDataType",
		Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType()
	{
		if (!Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h_Statics::EnumInfo[] = {
		{ EMGPatternScriptVarDataType_StaticEnum, TEXT("EMGPatternScriptVarDataType"), &Z_Registration_Info_UEnum_EMGPatternScriptVarDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2184375024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h_3386270834(TEXT("/Script/DungeonArchitectRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
