// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClownSpawner.generated.h"

class AClownCharacterClass;

UCLASS()
class GGJFUNNYBUSINESS_API AClownSpawner : public AActor
{
	GENERATED_BODY()

public:
	AClownSpawner();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Rooty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AClownCharacterClass> ClownsToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Actorclown;

	virtual void Tick(float DeltaTime) override;	

	UFUNCTION(BlueprintCallable)
	void SpawnClowns();

protected:
	virtual void BeginPlay() override;
};
