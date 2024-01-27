#include "ClownSpawner.h"

#include "ClownCharacterClass.h"

AClownSpawner::AClownSpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	Rooty = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DasRoot"));
	SetRootComponent(Rooty);
}

void AClownSpawner::BeginPlay()
{
	Super::BeginPlay();
}

void AClownSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AClownSpawner::SpawnClowns()
{
	FActorSpawnParameters SpawnParam;
	SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	Actorclown = GetWorld()->SpawnActor<AActor>(ClownsToSpawn, GetActorTransform(), SpawnParam);
}