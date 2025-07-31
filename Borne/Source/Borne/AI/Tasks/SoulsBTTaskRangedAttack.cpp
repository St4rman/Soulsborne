#include "SoulsBTTaskRangedAttack.h"



EBTNodeResult::Type USoulsBTTaskRangedAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* MyController = OwnerComp.GetAIOwner();

	if (ensure(MyController))
	{
	
		ACharacter* MyCharacter = Cast<ACharacter>(MyController->GetPawn());
		if (MyCharacter == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("Cant cast AI controller to pawn @ SBTTRangedAttack"));
			return EBTNodeResult::Failed;
		}
		FVector MuzzleLocation = MyCharacter->GetMesh()->GetSocketLocation("WeaponSocket_r");

		AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetActor"));
		if (TargetActor == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("Cant cast Actor to pawn @ SBTTRangedAttack"));
			return EBTNodeResult::Failed;
		}

		const FVector Direction = TargetActor->GetActorLocation() - MyCharacter->GetActorLocation();
		FRotator Rotation = Direction.Rotation();

		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		
		AActor* NewProjectile = GetWorld()->SpawnActor<AActor>(ProjectileClass, MyCharacter->GetActorLocation(), Rotation, SpawnParameters);
		return NewProjectile ? EBTNodeResult::Succeeded : EBTNodeResult::Failed;
	}
	return EBTNodeResult::Failed;
}
