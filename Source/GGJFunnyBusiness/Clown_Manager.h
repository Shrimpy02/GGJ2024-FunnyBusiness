//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "ClownDebugClass.h"
//#include "Clown_Manager.generated.h"
//
//UCLASS()
//class GGJFUNNYBUSINESS_API AClown_Manager : public AActor
//{
//	GENERATED_BODY()
//	
//public:	
//	// Sets default values for this actor's properties
//	AClown_Manager();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	UFUNCTION(BlueprintCallable)
//	class AClownCharacterClass* CreateClown();
//
//	UPROPERTY(EditAnywhere)
//	TSubclassOf<AClownCharacterClass> clownClass = AClownDebugClass::StaticClass();
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere)
//	FTransform clownSpawnPoint;
//};
