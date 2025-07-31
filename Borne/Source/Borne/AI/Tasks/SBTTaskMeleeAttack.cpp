#include "SBTTaskMeleeAttack.h"

// USBTTaskMeleeAttack::USBTTaskMeleeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
// {
// 	bLooping = false;
// 	TimerDelegate = FTimerDelegate::CreateUObject(this, &USBTTaskMeleeAttack::OnAnimFinished);
// }



EBTNodeResult::Type USBTTaskMeleeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* BossController = OwnerComp.GetAIOwner();
	EBTNodeResult::Type Result = EBTNodeResult::Failed;
	MyOwnerComp = &OwnerComp;
	TimerDelegate = FTimerDelegate::CreateUObject(this, &USBTTaskMeleeAttack::OnAnimFinished);
	TimerHandle.Invalidate();

	UAnimMontage* AnimToPlay = AnimationToPlay.GetValue<UAnimMontage>(OwnerComp);
	
	if (AnimToPlay && MyOwnerComp && BossController->GetPawn())
	{
		ACharacter* Character = Cast<ACharacter>(BossController->GetPawn());
		MeshCache = Character->GetMesh();
		if (Character)
		{
			const float FinishDelay = Character->PlayAnimMontage(AnimToPlay);
			// float FinishDelay = AnimIns->Montage_Play(AnimToPlay, 1.0f);
			BossController->GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, FinishDelay, /*bLoop=*/false);
			Result = EBTNodeResult::InProgress;
		}
	}
	return Result;
}

void USBTTaskMeleeAttack::OnAnimFinished()
{
	if (MyOwnerComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("OnAnimFinished"));
		MeshCache->SetAnimationMode(EAnimationMode::AnimationBlueprint);
		FinishLatentTask(*MyOwnerComp, EBTNodeResult::Succeeded);
	}
}