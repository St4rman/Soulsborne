// Fill out your copyright notice in the Description page of Project Settings.


#include "ANS_SpawnAOE.h"
#include "Borne/AI/SoulsAICharacter.h"

void UANS_SpawnAOE::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
	if (MeshComp !=nullptr && MeshComp->GetOwner() != nullptr)
	{
		TraceIgnoreActors.Empty();
		TraceIgnoreActors.Add(MeshComp->GetOwner());
	}
}

void UANS_SpawnAOE::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime,
	const FAnimNotifyEventReference& EventReference)
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
		const FVector SphereLocation = Weapon->GetMesh()->GetSocketLocation( SourceSocket );
		// constexpr float Radius	= HitBoxRadius;
	
		bool DidHit = UKismetSystemLibrary::SphereTraceSingleForObjects(
			Self->GetWorld(),
			SphereLocation, SphereLocation, HitBoxRadius, TraceObjects,
			true, TraceIgnoreActors,
			DebugDraw, Target, true);

		AActor* TargetActor = Target.GetActor();

		if (TargetActor !=  nullptr && DidHit == true)
		{
			TraceIgnoreActors.Add(TargetActor);
			ABorneCharacter* Player = Cast<ABorneCharacter>(TargetActor);
			
			if (Player)
			{
				Player->DoPlayerDamage_Implementation( Damage, MeshComp->GetOwner() );
			}
			
		}
	}
}

void UANS_SpawnAOE::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
	if (MeshComp !=nullptr && MeshComp->GetOwner() != nullptr)
	{
		TraceIgnoreActors.Empty();
	}
}
