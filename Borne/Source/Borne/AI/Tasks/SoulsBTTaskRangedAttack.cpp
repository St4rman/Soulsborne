#include "SoulsBTTaskRangedAttack.h"



EBTNodeResult::Type USoulsBTTaskRangedAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* MyController = OwnerComp.GetAIOwner();

	if (ensure(MyController))
	{
	
		ACharacter* MyCharacter = Cast<ACharacter>(MyController->GetPawn());
		if (MyCharacter == nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Emerald, "OFF TASK");
			return EBTNodeResult::Failed;
		}
		FVector MuzzleLocation = MyCharacter->GetMesh()->GetSocketLocation("WeaponSocket_r");

		AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetActor"));
		if (TargetActor == nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Emerald, "OFF TASK");
			return EBTNodeResult::Failed;
		}

		const FVector Direction = TargetActor->GetActorLocation() - MyCharacter->GetActorLocation();
		FRotator Rotation = Direction.Rotation();

		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		
		AActor* NewProjectile = GetWorld()->SpawnActor<AActor>(ProjectileClass, MyCharacter->GetActorLocation(), Rotation, SpawnParameters);
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Emerald, "Firing task");
		return NewProjectile ? EBTNodeResult::Succeeded : EBTNodeResult::Failed;

	}
	return EBTNodeResult::Failed;
}
