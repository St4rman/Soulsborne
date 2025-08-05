#include "ANS_EnemyAttackNotify.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "Borne/BorneCharacter.h"
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

void UANS_EnemyAttackNotify::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);

	if (MeshComp !=nullptr && MeshComp->GetOwner() != nullptr)
	{
		AActor* Self = MeshComp->GetOwner();
		FHitResult Target;
		TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjects;
		TraceObjects.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
	
		const ASoulsAICharacter* Character = Cast<ASoulsAICharacter>(Self);
		if (Character == nullptr)
		{
			return;
		}
		
		const ASBWeaponBase* Weapon = Character->GetWeapon();
		if (Weapon == nullptr){ return;}
		const FVector StartLoc	= Weapon->GetMesh()->GetSocketLocation("Hilt");
		const FVector EndLoc	= Weapon->GetMesh()->GetSocketLocation("Tip");
		;

		bool DidHit = UKismetSystemLibrary::SphereTraceSingleForObjects(
			Self->GetWorld(),
			StartLoc, EndLoc, Radius, TraceObjects,
			true, TraceIgnoreActors,
			EDrawDebugTrace::None,
			Target, true);

		AActor* TargetActor = Target.GetActor();

		if (TargetActor !=  nullptr && DidHit == true)
		{
			TraceIgnoreActors.Add(TargetActor);
			ABorneCharacter* Player = Cast<ABorneCharacter>(TargetActor);
			
			if (Player)
			{
				Player->DoPlayerDamage_Implementation(50.0f, MeshComp->GetOwner());
			}
			
		}
	}
}
