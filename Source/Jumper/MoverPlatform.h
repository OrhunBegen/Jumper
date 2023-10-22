// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoverPlatform.generated.h"

UCLASS()
class JUMPER_API AMoverPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoverPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="Moving Plaform")
	FVector PlatformVelocity = FVector(50, 0, 0);
	FVector StartLocation;

	UPROPERTY(EditAnywhere, Category="Moving Platform")
	float MovebleDistance = 100;

	
};
