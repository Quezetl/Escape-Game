// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_DungeonActorTemplate() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorBase();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UEdGraphNode_DungeonActorTemplate::StaticRegisterNativesUEdGraphNode_DungeonActorTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_DungeonActorTemplate);
	UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_NoRegister()
	{
		return UEdGraphNode_DungeonActorTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics
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
	UObject* (*const Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode_DungeonActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorTemplate.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ClassTemplate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dungeon" },
		{ "ForceRebuildProperty", "ActorTemplate" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorTemplate.h" },
		{ "OnlyPlaceable", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ClassTemplate = { "ClassTemplate", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorTemplate, ClassTemplate), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ClassTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ClassTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ActorTemplate_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Property to point to the template child actor for details panel purposes */" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonActorTemplate.h" },
		{ "ShowInnerProperties", "" },
		{ "ToolTip", "Property to point to the template child actor for details panel purposes" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ActorTemplate = { "ActorTemplate", nullptr, (EPropertyFlags)0x0010000000030009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_DungeonActorTemplate, ActorTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ActorTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ActorTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ClassTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::NewProp_ActorTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_DungeonActorTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::ClassParams = {
		&UEdGraphNode_DungeonActorTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_DungeonActorTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_DungeonActorTemplate.OuterSingleton, Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_DungeonActorTemplate.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_DungeonActorTemplate>()
	{
		return UEdGraphNode_DungeonActorTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_DungeonActorTemplate);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonActorTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonActorTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_DungeonActorTemplate, UEdGraphNode_DungeonActorTemplate::StaticClass, TEXT("UEdGraphNode_DungeonActorTemplate"), &Z_Registration_Info_UClass_UEdGraphNode_DungeonActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_DungeonActorTemplate), 1021740108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonActorTemplate_h_2646216161(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonActorTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonActorTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
