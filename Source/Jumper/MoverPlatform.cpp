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
	MyX = MyVector.X;	
}

// Called every frame
void AMoverPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

