#include "SoulsAICharacter.h"

#include "Borne/Core/HelperData.h"


ASoulsAICharacter::ASoulsAICharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	LockOnWidget = CreateDefaultSubobject<UWidgetComponent>("LockOnWidget");
	LockOnWidget->SetupAttachment(RootComponent);
	LockOnWidget->SetVisibility(false);
	
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComponent");
}

void ASoulsAICharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	PawnSensingComponent->OnSeePawn.AddDynamic(this, &ASoulsAICharacter::OnPawnSeen);
	
}

void ASoulsAICharacter::BeginPlay()
{
	Super::BeginPlay();

	const FVector HandLoc =  GetMesh()->GetSocketLocation("MeleeArmament-boss-r");
	const FTransform SpawnTM = FTransform(GetMesh()->GetSocketRotation("MeleeArmament-boss-r"), HandLoc);
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = Cast<APawn>(GetOwner());

	ASBWeaponBase* CurrentWep  =  GetWorld()->SpawnActor<ASBWeaponBase>(WeaponBase, SpawnTM, SpawnParams);
	CurrentWep->SetOwner(this);
	CurrentWep->GetMesh()->SetWorldScale3D(FVector(2, 2, 2));
	CurrentWep->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepWorldTransform, "MeleeArmament-boss-r");
	MainWeapon = CurrentWep;
	
	if (MaxHealth < 0)
	{
		UE_LOG(LogTemp, Error, TEXT("MaxHealth is 0"));
	}
	Health = MaxHealth;
}

void ASoulsAICharacter::TakeDamage(float DamageAmount)
{
	const float HealthDelta = Health - DamageAmount;
	if (HealthDelta > 0)
	{
		Health = HealthDelta;
	}
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



