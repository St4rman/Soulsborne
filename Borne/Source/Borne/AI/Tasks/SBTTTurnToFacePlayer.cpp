#include "SBTTTurnToFacePlayer.h"

#include "Kismet/KismetMathLibrary.h"

USBTTTurnToFacePlayer::USBTTTurnToFacePlayer( const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = TEXT("Turn to Player");
}

EBTNodeResult::Type USBTTTurnToFacePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = EBTNodeResult::Failed;

	//TODO: check for attacking state

	UBlackboardComponent*  BlackboardComponent = OwnerComp.GetBlackboardComponent();
	if (ensure(BlackboardComponent))
	{
		AActor* TargetActor = Cast<AActor>(BlackboardComponent->GetValueAsObject("TargetActor"));
		if (ensure(TargetActor))
		{
			if (/*attacking*/ false)
			{
				return EBTNodeResult::Succeeded;
			}
			APawn* MyPawn = OwnerComp.GetAIOwner()->GetPawn();
			FVector LookAt =FVector(TargetActor->GetActorLocation());
			LookAt.Z = MyPawn->GetActorLocation().Z;

			FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(MyPawn->GetActorLocation(), LookAt);
			FRotator SlerpRot = FQuat::Slerp(MyPawn->GetActorQuat(), Rotation.Quaternion(), LookRotationRate).Rotator();
			MyPawn->SetActorRotation(SlerpRot);
			Result = EBTNodeResult::Succeeded;
		}
	}
	FinishLatentTask(OwnerComp, Result);
	return Result;
}


