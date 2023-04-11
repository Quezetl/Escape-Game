//$ Copyright 2015-22, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/ThemeEngine/SceneProviders/PooledDungeonSceneProvider.h"

class ADungeonInstancedMeshActor;

struct InstanceMeshContext : public FGCObject {
    InstanceMeshContext() : InstancedActor(nullptr), Dungeon(nullptr) {
    }

    ADungeonInstancedMeshActor* InstancedActor = nullptr;
    ADungeon* Dungeon = nullptr;
    ULevel* LevelOverride = nullptr;

    virtual void AddReferencedObjects(FReferenceCollector& Collector) override;
    virtual FString GetReferencerName() const override;
};


/** Pools the actors in the scene and reuses them if possible, while rebuilding */
class DUNGEONARCHITECTRUNTIME_API FInstancedDungeonSceneProvider : public FPooledDungeonSceneProvider {
public:
    FInstancedDungeonSceneProvider(ADungeon* pDungeon, UWorld* pWorld) : FPooledDungeonSceneProvider(pDungeon, pWorld) {
    }

    virtual ~FInstancedDungeonSceneProvider() {
    }

    virtual void OnDungeonBuildStart() override;
    virtual void OnDungeonBuildStop() override;
    virtual void AddStaticMesh(UDungeonMesh* Mesh, const FDungeonSceneProviderContext& SceneProviderContext) override;

private:
    TSharedPtr<InstanceMeshContext> Context;

};

