// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ClassToTextureDataAsset.generated.h"

USTRUCT(BlueprintType)
struct FClassToTexture
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UActorComponent> Class;
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* Texture;
};

/**
 * 
 */
UCLASS(BlueprintType)
class SANDBOX_API UClassesToTexturesDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<FClassToTexture> ClassesToTextures;

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetTextureFromClass(TSubclassOf<UActorComponent> Class);
};

inline UTexture2D* UClassesToTexturesDataAsset::GetTextureFromClass(TSubclassOf<UActorComponent> Class)
{
	for (FClassToTexture ClassToTexture : ClassesToTextures)
	{
		if (ClassToTexture.Class == Class)
		{
			return ClassToTexture.Texture;
		}
	}
	return nullptr;
}
