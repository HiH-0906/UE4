// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto pos = GetActorLocation();

	auto rota=GetActorRotation();
	rota.Add(90.0f * DeltaTime, 180.0f * DeltaTime, 360.0f * DeltaTime);
	SetActorRotation(rota);

}

int AMyActor::Hifumi() const
{
	return 123;
}

int AMyActor::Iiyo() const
{
	return 114;
}

float AMyActor::DoubleScale(float value) const
{
	return value * 2.0f;
}

