// Fill out your copyright notice in the Description page of Project Settings.


#include "MoverPlatform.h"

// Sets default values
AMoverPlatform::AMoverPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMoverPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}

// Called every frame
void AMoverPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Move Platform forwards
	//Get Current Location
	
	FVector CurrentLocation = GetActorLocation();
	
	
	//Add vector to the that location
	CurrentLocation = (PlatformVelocity*DeltaTime) + CurrentLocation;
	//Set new location
	
	SetActorLocation(CurrentLocation);
	//Send Platform back if gone too far
	
	//Check how far it has gone
	DistanceTravelled	= FVector::Dist(StartLocation, CurrentLocation);
	//Reverse direction of motion if it s gone too far
	


}

