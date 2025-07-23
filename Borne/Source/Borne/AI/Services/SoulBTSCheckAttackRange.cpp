#include "SoulBTSCheckAttackRange.h"
#include "AIController.h"


void USoulBTSCheckAttackRange::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	// find distance from ourselves and our target actor
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
					
					bool bIsWithinRange = Distance < 500;
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
	// line of sight maybe
}
 