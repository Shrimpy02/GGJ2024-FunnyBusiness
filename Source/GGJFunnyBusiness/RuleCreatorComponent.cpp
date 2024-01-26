
// Includes
#include "RuleCreatorComponent.h"

URuleCreatorComponent::URuleCreatorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void URuleCreatorComponent::BeginPlay()
{
	Super::BeginPlay();
}

void URuleCreatorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

