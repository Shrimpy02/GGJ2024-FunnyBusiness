// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClownDebugClass.generated.h"

UCLASS()
class GGJFUNNYBUSINESS_API AClownDebugClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AClownDebugClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	int32 clownHatInt = 0;
	UPROPERTY(BlueprintReadOnly)
	int32 clownTorsoInt = 0;
	UPROPERTY(BlueprintReadOnly)
	int32 clownPantsInt = 0;
};
