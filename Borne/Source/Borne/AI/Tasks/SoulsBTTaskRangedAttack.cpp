#include "SoulsBTTaskRangedAttack.h"


EBTNodeResult::Type USoulsBTTaskRangedAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//spawn projectile towards
	AAIController* MyController = OwnerComp.GetAIOwner();

	if (ensure(MyController))
	{
		ACharacter* MyCharacter = Cast<ACharacter>(MyController->GetPawn());
		if (MyCharacter == nullptr)
		{
			return EBTNodeResult::Failed;
		}
		FVector MuzzleLocation = MyCharacter->GetMesh()->GetSocketLocation("Muzzle_01");

		AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetActor"));
		if (TargetActor == nullptr)
		{
			return EBTNodeResult::Failed;
		}

		const FVector Direction = TargetActor->GetActorLocation() - MuzzleLocation;
		FRotator Rotation = Direction.Rotation();

		
	}
}
