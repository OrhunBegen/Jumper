// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatorPlatform.generated.h"

UCLASS()
class JUMPER_API ARotatorPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatorPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	

	UPROPERTY(EditAnywhere, Category="Rotation")
	FRotator RotationVelocity;

	void Rotator(float DeltaTime);
};
