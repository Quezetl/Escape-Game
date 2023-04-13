// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternScriptNodePin() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePin_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePinExec_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePinExec();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePinBool_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePinBool();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMGPatternScriptPinDirection;
	static UEnum* EMGPatternScriptPinDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EMGPatternScriptPinDirection"));
		}
		return Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMGPatternScriptPinDirection>()
	{
		return EMGPatternScriptPinDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enumerators[] = {
		{ "EMGPatternScriptPinDirection::Input", (int64)EMGPatternScriptPinDirection::Input },
		{ "EMGPatternScriptPinDirection::Output", (int64)EMGPatternScriptPinDirection::Output },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enum_MetaDataParams[] = {
		{ "Input.Name", "EMGPatternScriptPinDirection::Input" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "Output.Name", "EMGPatternScriptPinDirection::Output" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EMGPatternScriptPinDirection",
		"EMGPatternScriptPinDirection",
		Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection()
	{
		if (!Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint;
	static UEnum* EMGPatternScriptPinConnectivityConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EMGPatternScriptPinConnectivityConstraint"));
		}
		return Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMGPatternScriptPinConnectivityConstraint>()
	{
		return EMGPatternScriptPinConnectivityConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enumerators[] = {
		{ "EMGPatternScriptPinConnectivityConstraint::Mandatory", (int64)EMGPatternScriptPinConnectivityConstraint::Mandatory },
		{ "EMGPatternScriptPinConnectivityConstraint::Optional", (int64)EMGPatternScriptPinConnectivityConstraint::Optional },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enum_MetaDataParams[] = {
		{ "Mandatory.Name", "EMGPatternScriptPinConnectivityConstraint::Mandatory" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "Optional.Name", "EMGPatternScriptPinConnectivityConstraint::Optional" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		"EMGPatternScriptPinConnectivityConstraint",
		"EMGPatternScriptPinConnectivityConstraint",
		Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint()
	{
		if (!Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.InnerSingleton;
	}
	void UMGPatternScriptNodePin::StaticRegisterNativesUMGPatternScriptNodePin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNodePin);
	UClass* Z_Construct_UClass_UMGPatternScriptNodePin_NoRegister()
	{
		return UMGPatternScriptNodePin::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNodePin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectivityConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectivityConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectivityConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNodePin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNodePin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, Name), METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, DataType), Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType, METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType_MetaData)) }; // 2184375024
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, Direction), Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection, METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction_MetaData)) }; // 4223670849
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint = { "ConnectivityConstraint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, ConnectivityConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint, METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint_MetaData)) }; // 4202870182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_LinkedTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_LinkedTo = { "LinkedTo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, LinkedTo), Z_Construct_UClass_UMGPatternScriptNodePin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_LinkedTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_LinkedTo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNodePin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_LinkedTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNodePin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNodePin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::ClassParams = {
		&UMGPatternScriptNodePin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGPatternScriptNodePin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNodePin()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNodePin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNodePin.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNodePin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNodePin.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNodePin>()
	{
		return UMGPatternScriptNodePin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNodePin);
	void UMGPatternScriptNodePinExec::StaticRegisterNativesUMGPatternScriptNodePinExec()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNodePinExec);
	UClass* Z_Construct_UClass_UMGPatternScriptNodePinExec_NoRegister()
	{
		return UMGPatternScriptNodePinExec::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternScriptNodePin,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNodePinExec>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::ClassParams = {
		&UMGPatternScriptNodePinExec::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNodePinExec()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNodePinExec.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNodePinExec.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNodePinExec.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNodePinExec>()
	{
		return UMGPatternScriptNodePinExec::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNodePinExec);
	void UMGPatternScriptNodePinBool::StaticRegisterNativesUMGPatternScriptNodePinBool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNodePinBool);
	UClass* Z_Construct_UClass_UMGPatternScriptNodePinBool_NoRegister()
	{
		return UMGPatternScriptNodePinBool::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternScriptNodePin,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNodePinBool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::ClassParams = {
		&UMGPatternScriptNodePinBool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternScriptNodePinBool()
	{
		if (!Z_Registration_Info_UClass_UMGPatternScriptNodePinBool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNodePinBool.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternScriptNodePinBool.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNodePinBool>()
	{
		return UMGPatternScriptNodePinBool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNodePinBool);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::EnumInfo[] = {
		{ EMGPatternScriptPinDirection_StaticEnum, TEXT("EMGPatternScriptPinDirection"), &Z_Registration_Info_UEnum_EMGPatternScriptPinDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4223670849U) },
		{ EMGPatternScriptPinConnectivityConstraint_StaticEnum, TEXT("EMGPatternScriptPinConnectivityConstraint"), &Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4202870182U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternScriptNodePin, UMGPatternScriptNodePin::StaticClass, TEXT("UMGPatternScriptNodePin"), &Z_Registration_Info_UClass_UMGPatternScriptNodePin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNodePin), 1550501388U) },
		{ Z_Construct_UClass_UMGPatternScriptNodePinExec, UMGPatternScriptNodePinExec::StaticClass, TEXT("UMGPatternScriptNodePinExec"), &Z_Registration_Info_UClass_UMGPatternScriptNodePinExec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNodePinExec), 2838529265U) },
		{ Z_Construct_UClass_UMGPatternScriptNodePinBool, UMGPatternScriptNodePinBool::StaticClass, TEXT("UMGPatternScriptNodePinBool"), &Z_Registration_Info_UClass_UMGPatternScriptNodePinBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNodePinBool), 406394713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_1057664776(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
