// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Connection/SnapConnectionConstants.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionConstants() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapConnectionState;
	static UEnum* ESnapConnectionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapConnectionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapConnectionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ESnapConnectionState"));
		}
		return Z_Registration_Info_UEnum_ESnapConnectionState.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESnapConnectionState>()
	{
		return ESnapConnectionState_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState_Statics::Enumerators[] = {
		{ "ESnapConnectionState::Unknown", (int64)ESnapConnectionState::Unknown },
		{ "ESnapConnectionState::Door", (int64)ESnapConnectionState::Door },
		{ "ESnapConnectionState::Wall", (int64)ESnapConnectionState::Wall },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Door.DisplayName", "Door" },
		{ "Door.Name", "ESnapConnectionState::Door" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionConstants.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "ESnapConnectionState::Unknown" },
		{ "Wall.DisplayName", "Wall" },
		{ "Wall.Name", "ESnapConnectionState::Wall" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"ESnapConnectionState",
		"ESnapConnectionState",
		Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState()
	{
		if (!Z_Registration_Info_UEnum_ESnapConnectionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapConnectionState.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapConnectionState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapConnectionDoorType;
	static UEnum* ESnapConnectionDoorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapConnectionDoorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapConnectionDoorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ESnapConnectionDoorType"));
		}
		return Z_Registration_Info_UEnum_ESnapConnectionDoorType.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESnapConnectionDoorType>()
	{
		return ESnapConnectionDoorType_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType_Statics::Enumerators[] = {
		{ "ESnapConnectionDoorType::NotApplicable", (int64)ESnapConnectionDoorType::NotApplicable },
		{ "ESnapConnectionDoorType::NormalDoor", (int64)ESnapConnectionDoorType::NormalDoor },
		{ "ESnapConnectionDoorType::OneWayDoor", (int64)ESnapConnectionDoorType::OneWayDoor },
		{ "ESnapConnectionDoorType::OneWayDoorUp", (int64)ESnapConnectionDoorType::OneWayDoorUp },
		{ "ESnapConnectionDoorType::OneWayDoorDown", (int64)ESnapConnectionDoorType::OneWayDoorDown },
		{ "ESnapConnectionDoorType::LockedDoor", (int64)ESnapConnectionDoorType::LockedDoor },
		{ "ESnapConnectionDoorType::CustomDoor", (int64)ESnapConnectionDoorType::CustomDoor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomDoor.Name", "ESnapConnectionDoorType::CustomDoor" },
		{ "LockedDoor.Name", "ESnapConnectionDoorType::LockedDoor" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionConstants.h" },
		{ "NormalDoor.Name", "ESnapConnectionDoorType::NormalDoor" },
		{ "NotApplicable.Name", "ESnapConnectionDoorType::NotApplicable" },
		{ "OneWayDoor.Name", "ESnapConnectionDoorType::OneWayDoor" },
		{ "OneWayDoorDown.Name", "ESnapConnectionDoorType::OneWayDoorDown" },
		{ "OneWayDoorUp.Name", "ESnapConnectionDoorType::OneWayDoorUp" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"ESnapConnectionDoorType",
		"ESnapConnectionDoorType",
		Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType()
	{
		if (!Z_Registration_Info_UEnum_ESnapConnectionDoorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapConnectionDoorType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapConnectionDoorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapConnectionConstraint;
	static UEnum* ESnapConnectionConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapConnectionConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapConnectionConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ESnapConnectionConstraint"));
		}
		return Z_Registration_Info_UEnum_ESnapConnectionConstraint.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESnapConnectionConstraint>()
	{
		return ESnapConnectionConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint_Statics::Enumerators[] = {
		{ "ESnapConnectionConstraint::Magnet", (int64)ESnapConnectionConstraint::Magnet },
		{ "ESnapConnectionConstraint::PlugMale", (int64)ESnapConnectionConstraint::PlugMale },
		{ "ESnapConnectionConstraint::PlugFemale", (int64)ESnapConnectionConstraint::PlugFemale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Magnet.DisplayName", "Magnet (connect to other Magnets)" },
		{ "Magnet.Name", "ESnapConnectionConstraint::Magnet" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionConstants.h" },
		{ "PlugFemale.DisplayName", "Plug Female (connect to other Male Plugs)" },
		{ "PlugFemale.Name", "ESnapConnectionConstraint::PlugFemale" },
		{ "PlugMale.DisplayName", "Plug Male (connect to other Female Plugs)" },
		{ "PlugMale.Name", "ESnapConnectionConstraint::PlugMale" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"ESnapConnectionConstraint",
		"ESnapConnectionConstraint",
		Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint()
	{
		if (!Z_Registration_Info_UEnum_ESnapConnectionConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapConnectionConstraint.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapConnectionConstraint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionConstants_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionConstants_h_Statics::EnumInfo[] = {
		{ ESnapConnectionState_StaticEnum, TEXT("ESnapConnectionState"), &Z_Registration_Info_UEnum_ESnapConnectionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2045548684U) },
		{ ESnapConnectionDoorType_StaticEnum, TEXT("ESnapConnectionDoorType"), &Z_Registration_Info_UEnum_ESnapConnectionDoorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1226517339U) },
		{ ESnapConnectionConstraint_StaticEnum, TEXT("ESnapConnectionConstraint"), &Z_Registration_Info_UEnum_ESnapConnectionConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4201058760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionConstants_h_43485376(TEXT("/Script/DungeonArchitectRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionConstants_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionConstants_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
