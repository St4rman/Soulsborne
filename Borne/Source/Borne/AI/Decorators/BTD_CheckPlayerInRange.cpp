// Fill out your copyright notice in the Description page of Project Settings.


#include "BTD_CheckPlayerInRange.h"


UBTD_CheckPlayerInRange::UBTD_CheckPlayerInRange()
{
	NodeName =  TEXT("Is player in Range ?");
}

bool UBTD_CheckPlayerInRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	bool bParentRaw = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);
	bool bIsWithinRange = false;
	
	UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
	if (ensure(BBComp))
	{
		AActor* Target = Cast<AActor>(BBComp->GetValueAsObject( PlayerTarget.SelectedKeyName ) );
		
		if (Target == nullptr)
		{
			return false;
		}
		
		APawn*  AIPawn = OwnerComp.GetAIOwner()->GetPawn();
		if (ensure(Target) && ensure(AIPawn))
		{
			const float Distance = FVector::Distance(Target->GetActorLocation(), AIPawn->GetActorLocation());

			//just check if ur further than close distance
			if (bIsLongRanged)
			{
				bIsWithinRange = Distance > FCloseDistance;
			}
			else
			{
				bIsWithinRange = Distance < FFarDistance && Distance > FCloseDistance;
			}
		}
	}
	BBComp->SetValueAsBool("IsWithinRange", bIsWithinRange && bParentRaw);
	return bParentRaw && bIsWithinRange;
}
