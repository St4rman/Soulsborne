#include "ANS_EnemyAttackNotify.h"
#include "Borne/AI/SoulsAICharacter.h"
#include "Kismet/KismetSystemLibrary.h"

void UANS_EnemyAttackNotify::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                        const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
	if (MeshComp !=nullptr && MeshComp->GetOwner() != nullptr)
	{
		TraceIgnoreActors.Empty();
	}
}

void UANS_EnemyAttackNotify::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
	
	if (MeshComp !=nullptr && MeshComp->GetOwner() != nullptr)
	{
		TraceIgnoreActors.Empty();
	}
}

void UANS_EnemyAttackNotify::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);

	if (MeshComp !=nullptr && MeshComp->GetOwner() != nullptr)
	{
		AActor* Self = MeshComp->GetOwner();
		FHitResult Target;
		TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjects;
		TraceObjects.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
	
		const ASoulsAICharacter* PlayerChar = Cast<ASoulsAICharacter>(Self);
		if (PlayerChar == nullptr)
		{
			return;
		}
	
		
		// const UStaticMeshComponent* WepMesh = PlayerChar->GetMesh();
		// const FVector StartLoc	= WepMesh->GetSocketLocation("MeleeArmament-right");
		// const FVector EndLoc	= WepMesh->GetSocketLocation("Weapon_Tip");
		constexpr float Radius		= 50.0f;

		bool DidHit = UKismetSystemLibrary::SphereTraceSingleForObjects(
			Self->GetWorld(),
			PlayerChar->GetActorLocation(), PlayerChar->GetActorLocation()* 1000.0f, Radius, TraceObjects,
			true, TraceIgnoreActors,
			EDrawDebugTrace::ForOneFrame,
			Target, true);

		AActor* TargetActor = Target.GetActor();

		if (TargetActor !=  nullptr && DidHit == true)
		{
			TraceIgnoreActors.Add(TargetActor);
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TargetActor->GetName());
		}
	}
}
