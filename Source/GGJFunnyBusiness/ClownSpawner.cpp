#include "ClownSpawner.h"

#include "ClownCharacterClass.h"

AClownSpawner::AClownSpawner()
{
	PrimaryActorTick.bCanEverTick = true;

	Rooty = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DasRoot"));
	SetRootComponent(Rooty);

	currentHealth = maxHealth;
}

void AClownSpawner::BeginPlay()
{
	Super::BeginPlay();
}

void AClownSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AClownSpawner::SpawnClowns(AClownCharacterClass* clownToDeploy)
{
	currentClown = clownToDeploy;
	Actorclown = currentClown;
	canSlamButton = true;
	FActorSpawnParameters SpawnParam;
	SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	Actorclown = GetWorld()->SpawnActor<AActor>(ClownsToSpawn, GetActorTransform(), SpawnParam);
}

bool AClownSpawner::PressDenyButton()
{
	UE_LOG(LogTemp, Warning, TEXT("Hitting button"));
	canSlamButton = false;
	//slammingFist->PlayAnimation()

	// Used for random deny animations further along
	int32 animationSelector = FMath::RandRange(0, 1);

	switch (animationSelector) {
	case 0:
		break;
	case 1:
		break;
	default:
		break;
	}

	// check if clown has one of the illegal items
	if (IsClownIllegal()) {
		TotalScore++;
		UE_LOG(LogTemp, Warning, TEXT("%i"), TotalScore);
		Actorclown->Destroy();
		return true;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("%i"), TotalScore);
		Actorclown->Destroy();
		currentHealth--;
		if (currentHealth <= 0) {
			PlayerLose();
		}
		return false;
	}
}

void AClownSpawner::ClownPassingBy()
{
	// check if clown has one of the illegal items
	if (IsClownIllegal()) {
		UE_LOG(LogTemp, Warning, TEXT("%i"), TotalScore);
		currentHealth--;
		if (currentHealth <= 0) {
			PlayerLose();
		}
	}
	else {
		TotalScore++;
		UE_LOG(LogTemp, Warning, TEXT("%i"), TotalScore);
	}
	Actorclown->Destroy();
}

bool AClownSpawner::IsClownIllegal()
{
	return true;
}
