#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Borne/GAS/AttributeSets/BaseAttributesSet.h"
#include "Borne/SUI/PlayerHUD.h"
#include "Components/ActorComponent.h"
#include "SHUDComponent.generated.h"

class ABorneCharacter;
class UAttributesSet;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BORNE_API USHUDComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USHUDComponent();

protected:
	
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	

	ABorneCharacter* Player;
	const UBaseAttributesSet* AttribSet;
	

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UPlayerHUD> PlayerHUDClass;

	UPROPERTY(EditAnywhere)
	class UPlayerHUD* PlayerHUD;

	UFUNCTION(BlueprintCallable)
	void SetStamina(const float Stamina, const float MaxStamina);

	UFUNCTION(BlueprintCallable)
	void SetHealth(const float Health, const float MaxHealth);
};
