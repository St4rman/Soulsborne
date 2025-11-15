#include "SoulsBTTaskRangedAttack.h"
#include "DrawDebugHelpers.h"
#include "Borne/AI/SoulsAICharacter.h"


EBTNodeResult::Type USoulsBTTaskRangedAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* MyController = OwnerComp.GetAIOwner();
	MyOwnerComp = &OwnerComp;
	EBTNodeResult::Type Result = EBTNodeResult::Failed;


	AnimFinishedDelegate = FTimerDelegate::CreateUObject(this, &USoulsBTTaskRangedAttack::OnAnimFinished);
	AnimFinishHandle.Invalidate();

	
	SpawnHandle.Invalidate();
	
	if (ensure(MyController))
	{
		ACharacter* Character = Cast<ACharacter>(MyController->GetPawn());
		if (Character == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("Cant cast AI controller to pawn @ SBTTRangedAttack"));
			return EBTNodeResult::Failed;
		}
		FVector MuzzleLocation = Character->GetMesh()->GetSocketLocation("WeaponSocket_r");

		TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetActor"));
		if (TargetActor == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("Cant cast Actor to pawn @ SBTTRangedAttack"));
			return EBTNodeResult::Failed;
		}

		const FVector Direction = TargetActor->GetActorLocation() - Character->GetActorLocation();
		const FVector ProjectileLocation = Character->GetMesh()->GetSocketLocation("MeleeArmament-boss-r");
		SpawnLocation = ProjectileLocation;

		SpawnProjectileDelegate =  FTimerDelegate::CreateUObject(this, &USoulsBTTaskRangedAttack::FireProjectile, Direction, ProjectileLocation);
		
		if (AnimationToPlay)
		{
			Cast<ASoulsAICharacter>(Character)->UpdateMotionWarpingTarget();
			const float FinishDelay = Character->PlayAnimMontage(AnimationToPlay.GetValue<UAnimMontage>(OwnerComp));
			MyController->GetWorld()->GetTimerManager().SetTimer(AnimFinishHandle, AnimFinishedDelegate, FinishDelay, /*bLoop=*/false);
			MyController->GetWorld()->GetTimerManager().SetTimer(SpawnHandle, SpawnProjectileDelegate, FinishDelay * 0.5f, /*bLoop=*/false);

			Result = EBTNodeResult::InProgress;
		}
		
		
		// return NewProjectile ? EBTNodeResult::Succeeded : EBTNodeResult::Failed;
	}
	return Result;
}

void USoulsBTTaskRangedAttack::OnAnimFinished()
{
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
}

void USoulsBTTaskRangedAttack::FireProjectile(FVector Direction, const FVector Location)
{
	//spawn our projectiles
	
	FVector  ToPlayer = TargetActor->GetActorLocation() - Location;
	// ToPlayer.Z = TargetActor->GetActorLocation().Z;
	const FRotator Rotation = ToPlayer.Rotation();

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
	for (int i = - HalfNumber; i < HalfNumber + 1; i++)
	{
		if (i ==0 )
		{
			continue;
		}
		FRotator CacheRotation = ToPlayer.RotateAngleAxis(10.0f / i, FVector::UpVector).Rotation();
		AActor* Projectile = GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnLocation, CacheRotation, SpawnParameters);
	}
	
}


