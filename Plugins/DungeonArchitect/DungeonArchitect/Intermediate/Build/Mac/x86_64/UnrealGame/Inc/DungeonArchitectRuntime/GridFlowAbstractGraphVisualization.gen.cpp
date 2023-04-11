// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowAbstractGraphVisualization() {}
// Cross Module References
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources();
	UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFDAbstractNodePreview_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFDAbstractNodePreview();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFDAbstractLink_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFDAbstractLink();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_NoRegister();
	DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AGridFlowAbstractGraphVisualizer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAbstractNodeVisualizerResources;
class UScriptStruct* FDAbstractNodeVisualizerResources::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAbstractNodeVisualizerResources.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAbstractNodeVisualizerResources.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAbstractNodeVisualizerResources"));
	}
	return Z_Registration_Info_UScriptStruct_DAbstractNodeVisualizerResources.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAbstractNodeVisualizerResources>()
{
	return FDAbstractNodeVisualizerResources::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SelectedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TextMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlaneMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAbstractNodeVisualizerResources>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAbstractNodeVisualizerResources, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_SelectedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_SelectedMaterial = { "SelectedMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAbstractNodeVisualizerResources, SelectedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_SelectedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_SelectedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_TextMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_TextMaterial = { "TextMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAbstractNodeVisualizerResources, TextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_TextMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_TextMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMaterial = { "BoundsMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAbstractNodeVisualizerResources, BoundsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_PlaneMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_PlaneMesh = { "PlaneMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAbstractNodeVisualizerResources, PlaneMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_PlaneMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_PlaneMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMesh = { "BoundsMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAbstractNodeVisualizerResources, BoundsMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_SelectedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_TextMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_PlaneMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewProp_BoundsMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DAbstractNodeVisualizerResources",
		sizeof(FDAbstractNodeVisualizerResources),
		alignof(FDAbstractNodeVisualizerResources),
		Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources()
	{
		if (!Z_Registration_Info_UScriptStruct_DAbstractNodeVisualizerResources.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAbstractNodeVisualizerResources.InnerSingleton, Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAbstractNodeVisualizerResources.InnerSingleton;
	}
	void UFDAbstractNodePreview::StaticRegisterNativesUFDAbstractNodePreview()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFDAbstractNodePreview);
	UClass* Z_Construct_UClass_UFDAbstractNodePreview_NoRegister()
	{
		return UFDAbstractNodePreview::StaticClass();
	}
	struct Z_Construct_UClass_UFDAbstractNodePreview_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRendererComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextRendererComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFDAbstractNodePreview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractNodePreview_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_NodeMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_NodeMeshComponent = { "NodeMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFDAbstractNodePreview, NodeMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_NodeMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_NodeMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMeshComponent = { "BoundsMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFDAbstractNodePreview, BoundsMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_TextRendererComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_TextRendererComponent = { "TextRendererComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFDAbstractNodePreview, TextRendererComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_TextRendererComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_TextRendererComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_DefaultMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_DefaultMaterialInstance = { "DefaultMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFDAbstractNodePreview, DefaultMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_DefaultMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_DefaultMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_SelectedMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_SelectedMaterialInstance = { "SelectedMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFDAbstractNodePreview, SelectedMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_SelectedMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_SelectedMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMaterialInstance = { "BoundsMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFDAbstractNodePreview, BoundsMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMaterialInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFDAbstractNodePreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_NodeMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_TextRendererComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_DefaultMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_SelectedMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFDAbstractNodePreview_Statics::NewProp_BoundsMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFDAbstractNodePreview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFDAbstractNodePreview>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFDAbstractNodePreview_Statics::ClassParams = {
		&UFDAbstractNodePreview::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFDAbstractNodePreview_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractNodePreview_Statics::PropPointers),
		0,
		0x04B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFDAbstractNodePreview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractNodePreview_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFDAbstractNodePreview()
	{
		if (!Z_Registration_Info_UClass_UFDAbstractNodePreview.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFDAbstractNodePreview.OuterSingleton, Z_Construct_UClass_UFDAbstractNodePreview_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFDAbstractNodePreview.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFDAbstractNodePreview>()
	{
		return UFDAbstractNodePreview::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFDAbstractNodePreview);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAbstractLinkVisualizerResources;
class UScriptStruct* FDAbstractLinkVisualizerResources::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAbstractLinkVisualizerResources.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAbstractLinkVisualizerResources.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources, Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAbstractLinkVisualizerResources"));
	}
	return Z_Registration_Info_UScriptStruct_DAbstractLinkVisualizerResources.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAbstractLinkVisualizerResources>()
{
	return FDAbstractLinkVisualizerResources::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HeadMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LinkMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAbstractLinkVisualizerResources>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LineMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAbstractLinkVisualizerResources, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_HeadMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_HeadMaterial = { "HeadMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAbstractLinkVisualizerResources, HeadMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_HeadMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_HeadMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LinkMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LinkMesh = { "LinkMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDAbstractLinkVisualizerResources, LinkMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LinkMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LinkMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_HeadMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewProp_LinkMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
		nullptr,
		&NewStructOps,
		"DAbstractLinkVisualizerResources",
		sizeof(FDAbstractLinkVisualizerResources),
		alignof(FDAbstractLinkVisualizerResources),
		Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources()
	{
		if (!Z_Registration_Info_UScriptStruct_DAbstractLinkVisualizerResources.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAbstractLinkVisualizerResources.InnerSingleton, Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DAbstractLinkVisualizerResources.InnerSingleton;
	}
	void UFDAbstractLink::StaticRegisterNativesUFDAbstractLink()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFDAbstractLink);
	UClass* Z_Construct_UClass_UFDAbstractLink_NoRegister()
	{
		return UFDAbstractLink::StaticClass();
	}
	struct Z_Construct_UClass_UFDAbstractLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFDAbstractLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractLink_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMesh = { "LineMesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFDAbstractLink, LineMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMaterialInstance = { "LineMaterialInstance", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFDAbstractLink, LineMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_HeadMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_HeadMaterialInstance = { "HeadMaterialInstance", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFDAbstractLink, HeadMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_HeadMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_HeadMaterialInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFDAbstractLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_LineMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFDAbstractLink_Statics::NewProp_HeadMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFDAbstractLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFDAbstractLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFDAbstractLink_Statics::ClassParams = {
		&UFDAbstractLink::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFDAbstractLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractLink_Statics::PropPointers),
		0,
		0x04B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFDAbstractLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFDAbstractLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFDAbstractLink()
	{
		if (!Z_Registration_Info_UClass_UFDAbstractLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFDAbstractLink.OuterSingleton, Z_Construct_UClass_UFDAbstractLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFDAbstractLink.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFDAbstractLink>()
	{
		return UFDAbstractLink::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFDAbstractLink);
	void AGridFlowAbstractGraphVisualizer::StaticRegisterNativesAGridFlowAbstractGraphVisualizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridFlowAbstractGraphVisualizer);
	UClass* Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_NoRegister()
	{
		return AGridFlowAbstractGraphVisualizer::StaticClass();
	}
	struct Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DungeonID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAlignToLevelViewport_MetaData[];
#endif
		static void NewProp_bAutoAlignToLevelViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAlignToLevelViewport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_DungeonID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_DungeonID = { "DungeonID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridFlowAbstractGraphVisualizer, DungeonID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_DungeonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_DungeonID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridFlowAbstractGraphVisualizer, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_bAutoAlignToLevelViewport_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/AbstractGraph/Utils/GridFlowAbstractGraphVisualization.h" },
	};
#endif
	void Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_bAutoAlignToLevelViewport_SetBit(void* Obj)
	{
		((AGridFlowAbstractGraphVisualizer*)Obj)->bAutoAlignToLevelViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_bAutoAlignToLevelViewport = { "bAutoAlignToLevelViewport", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGridFlowAbstractGraphVisualizer), &Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_bAutoAlignToLevelViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_bAutoAlignToLevelViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_bAutoAlignToLevelViewport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_DungeonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_SceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::NewProp_bAutoAlignToLevelViewport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridFlowAbstractGraphVisualizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::ClassParams = {
		&AGridFlowAbstractGraphVisualizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::PropPointers),
		0,
		0x049002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridFlowAbstractGraphVisualizer()
	{
		if (!Z_Registration_Info_UClass_AGridFlowAbstractGraphVisualizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridFlowAbstractGraphVisualizer.OuterSingleton, Z_Construct_UClass_AGridFlowAbstractGraphVisualizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridFlowAbstractGraphVisualizer.OuterSingleton;
	}
	template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<AGridFlowAbstractGraphVisualizer>()
	{
		return AGridFlowAbstractGraphVisualizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridFlowAbstractGraphVisualizer);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Utils_GridFlowAbstractGraphVisualization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Utils_GridFlowAbstractGraphVisualization_h_Statics::ScriptStructInfo[] = {
		{ FDAbstractNodeVisualizerResources::StaticStruct, Z_Construct_UScriptStruct_FDAbstractNodeVisualizerResources_Statics::NewStructOps, TEXT("DAbstractNodeVisualizerResources"), &Z_Registration_Info_UScriptStruct_DAbstractNodeVisualizerResources, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAbstractNodeVisualizerResources), 1791532560U) },
		{ FDAbstractLinkVisualizerResources::StaticStruct, Z_Construct_UScriptStruct_FDAbstractLinkVisualizerResources_Statics::NewStructOps, TEXT("DAbstractLinkVisualizerResources"), &Z_Registration_Info_UScriptStruct_DAbstractLinkVisualizerResources, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAbstractLinkVisualizerResources), 4097658595U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Utils_GridFlowAbstractGraphVisualization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFDAbstractNodePreview, UFDAbstractNodePreview::StaticClass, TEXT("UFDAbstractNodePreview"), &Z_Registration_Info_UClass_UFDAbstractNodePreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFDAbstractNodePreview), 3168209410U) },
		{ Z_Construct_UClass_UFDAbstractLink, UFDAbstractLink::StaticClass, TEXT("UFDAbstractLink"), &Z_Registration_Info_UClass_UFDAbstractLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFDAbstractLink), 4168400841U) },
		{ Z_Construct_UClass_AGridFlowAbstractGraphVisualizer, AGridFlowAbstractGraphVisualizer::StaticClass, TEXT("AGridFlowAbstractGraphVisualizer"), &Z_Registration_Info_UClass_AGridFlowAbstractGraphVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridFlowAbstractGraphVisualizer), 5105566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Utils_GridFlowAbstractGraphVisualization_h_981819856(TEXT("/Script/DungeonArchitectRuntime"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Utils_GridFlowAbstractGraphVisualization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Utils_GridFlowAbstractGraphVisualization_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Utils_GridFlowAbstractGraphVisualization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_AbstractGraph_Utils_GridFlowAbstractGraphVisualization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
