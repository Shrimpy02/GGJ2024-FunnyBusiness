// Fill out your copyright notice in the Description page of Project Settings.

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
	// Sets default values for this pawn's properties
	AClownCharacterClass();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

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
