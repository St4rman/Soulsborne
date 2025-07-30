#include "SoulsAICharacter.h"

#include "Borne/Core/HelperData.h"


ASoulsAICharacter::ASoulsAICharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	LockOnWidget = CreateDefaultSubobject<UWidgetComponent>("LockOnWidget");
	LockOnWidget->SetupAttachment(RootComponent);
	LockOnWidget->SetVisibility(false);

	MainWeapon = CreateDefaultSubobject<ASBWeaponBase>("Main Axe");
	

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComponent");
}

void ASoulsAICharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	PawnSensingComponent->OnSeePawn.AddDynamic(this, &ASoulsAICharacter::OnPawnSeen);
}

void ASoulsAICharacter::SetSelfAsTarget_Implementation()
{
	ITargetableInterface::SetSelfAsTarget_Implementation();
	LockOnWidget->SetVisibility(true);
}

void ASoulsAICharacter::RemoveSelfAsTarget_Implementation()
{
	LockOnWidget->SetVisibility(false);
	ITargetableInterface::RemoveSelfAsTarget_Implementation();
}

void ASoulsAICharacter::OnPawnSeen(APawn* Pawn)
{
	AAIController* AIC = Cast<AAIController>(GetController());
	if (AIC)
	{
		UBlackboardComponent* BBComp = AIC->GetBlackboardComponent();
		BBComp->SetValueAsObject("TargetActor", Pawn);
		// DrawDebugString(GetWorld(), Pawn->GetActorLocation(), "SPOTTED", nullptr, FColor::Purple, 4.0f, true);
	}
}



