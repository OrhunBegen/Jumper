// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatorPlatform.h"

// Sets default values
ARotatorPlatform::ARotatorPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARotatorPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatorPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Rotator(DeltaTime);

}
void ARotatorPlatform::Rotator(float DeltaTime)
{
	AddActorLocalRotation(DeltaTime * RotationVelocity);
}

