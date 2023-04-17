// Fill out your copyright notice in the Description page of Project Settings.


#include "BalanceCharacter.h"

// Sets default values
ABalanceCharacter::ABalanceCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABalanceCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABalanceCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABalanceCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

