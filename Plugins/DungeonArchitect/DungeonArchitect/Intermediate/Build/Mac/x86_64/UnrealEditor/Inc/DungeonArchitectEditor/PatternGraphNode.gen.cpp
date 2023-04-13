// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternGraphNode() {}
// Cross Module References
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphNode_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphConditionNode_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphConditionNode();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphActionNode_NoRegister();
	DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphActionNode();
// End Cross Module References
	void UMGPatternGraphNode::StaticRegisterNativesUMGPatternGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternGraphNode);
	UClass* Z_Construct_UClass_UMGPatternGraphNode_NoRegister()
	{
		return UMGPatternGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternGraphNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGPatternGraphNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPatternGraphNode, NodeTemplate), Z_Construct_UClass_UMGPatternScriptNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMGPatternGraphNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternGraphNode_Statics::NewProp_NodeTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternGraphNode_Statics::ClassParams = {
		&UMGPatternGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMGPatternGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphNode_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternGraphNode()
	{
		if (!Z_Registration_Info_UClass_UMGPatternGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternGraphNode.OuterSingleton, Z_Construct_UClass_UMGPatternGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternGraphNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGPatternGraphNode>()
	{
		return UMGPatternGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternGraphNode);
	void UMGPatternGraphConditionNode::StaticRegisterNativesUMGPatternGraphConditionNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternGraphConditionNode);
	UClass* Z_Construct_UClass_UMGPatternGraphConditionNode_NoRegister()
	{
		return UMGPatternGraphConditionNode::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternGraphConditionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternGraphConditionNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::ClassParams = {
		&UMGPatternGraphConditionNode::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternGraphConditionNode()
	{
		if (!Z_Registration_Info_UClass_UMGPatternGraphConditionNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternGraphConditionNode.OuterSingleton, Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternGraphConditionNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGPatternGraphConditionNode>()
	{
		return UMGPatternGraphConditionNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternGraphConditionNode);
	void UMGPatternGraphActionNode::StaticRegisterNativesUMGPatternGraphActionNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternGraphActionNode);
	UClass* Z_Construct_UClass_UMGPatternGraphActionNode_NoRegister()
	{
		return UMGPatternGraphActionNode::StaticClass();
	}
	struct Z_Construct_UClass_UMGPatternGraphActionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGPatternGraphActionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMGPatternGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGPatternGraphActionNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGPatternGraphActionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternGraphActionNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternGraphActionNode_Statics::ClassParams = {
		&UMGPatternGraphActionNode::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMGPatternGraphActionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphActionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGPatternGraphActionNode()
	{
		if (!Z_Registration_Info_UClass_UMGPatternGraphActionNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternGraphActionNode.OuterSingleton, Z_Construct_UClass_UMGPatternGraphActionNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMGPatternGraphActionNode.OuterSingleton;
	}
	template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGPatternGraphActionNode>()
	{
		return UMGPatternGraphActionNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternGraphActionNode);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternGraphNode, UMGPatternGraphNode::StaticClass, TEXT("UMGPatternGraphNode"), &Z_Registration_Info_UClass_UMGPatternGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternGraphNode), 4108604615U) },
		{ Z_Construct_UClass_UMGPatternGraphConditionNode, UMGPatternGraphConditionNode::StaticClass, TEXT("UMGPatternGraphConditionNode"), &Z_Registration_Info_UClass_UMGPatternGraphConditionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternGraphConditionNode), 4263831381U) },
		{ Z_Construct_UClass_UMGPatternGraphActionNode, UMGPatternGraphActionNode::StaticClass, TEXT("UMGPatternGraphActionNode"), &Z_Registration_Info_UClass_UMGPatternGraphActionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternGraphActionNode), 174560066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphNode_h_3980567088(TEXT("/Script/DungeonArchitectEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
