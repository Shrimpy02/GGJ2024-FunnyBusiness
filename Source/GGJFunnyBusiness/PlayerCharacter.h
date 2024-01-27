#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;

UCLASS()
class GGJFUNNYBUSINESS_API APlayerCharacter : public APawn
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* DaRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* DaCamera;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;
};
