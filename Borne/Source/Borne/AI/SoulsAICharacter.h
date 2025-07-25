#pragma once

#include "CoreMinimal.h"
#include "Borne/Interfaces/TargetableInterface.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"
#include "SoulsAICharacter.generated.h"


class UUserWidget;

UCLASS()
class BORNE_API ASoulsAICharacter : public ACharacter, public ITargetableInterface
{
	GENERATED_BODY()

public:

	ASoulsAICharacter();
	
	virtual void SetSelfAsTarget_Implementation() override;
	virtual void RemoveSelfAsTarget_Implementation() override;

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UWidgetComponent* LockOnWidget;
	
public:
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadOnly)
	bool IsTargeted;
	
};
