
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RuleManager.generated.h"

UCLASS()
class GGJFUNNYBUSINESS_API ARuleManager : public AActor
{
	GENERATED_BODY()
	
public:	
	ARuleManager();
	virtual void Tick(float DeltaTime) override;

	// FUNCTIONS ---------------------------------

	UFUNCTION(BlueprintCallable)
	FText generateRuleSentence();

	UFUNCTION(BlueprintCallable)
	FText generateJokeSentance();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	void GenerateHats();
	void GenerateClothes();
	void GenerateFace();
	void GenerateJokes();
	void GenerateCurrentLegalElements();

	int getRandomCategory();
	FString getRandomStringEnd();
	FString getRandomStringFront();

	// Variables ---------------------------------
	// Constant Elements:
	UPROPERTY()
	TArray<FName> ClownHats;

	UPROPERTY()
	TArray<FName> ClownClothes;

	UPROPERTY()
	TArray<FName> ClownFaces;

	UPROPERTY()
	TArray<FName> ClownJokes;

	// Game-Spesific elements
	UPROPERTY()
	TArray<FName> IllegalElements;

	UPROPERTY()
	TArray<FName> LegalElements;

	UPROPERTY()
	TArray<FName> IllegalJoke;

	UPROPERTY()
	TArray<FName> LegalJoke;


};
