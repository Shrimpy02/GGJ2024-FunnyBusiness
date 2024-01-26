// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Camera/CameraComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DaRoot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rooty"));
	SetRootComponent(DaRoot);

	DaCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Cammy"));
	DaCamera->SetRelativeLocation(FVector(-380, 0, 160));
	DaCamera->SetProjectionMode(ECameraProjectionMode::Orthographic);
	DaCamera->OrthoWidth = 512;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

