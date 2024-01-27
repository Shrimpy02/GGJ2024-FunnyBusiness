// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Player_Control_Pawn.generated.h"

UCLASS()
class GGJFUNNYBUSINESS_API APlayer_Control_Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayer_Control_Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadOnly)
	int32 TotalScore = 0;

	UPROPERTY(EditAnywhere)
	int32 maxHealth = 3;

	UPROPERTY(EditAnywhere)
	int32 currentHealth;

	UPROPERTY(BlueprintReadWrite)
	AActor* slammingFist;

	UPROPERTY(BlueprintReadOnly)
	bool canSlamButton = false;

	UFUNCTION(BlueprintCallable)
	bool PressDenyButton();

	UFUNCTION(BlueprintCallable)
	void DeployNewClown(class AClownCharacterClass* clownToDeploy);

	// Called by blueprint. Triggers when the clown reaches the end of the conveyor belt, or when the player presses the allow button
	UFUNCTION(BlueprintCallable)
	void ClownPassedBy();

	bool IsClownIllegal();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayerLose();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AClownCharacterClass* currentClown;
};
