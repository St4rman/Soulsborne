#include "SoulsBTTaskRangedAttack.h"


EBTNodeResult::Type USoulsBTTaskRangedAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
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

		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		//Spawn Projecile 
		// AActor* NewProjectile; //GetWorld()->SpawnActor<AActor>(Class, MuzzleLocation, MuzzleRotation, Parameters);
		
		// return NewProjectile ? EBTNodeResult::Succeeded : EBTNodeResult::Failed;
		return EBTNodeResult::Failed;
	}
	return EBTNodeResult::Failed;
}
