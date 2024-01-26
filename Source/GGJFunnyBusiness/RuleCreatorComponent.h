
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RuleCreatorComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GGJFUNNYBUSINESS_API URuleCreatorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	URuleCreatorComponent();

	UP
	TArray{ int } Clothes;
	TArray


protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
