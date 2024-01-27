#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ClownCharacterClass.generated.h"

class UBoxComponent;

UCLASS()
class GGJFUNNYBUSINESS_API AClownCharacterClass : public APawn
{
	GENERATED_BODY()

public:
	AClownCharacterClass();

	virtual void Tick(float DeltaTime) override;

	// Meshes
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* TheRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* BodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* FaceMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* HatMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
