// Fill out your copyright notice in the Description page of Project Settings.

#include "ClownCharacterClass.h"

// Sets default values
AClownCharacterClass::AClownCharacterClass()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TheRoot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rooty"));
	SetRootComponent(TheRoot);
	TheRoot->SetVisibility(false);
	TheRoot->SetRelativeScale3D(FVector(0.8, 0.8, 0.8));

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	BodyMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	BodyMesh->SetRelativeRotation(FRotator(90, 0, 0));

	FaceMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Face"));
	FaceMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	FaceMesh->SetRelativeLocation(FVector(0, 0, 85));
	FaceMesh->SetRelativeScale3D(FVector(0.7, 0.7, 0.7));
	FaceMesh->SetRelativeRotation(FRotator(90, 0, 0));

	HatMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hat"));
	HatMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	HatMesh->SetRelativeLocation(FVector(0, 0, 135));
	HatMesh->SetRelativeScale3D(FVector(0.3, 0.3, 0.3));
	HatMesh->SetRelativeRotation(FRotator(90, 0, 0));

}

// Called when the game starts or when spawned
void AClownCharacterClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClownCharacterClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AClownCharacterClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}