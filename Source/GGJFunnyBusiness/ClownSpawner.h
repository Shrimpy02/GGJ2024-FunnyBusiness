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

	UPROPERTY(BlueprintReadOnly)
	int32 TotalScore = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 maxHealth = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 currentHealth;

	UPROPERTY(BlueprintReadWrite)
	AActor* slammingFist;

	UPROPERTY(BlueprintReadOnly)
	bool canSlamButton = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Rooty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AClownCharacterClass> ClownsToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Actorclown;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SpawnClowns(AClownCharacterClass* clownToDeploy);

	UFUNCTION(BlueprintCallable)
	bool PressDenyButton();

	UFUNCTION(BlueprintCallable)
	void ClownPassingBy();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayerLose();

	bool IsClownIllegal();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AClownCharacterClass* currentClown;

protected:
	virtual void BeginPlay() override;
};
