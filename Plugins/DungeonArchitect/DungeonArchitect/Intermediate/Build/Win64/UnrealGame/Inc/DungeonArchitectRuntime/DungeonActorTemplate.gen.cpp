// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonActorTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonActorTemplate() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonActorTemplate_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonActorTemplate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UDungeonActorTemplate::StaticRegisterNativesUDungeonActorTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonActorTemplate);
	UClass* Z_Construct_UClass_UDungeonActorTemplate_NoRegister()
	{
		return UDungeonActorTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDungeonActorTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDungeonActorTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonActorTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Core/Actors/DungeonActorTemplate.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonActorTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ClassTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonActorTemplate.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ClassTemplate = { "ClassTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonActorTemplate, ClassTemplate), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ClassTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ClassTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ActorTemplate_MetaData[] = {
		{ "Comment", "/** Property to point to the template child actor for details panel purposes */" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonActorTemplate.h" },
		{ "ToolTip", "Property to point to the template child actor for details panel purposes" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ActorTemplate = { "ActorTemplate", nullptr, (EPropertyFlags)0x0010000000000008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDungeonActorTemplate, ActorTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ActorTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ActorTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonActorTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ClassTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonActorTemplate_Statics::NewProp_ActorTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDungeonActorTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonActorTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonActorTemplate_Statics::ClassParams = {
		&UDungeonActorTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDungeonActorTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonActorTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDungeonActorTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonActorTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDungeonActorTemplate()
	{
		if (!Z_Registration_Info_UClass_UDungeonActorTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonActorTemplate.OuterSingleton, Z_Construct_UClass_UDungeonActorTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDungeonActorTemplate.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonActorTemplate>()
	{
		return UDungeonActorTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonActorTemplate);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonActorTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonActorTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonActorTemplate, UDungeonActorTemplate::StaticClass, TEXT("UDungeonActorTemplate"), &Z_Registration_Info_UClass_UDungeonActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonActorTemplate), 4221793031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonActorTemplate_h_867514821(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonActorTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonActorTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
