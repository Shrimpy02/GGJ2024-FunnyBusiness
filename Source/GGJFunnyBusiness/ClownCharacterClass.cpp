#include "ClownCharacterClass.h"

AClownCharacterClass::AClownCharacterClass()
{
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

void AClownCharacterClass::BeginPlay()
{
	Super::BeginPlay();
	
}

void AClownCharacterClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
