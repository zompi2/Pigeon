// Fill out your copyright notice in the Description page of Project Settings.

#include "XPlayerPawn.h"


// Sets default values
AXPlayerPawn::AXPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AXPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AXPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

TEnumAsByte<enum ENetRole> AXPlayerPawn::GetRole()
{
	return Role;
}

