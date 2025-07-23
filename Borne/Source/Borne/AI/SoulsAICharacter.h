#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SoulsAICharacter.generated.h"

UCLASS()
class BORNE_API ASoulsAICharacter : public ACharacter
{
	GENERATED_BODY()

public:

	ASoulsAICharacter();

protected:
	
	virtual void BeginPlay() override;

public:
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
