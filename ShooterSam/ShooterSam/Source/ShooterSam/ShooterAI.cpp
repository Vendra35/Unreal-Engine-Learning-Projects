// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();
}

void AShooterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/* We are not using this code because we are using a behavior tree to control the AI instead of doing it in C++. If we were to do it in C++, we would need to uncomment this code and remove the behavior tree code in the StartBehaviorTree function.
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerPawn)
	{
		if (LineOfSightTo(PlayerPawn))
		{
			SetFocus(PlayerPawn, EAIFocusPriority::Gameplay);
			MoveToActor(PlayerPawn, AcceptanceRadius);
		}
		else
		{
			ClearFocus(EAIFocusPriority::Gameplay);
			StopMovement();
		}
	}
	*/
}

void AShooterAI::StartBehaviorTree(AShooterSamCharacter* Player)
{
	if (EnemyAIBehaviorTree)
	{
		if (Player)
		{
			PlayerCharacter = Player;
			MyCharacter = Cast<AShooterSamCharacter>(GetPawn());
		}
		RunBehaviorTree(EnemyAIBehaviorTree);

		UBlackboardComponent* MyBlackboard = GetBlackboardComponent();
		if (MyBlackboard && PlayerCharacter && MyCharacter)
		{
			// MyBlackboard->SetValueAsVector("PlayerLocation", PlayerCharacter->GetActorLocation()); This is not correct way to do this because player location is constantly changing and we want to update it in the behavior tree, so we will use a blackboard key selector to get the player location in the behavior tree instead of setting it here in C++.
			MyBlackboard->SetValueAsVector("EnemyStartLocation", MyCharacter->GetActorLocation());
		}
	}
}
