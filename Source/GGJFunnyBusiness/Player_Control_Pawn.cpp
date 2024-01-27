// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Control_Pawn.h"
#include "ClownDebugClass.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
APlayer_Control_Pawn::APlayer_Control_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer_Control_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_Control_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer_Control_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool APlayer_Control_Pawn::PressDenyButton()
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
		currentClown->Destroy();
		return true;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("%i"), TotalScore);
		currentClown->Destroy();
		return false;
	}
}

void APlayer_Control_Pawn::DeployNewClown(AClownDebugClass* clownToDeploy)
{
	currentClown = clownToDeploy;
	canSlamButton = true;
}

void APlayer_Control_Pawn::ClownPassedBy()
{
	// check if clown has one of the illegal items
	if (IsClownIllegal()) {
		UE_LOG(LogTemp, Warning, TEXT("%i"), TotalScore);
	}
	else {
		TotalScore++;
		UE_LOG(LogTemp, Warning, TEXT("%i"), TotalScore);
	}
	currentClown->Destroy();
}

bool APlayer_Control_Pawn::IsClownIllegal()
{
	// Get rules here. If any of the illegal items matches the clown's items, return true.
	if (currentClown->clownHatInt == 1) {
		return true;
	}
	return false;
}
