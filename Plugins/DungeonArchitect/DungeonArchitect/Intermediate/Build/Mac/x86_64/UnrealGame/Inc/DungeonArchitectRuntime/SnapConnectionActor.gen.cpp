// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionActor() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ASnapConnectionActor_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ASnapConnectionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASnapConnectionActor::execGetSpawnedInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSpawnedInstances();
		P_NATIVE_END;
	}
	void ASnapConnectionActor::StaticRegisterNativesASnapConnectionActor()
	{
		UClass* Class = ASnapConnectionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnedInstances", &ASnapConnectionActor::execGetSpawnedInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics
	{
		struct SnapConnectionActor_eventGetSpawnedInstances_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnapConnectionActor_eventGetSpawnedInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnapConnectionActor, nullptr, "GetSpawnedInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::SnapConnectionActor_eventGetSpawnedInstances_Parms), Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnapConnectionActor);
	UClass* Z_Construct_UClass_ASnapConnectionActor_NoRegister()
	{
		return ASnapConnectionActor::StaticClass();
	}
	struct Z_Construct_UClass_ASnapConnectionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionId;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorSpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorSpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionConstraintSpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionConstraintSpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintDebugDecal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintDebugDecal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconConstraintMagnet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconConstraintMagnet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconConstraintPlugMale_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconConstraintPlugMale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconConstraintPlugFemale_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconConstraintPlugFemale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDebugDecal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialDebugDecal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDebugDecalInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialDebugDecalInstance;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnapConnectionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnapConnectionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnapConnectionActor_GetSpawnedInstances, "GetSpawnedInstances" }, // 762484294
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionComponent = { "ConnectionComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, ConnectionComponent), Z_Construct_UClass_USnapConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, ConnectionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionId_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_DoorSpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_DoorSpriteComponent = { "DoorSpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, DoorSpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_DoorSpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_DoorSpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionConstraintSpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionConstraintSpriteComponent = { "ConnectionConstraintSpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, ConnectionConstraintSpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionConstraintSpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionConstraintSpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConstraintDebugDecal_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConstraintDebugDecal = { "ConstraintDebugDecal", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, ConstraintDebugDecal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConstraintDebugDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConstraintDebugDecal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintMagnet_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintMagnet = { "IconConstraintMagnet", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, IconConstraintMagnet), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintMagnet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintMagnet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugMale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugMale = { "IconConstraintPlugMale", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, IconConstraintPlugMale), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugMale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugMale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugFemale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugFemale = { "IconConstraintPlugFemale", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, IconConstraintPlugFemale), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugFemale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugFemale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecal = { "MaterialDebugDecal", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, MaterialDebugDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecalInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecalInstance = { "MaterialDebugDecalInstance", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnapConnectionActor, MaterialDebugDecalInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecalInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecalInstance_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnapConnectionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionId,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_DoorSpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConnectionConstraintSpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ConstraintDebugDecal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_ArrowComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintMagnet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugMale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_IconConstraintPlugFemale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapConnectionActor_Statics::NewProp_MaterialDebugDecalInstance,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnapConnectionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnapConnectionActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnapConnectionActor_Statics::ClassParams = {
		&ASnapConnectionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnapConnectionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnapConnectionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnapConnectionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnapConnectionActor()
	{
		if (!Z_Registration_Info_UClass_ASnapConnectionActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnapConnectionActor.OuterSingleton, Z_Construct_UClass_ASnapConnectionActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnapConnectionActor.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ASnapConnectionActor>()
	{
		return ASnapConnectionActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnapConnectionActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnapConnectionActor, ASnapConnectionActor::StaticClass, TEXT("ASnapConnectionActor"), &Z_Registration_Info_UClass_ASnapConnectionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnapConnectionActor), 594892034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionActor_h_4080057297(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
