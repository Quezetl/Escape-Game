//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "Interfaces/Interface_CollisionDataProvider.h"
#include "PhysicsEngine/ConvexElem.h"
#include "DungeonProceduralMesh.generated.h"

/**
*	Struct used to specify a tangent vector for a vertex
*	The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.
*/
USTRUCT(BlueprintType)
struct DUNGEONARCHITECTRUNTIME_API FDAProcMeshTangent
{
	GENERATED_USTRUCT_BODY()

	/** Direction of X tangent for this vertex */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tangent)
	FVector TangentX;

	/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tangent)
	bool bFlipTangentY;

	FDAProcMeshTangent()
		: TangentX(1.f, 0.f, 0.f)
		, bFlipTangentY(false)
	{}

	FDAProcMeshTangent(float X, float Y, float Z)
		: TangentX(X, Y, Z)
		, bFlipTangentY(false)
	{}

	FDAProcMeshTangent(FVector InTangentX, bool bInFlipTangentY)
		: TangentX(InTangentX)
		, bFlipTangentY(bInFlipTangentY)
	{}
};

/** One vertex for the procedural mesh, used for storing data internally */
USTRUCT(BlueprintType)
struct DUNGEONARCHITECTRUNTIME_API FDAProcMeshVertex
{
	GENERATED_USTRUCT_BODY()

	/** Vertex position */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector Position;

	/** Vertex normal */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector Normal;

	/** Vertex tangent */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FDAProcMeshTangent Tangent;

	/** Vertex color */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FColor Color;

	/** Vertex texture co-ordinate */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector2D UV0;

	/** Vertex texture co-ordinate */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector2D UV1;

	/** Vertex texture co-ordinate */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector2D UV2;

	/** Vertex texture co-ordinate */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector2D UV3;


	FDAProcMeshVertex()
		: Position(0.f, 0.f, 0.f)
		, Normal(0.f, 0.f, 1.f)
		, Tangent(FVector(1.f, 0.f, 0.f), false)
		, Color(255, 255, 255)
		, UV0(0.f, 0.f)
		, UV1(0.f, 0.f)
		, UV2(0.f, 0.f)
		, UV3(0.f, 0.f)
	{}
};

/** One section of the procedural mesh. Each material has its own section. */
USTRUCT()
struct DUNGEONARCHITECTRUNTIME_API FDAProcMeshSection
{
	GENERATED_USTRUCT_BODY()

	/** Vertex buffer for this section */
	UPROPERTY()
	TArray<FDAProcMeshVertex> ProcVertexBuffer;

	/** Index buffer for this section */
	UPROPERTY()
	TArray<uint32> ProcIndexBuffer;
	/** Local bounding box of section */
	UPROPERTY()
	FBox SectionLocalBox;

	/** Should we build collision data for triangles in this section */
	UPROPERTY()
	bool bEnableCollision;

	/** Should we display this section */
	UPROPERTY()
	bool bSectionVisible;

	UPROPERTY()
	int32 PrimitiveType;

	FDAProcMeshSection();

	/** Reset this section, clear all mesh info. */
	void Reset();
};


class FPrimitiveSceneProxy;

UCLASS(hidecategories = (Object, LOD), meta = (BlueprintSpawnableComponent), ClassGroup = Rendering)
class DUNGEONARCHITECTRUNTIME_API UDAProcMeshComponent : public UMeshComponent, public IInterface_CollisionDataProvider
{
	GENERATED_UCLASS_BODY()

	/**
		*	Create/replace a section for this procedural mesh component.
		*	This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.
		*	@param	SectionIndex		Index of the section to create or replace.
		*	@param	Vertices			Vertex buffer of all vertex positions to use for this mesh section.
		*	@param	Triangles			Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.
		*	@param	Normals				Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.
		*	@param	UV0					Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.
		*	@param	VertexColors		Optional array of colors for each vertex. If supplied, must be same length as Vertices array.
		*	@param	Tangents			Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.
		*	@param	bCreateCollision	Indicates whether collision should be created for this section. This adds significant cost.
		*/
	UFUNCTION(BlueprintCallable, Category = "Components|ProceduralMesh", meta = (DeprecatedFunction, DeprecationMessage = "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.", DisplayName = "Create Mesh Section FColor", AutoCreateRefTerm = "Normals,UV0,VertexColors,Tangents"))
	void CreateMeshSection(int32 SectionIndex, const TArray<FDAProcMeshVertex>& Vertices, const TArray<int32>& Indices, int32 PrimitiveType, bool bCreateCollision);

