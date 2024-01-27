//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "Clown_Manager.h"
//#include "Components/SceneComponent.h"
//
//// Sets default values
//AClown_Manager::AClown_Manager()
//{
// 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//}
//
//// Called when the game starts or when spawned
//void AClown_Manager::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void AClown_Manager::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//AClownDebugClass* AClown_Manager::CreateClown()
//{
//	AClownDebugClass* clownRef = GetWorld()->SpawnActor<AClownDebugClass>(clownClass, clownSpawnPoint);
//	clownRef->clownHatInt = FMath::RandRange(0, 3);
//	clownRef->clownTorsoInt = FMath::RandRange(0, 3);
//	clownRef->clownPantsInt = FMath::RandRange(0, 3);
//	return clownRef;
//}
//
