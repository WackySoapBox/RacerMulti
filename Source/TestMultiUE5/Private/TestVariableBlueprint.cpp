// Fill out your copyright notice in the Description page of Project Settings.


#include "TestVariableBlueprint.h"

// Sets default values
ATestVariableBlueprint::ATestVariableBlueprint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestVariableBlueprint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestVariableBlueprint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