	/** Clear a section of the procedural mesh. Other sections do not change index. */
	UFUNCTION(BlueprintCallable, Category = "Components|ProceduralMesh")
	void ClearMeshSection(int32 SectionIndex);

	/** Clear all mesh sections and reset to empty state */
	UFUNCTION(BlueprintCallable, Category = "Components|ProceduralMesh")
	void ClearAllMeshSections();

	/** Control visibility of a particular section */
	UFUNCTION(BlueprintCallable, Category = "Components|ProceduralMesh")
	void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);

	/** Returns whether a particular section is currently visible */
	UFUNCTION(BlueprintCallable, Category = "Components|ProceduralMesh")
	bool IsMeshSectionVisible(int32 SectionIndex) const;

	/** Returns number of sections currently created for this component */
	UFUNCTION(BlueprintCallable, Category = "Components|ProceduralMesh")
	int32 GetNumSections() const;

	/** Add simple collision convex to this component */
	UFUNCTION(BlueprintCallable, Category = "Components|ProceduralMesh")
	void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);

	/** Add simple collision convex to this component */
	UFUNCTION(BlueprintCallable, Category = "Components|ProceduralMesh")
	void ClearCollisionConvexMeshes();

	/** Function to replace _all_ simple collision in one go */
	void SetCollisionConvexMeshes(const TArray< TArray<FVector> >& ConvexMeshes);

	//~ Begin Interface_CollisionDataProvider Interface
	virtual bool GetPhysicsTriMeshData(struct FTriMeshCollisionData* CollisionData, bool InUseAllTriData) override;
	virtual bool ContainsPhysicsTriMeshData(bool InUseAllTriData) const override;
	virtual bool WantsNegXTriMesh() override{ return false; }
	//~ End Interface_CollisionDataProvider Interface

	/** 
	 *	Controls whether the complex (Per poly) geometry should be treated as 'simple' collision. 
	 *	Should be set to false if this component is going to be given simple collision and simulated.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Procedural Mesh")
	bool bUseComplexAsSimpleCollision;

	/**
	*	Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Procedural Mesh")
	bool bUseAsyncCooking;

	/** Collision data */
	UPROPERTY(Instanced)
	class UBodySetup* MeshBodySetup;

	/** 
	 *	Get pointer to internal data for one section of this procedural mesh component. 
	 *	Note that pointer will becomes invalid if sections are added or removed.
	 */
	FDAProcMeshSection* GetMeshSection(int32 SectionIndex);

	/** Replace a section with new section geometry */
	void SetMeshSection(int32 SectionIndex, const FDAProcMeshSection& Section);

	//~ Begin UPrimitiveComponent Interface.
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	virtual class UBodySetup* GetBodySetup() override;
	virtual UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex) const override;
	//~ End UPrimitiveComponent Interface.

	//~ Begin UMeshComponent Interface.
	virtual int32 GetNumMaterials() const override;
	//~ End UMeshComponent Interface.

	//~ Begin UObject Interface
	virtual void PostLoad() override;
	//~ End UObject Interface.


private:
	//~ Begin USceneComponent Interface.
	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
	//~ Begin USceneComponent Interface.


	/** Update LocalBounds member from the local box of each section */
	void UpdateLocalBounds();
	/** Ensure MeshBodySetup is allocated and configured */
	void CreateMeshBodySetup();
	/** Mark collision data as dirty, and re-create on instance if necessary */
	void UpdateCollision();
	/** Once async physics cook is done, create needed state */
	void FinishPhysicsAsyncCook(bool bSuccess, UBodySetup* FinishedBodySetup);

	/** Helper to create new body setup objects */
	UBodySetup* CreateBodySetupHelper();

	/** Array of sections of mesh */
	UPROPERTY(Transient)
	TArray<FDAProcMeshSection> MeshSections;

	/** Convex shapes used for simple collision */
	UPROPERTY(Transient)
	TArray<FKConvexElem> CollisionConvexElems;

	/** Local space bounds of mesh */
	UPROPERTY(Transient)
	FBoxSphereBounds LocalBounds;
	
	/** Queue for async body setups that are being cooked */
	UPROPERTY(Transient)
	TArray<UBodySetup*> AsyncBodySetupQueue;

	friend class FDAProcMeshSceneProxy;
};



