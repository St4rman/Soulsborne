#include "SoulBTSCheckAttackRange.h"


void USoulBTSCheckAttackRange::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	
	// distance less than range to check and it has
	// LOS
	
	UBlackboardComponent*  BlackboardComponent = OwnerComp.GetBlackboardComponent();

	if (ensure(BlackboardComponent))
	{
		AActor* TargetActor = Cast<AActor>(BlackboardComponent->GetValueAsObject("TargetActor"));
		if (TargetActor)
		{
			AAIController* MyController = OwnerComp.GetAIOwner();
			if (ensure(MyController))
			{
				APawn* AIPawn = MyController->GetPawn();
				if (ensure(AIPawn))
				{
					const float Distance = FVector::Distance(TargetActor->GetActorLocation(), AIPawn->GetActorLocation());
					
					bool bIsWithinRange = Distance < RangeToCheck;
					bool bHasLOS = false;
					if (bIsWithinRange)
					{
						bHasLOS = MyController->LineOfSightTo(TargetActor);
					}
					
					BlackboardComponent->SetValueAsBool( AttackRangeKey.SelectedKeyName, (bIsWithinRange && bHasLOS));
				}
			}
		}
	}
}
 