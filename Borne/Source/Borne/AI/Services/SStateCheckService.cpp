#include "SStateCheckService.h"

void USStateCheckService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();

	if (ensure(BlackboardComponent))
	{
		AActor* TargetActor = Cast<AActor>(BlackboardComponent->GetValueAsObject("TargetActor"));
		if (TargetActor)
		{
			AAIController* MyController = OwnerComp.GetAIOwner();
			if (ensure(MyController))
			{
				// BlackboardComponent->SetValueAsFloat("Stamina", BlackboardComponent->GetValueAsFloat("Stamina") +10.0f);
				APawn* AIPawn = MyController->GetPawn();

				if (ensure(AIPawn))
				{
					const float Distance = FVector::Distance(TargetActor->GetActorLocation(), AIPawn->GetActorLocation());

					if (Distance < MeleeRange)
					{
						BlackboardComponent->SetValueAsEnum(ReferencesKey, EAIState::Attacking );
					}
					else if (Distance < MediumRange && Distance > MeleeRange)
					{
						BlackboardComponent->SetValueAsEnum(ReferencesKey, EAIState::Strafing);
						RegenStamina(BlackboardComponent);
					}
					else
					{
						BlackboardComponent->SetValueAsEnum(ReferencesKey, EAIState::Ranged);
						RegenStamina(BlackboardComponent);
					}
				}
			}
		}
	}
}

void USStateCheckService::RegenStamina(UBlackboardComponent* BlackboardComponent)
{
	float CurStam = BlackboardComponent->GetValueAsFloat("Stamina");
	if(CurStam < 100)
	{
		CurStam += 10.0f;
		if (CurStam > 100)
		{
			CurStam = 100;
		}
		BlackboardComponent->SetValueAsFloat("Stamina", CurStam);
	}
	
}
