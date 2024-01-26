// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;

UCLASS()
class GGJFUNNYBUSINESS_API APlayerCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* DaRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* DaCamera;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
