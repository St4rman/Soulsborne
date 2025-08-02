#include "SBTTaskMeleeAttack.h"

#include "Borne/AI/SoulsAICharacter.h"

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
			const float curCost = fCost.GetValue(OwnerComp);
			
			if (CalculateCost(OwnerComp, curCost))
			{
				Cast<ASoulsAICharacter>(Character)->UpdateMotionWarpingTarget();
				const float FinishDelay = Character->PlayAnimMontage(AnimToPlay);
				BossController->GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, FinishDelay, /*bLoop=*/false);

				Result = EBTNodeResult::InProgress;
			}
		}
	}
	return Result;
}

void USBTTaskMeleeAttack::OnAnimFinished()
{
	if (MyOwnerComp)
	{
		FinishLatentTask(*MyOwnerComp, EBTNodeResult::Succeeded);
		if(MeshCache != nullptr)
		{
			MeshCache->SetAnimationMode(EAnimationMode::AnimationBlueprint);
		}
	}
}

bool USBTTaskMeleeAttack::CalculateCost(UBehaviorTreeComponent& OwnerComp , const float Cost)
{
	UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
	const float CurrentStamina = BBComp->GetValueAsFloat( BlackBoardStaminaValueName );

	if ( CurrentStamina - Cost >= 0.0f )
	{
		BBComp->SetValueAsFloat( BlackBoardStaminaValueName , CurrentStamina - Cost );
		return true;
	}
	return false;
}