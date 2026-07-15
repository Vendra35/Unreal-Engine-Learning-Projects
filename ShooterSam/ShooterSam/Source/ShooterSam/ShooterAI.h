// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterSamCharacter.h"
#include "ShooterAI.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERSAM_API AShooterAI : public AAIController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere, Category = "AI")
	//float AcceptanceRadius = 200.0f; // Distance at which the AI will stop moving towards the player

	UPROPERTY(EditAnywhere, Category = "AI")
	UBehaviorTree* EnemyAIBehaviorTree;

	AShooterSamCharacter* PlayerCharacter;
	// MyCharacter is the AI character that this controller is controlling, PlayerCharacter is the player character that the AI will be targeting
	AShooterSamCharacter* MyCharacter;

	void StartBehaviorTree(AShooterSamCharacter* Player);

};
