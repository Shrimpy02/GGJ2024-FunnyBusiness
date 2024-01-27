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

	UPROPERTY(BlueprintReadWrite)
	AActor* slammingFist;

	UPROPERTY(BlueprintReadOnly)
	bool canSlamButton = true;

	UFUNCTION(BlueprintCallable)
	bool PressDenyButton();

	UFUNCTION(BlueprintCallable)
	void DeployNewClown(class AClownDebugClass* clownToDeploy);

	void ClownPassedBy();

	bool IsClownIllegal();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AClownDebugClass* currentClown;
};
