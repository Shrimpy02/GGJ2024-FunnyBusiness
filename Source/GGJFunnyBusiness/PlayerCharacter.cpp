// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"

#include "Camera/CameraComponent.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	DaRoot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rooty"));
	SetRootComponent(DaRoot);

	DaCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Cammy"));
	DaCamera->SetRelativeLocation(FVector(-380, 0, 160));
	DaCamera->SetProjectionMode(ECameraProjectionMode::Orthographic);
	DaCamera->OrthoWidth = 512;
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}