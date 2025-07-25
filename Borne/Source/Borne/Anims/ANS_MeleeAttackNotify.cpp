// Fill out your copyright notice in the Description page of Project Settings.


#include "ANS_MeleeAttackNotify.h"

void UANS_MeleeAttackNotify::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference){
	Super::NotifyEnd(MeshComp, Animation, EventReference);
	if (MeshComp !=nullptr && MeshComp->GetOwner() != nullptr)
	{
		TraceIgnoreActors.Empty();
	}
	
}

void UANS_MeleeAttackNotify::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
	if (MeshComp !=nullptr && MeshComp->GetOwner() != nullptr)
	{
		TraceIgnoreActors.Empty();
		TraceIgnoreActors.Add(MeshComp->GetOwner());
	}
}

void UANS_MeleeAttackNotify::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);
	if (MeshComp !=nullptr && MeshComp->GetOwner() != nullptr)
	{
		AActor* Self = MeshComp->GetOwner();
		FHitResult Target;
		TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjects;
		TraceObjects.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
	
		const ABorneCharacter* PlayerChar = Cast<ABorneCharacter>(Self);
		if (PlayerChar == nullptr)
		{
			return;
		}
	
		ASBWeaponBase* CurWep = PlayerChar->GetInventoryComponent()->GetCurrentEquippedWeapon();

		if (CurWep == nullptr)
		{
			return;
		}
		
		const UStaticMeshComponent* WepMesh = CurWep->GetMesh();
		const FVector StartLoc	= WepMesh->GetSocketLocation("Weapon_Hilt");
		const FVector EndLoc	= WepMesh->GetSocketLocation("Weapon_Tip");
		constexpr float Radius		= 50.0f;

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
			// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TargetActor->GetName());
		}
	}
	
}
