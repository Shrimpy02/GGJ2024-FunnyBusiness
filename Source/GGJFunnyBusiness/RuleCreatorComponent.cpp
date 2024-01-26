
// Includes
#include "RuleCreatorComponent.h"


URuleCreatorComponent::URuleCreatorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void URuleCreatorComponent::BeginPlay()
{
	Super::BeginPlay();

	GenerateHats();

	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, ClownHats[FMath::RandRange(0, ClownHats.Num())].ToString());
}

void URuleCreatorComponent::GenerateHats()
{
	FName testText1 = "Red top hat";
	ClownHats.Push(testText1);

	FName testText2 = "subraro";
	ClownHats.Push(testText2);

	FName testText3 = "Bowler hat";
	ClownHats.Push(testText3);

	FName testText4 = "Blue tophat";
	ClownHats.Push(testText4);

	FName testText5 = "helmet";
	ClownHats.Push(testText5);
}

void URuleCreatorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

