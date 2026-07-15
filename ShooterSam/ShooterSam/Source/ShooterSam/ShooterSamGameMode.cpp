// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterSamGameMode.h"

#include "ShooterAI.h"
#include "ShooterSamCharacter.h"
#include "Kismet/GameplayStatics.h"

void AShooterSamGameMode::BeginPlay()
{
	Super::BeginPlay();

	AShooterSamCharacter* Player = Cast<AShooterSamCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	TArray<AActor*> ShooterAICharacters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AShooterAI::StaticClass(), ShooterAICharacters);

	/*
    // While Loop 
	int32 LoopIndex = 0;
	while (LoopIndex < ShooterAICharacters.Num())
	{
		AActor* ShooterAICharacter = ShooterAICharacters[LoopIndex];

		LoopIndex++;
	} */

	/*
	// For Loop (Most people would use a for loop instead of a while loop)
	for (int32 LoopIndex = 0; LoopIndex < ShooterAICharacters.Num(); LoopIndex++)
	{
		AActor* ShooterAICharacter = ShooterAICharacters[LoopIndex];
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAICharacter);
		if (ShooterAI)
		{
			ShooterAI->StartBehaviorTree(Player);
			UE_LOG(LogTemp, Display, TEXT("%s: Starting behavior tree"), *ShooterAI->GetActorNameOrLabel());
		}
	} */

	// Range-based For Loop (This is the most modern way to loop through arrays in C++ but if you want multiple conditions or backward forwards, you might still use a traditional for loop because range based for loop is limited to simple iteration)
	for (AActor* ShooterAICharacter : ShooterAICharacters)
	{
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAICharacter);
		if (ShooterAI)
		{
			ShooterAI->StartBehaviorTree(Player);
			UE_LOG(LogTemp, Display, TEXT("%s: Starting behavior tree"), *ShooterAI->GetActorNameOrLabel());
		}
	}
}

AShooterSamGameMode::AShooterSamGameMode()
{
	// stub
}
