// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Ennemy.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UEnnemy : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SANDBOX_API IEnnemy
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	int GetOverlapDamages();
};
