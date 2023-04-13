// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapActorSerialization() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapChunkActorDataEntry();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapStreamingChunkActorData_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapStreamingChunkActorData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapSerializable_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapSerializable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapChunkActorDataEntry;
class UScriptStruct* FSnapChunkActorDataEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapChunkActorDataEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapChunkActorDataEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapChunkActorDataEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SnapChunkActorDataEntry.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapChunkActorDataEntry>()
{
	return FSnapChunkActorDataEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapChunkActorDataEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapChunkActorDataEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapChunkActorDataEntry, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapChunkActorDataEntry, ActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorData_Inner = { "ActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorData = { "ActorData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapChunkActorDataEntry, ActorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewProp_ActorData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"SnapChunkActorDataEntry",
		sizeof(FSnapChunkActorDataEntry),
		alignof(FSnapChunkActorDataEntry),
		Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapChunkActorDataEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapChunkActorDataEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapChunkActorDataEntry.InnerSingleton, Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapChunkActorDataEntry.InnerSingleton;
	}
	void USnapStreamingChunkActorData::StaticRegisterNativesUSnapStreamingChunkActorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapStreamingChunkActorData);
	UClass* Z_Construct_UClass_USnapStreamingChunkActorData_NoRegister()
	{
		return USnapStreamingChunkActorData::StaticClass();
	}
	struct Z_Construct_UClass_USnapStreamingChunkActorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorEntries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapStreamingChunkActorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapStreamingChunkActorData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapStreamingChunkActorData_Statics::NewProp_ActorEntries_Inner = { "ActorEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapChunkActorDataEntry, METADATA_PARAMS(nullptr, 0) }; // 485774211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapStreamingChunkActorData_Statics::NewProp_ActorEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapStreamingChunkActorData_Statics::NewProp_ActorEntries = { "ActorEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnapStreamingChunkActorData, ActorEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USnapStreamingChunkActorData_Statics::NewProp_ActorEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunkActorData_Statics::NewProp_ActorEntries_MetaData)) }; // 485774211
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapStreamingChunkActorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapStreamingChunkActorData_Statics::NewProp_ActorEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapStreamingChunkActorData_Statics::NewProp_ActorEntries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapStreamingChunkActorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapStreamingChunkActorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapStreamingChunkActorData_Statics::ClassParams = {
		&USnapStreamingChunkActorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnapStreamingChunkActorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunkActorData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnapStreamingChunkActorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapStreamingChunkActorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapStreamingChunkActorData()
	{
		if (!Z_Registration_Info_UClass_USnapStreamingChunkActorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapStreamingChunkActorData.OuterSingleton, Z_Construct_UClass_USnapStreamingChunkActorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapStreamingChunkActorData.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapStreamingChunkActorData>()
	{
		return USnapStreamingChunkActorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapStreamingChunkActorData);
	DEFINE_FUNCTION(ISnapSerializable::execOnSnapDataLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSnapDataLoaded_Implementation();
		P_NATIVE_END;
	}
	void ISnapSerializable::OnSnapDataLoaded()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSnapDataLoaded instead.");
	}
	void USnapSerializable::StaticRegisterNativesUSnapSerializable()
	{
		UClass* Class = USnapSerializable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSnapDataLoaded", &ISnapSerializable::execOnSnapDataLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USnapSerializable_OnSnapDataLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnapSerializable_OnSnapDataLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapSerializable_OnSnapDataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapSerializable, nullptr, "OnSnapDataLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnapSerializable_OnSnapDataLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapSerializable_OnSnapDataLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnapSerializable_OnSnapDataLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapSerializable_OnSnapDataLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapSerializable);
	UClass* Z_Construct_UClass_USnapSerializable_NoRegister()
	{
		return USnapSerializable::StaticClass();
	}
	struct Z_Construct_UClass_USnapSerializable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnapSerializable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnapSerializable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapSerializable_OnSnapDataLoaded, "OnSnapDataLoaded" }, // 4257440008
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnapSerializable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapActorSerialization.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnapSerializable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISnapSerializable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapSerializable_Statics::ClassParams = {
		&USnapSerializable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USnapSerializable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnapSerializable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnapSerializable()
	{
		if (!Z_Registration_Info_UClass_USnapSerializable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapSerializable.OuterSingleton, Z_Construct_UClass_USnapSerializable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnapSerializable.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapSerializable>()
	{
		return USnapSerializable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnapSerializable);
	static FName NAME_USnapSerializable_OnSnapDataLoaded = FName(TEXT("OnSnapDataLoaded"));
	void ISnapSerializable::Execute_OnSnapDataLoaded(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USnapSerializable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USnapSerializable_OnSnapDataLoaded);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISnapSerializable*)(O->GetNativeInterfaceAddress(USnapSerializable::StaticClass())))
		{
			I->OnSnapDataLoaded_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapActorSerialization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapActorSerialization_h_Statics::ScriptStructInfo[] = {
		{ FSnapChunkActorDataEntry::StaticStruct, Z_Construct_UScriptStruct_FSnapChunkActorDataEntry_Statics::NewStructOps, TEXT("SnapChunkActorDataEntry"), &Z_Registration_Info_UScriptStruct_SnapChunkActorDataEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapChunkActorDataEntry), 485774211U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapActorSerialization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnapStreamingChunkActorData, USnapStreamingChunkActorData::StaticClass, TEXT("USnapStreamingChunkActorData"), &Z_Registration_Info_UClass_USnapStreamingChunkActorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapStreamingChunkActorData), 3982792920U) },
		{ Z_Construct_UClass_USnapSerializable, USnapSerializable::StaticClass, TEXT("USnapSerializable"), &Z_Registration_Info_UClass_USnapSerializable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapSerializable), 582283218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapActorSerialization_h_3660764484(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapActorSerialization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapActorSerialization_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapActorSerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapActorSerialization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
