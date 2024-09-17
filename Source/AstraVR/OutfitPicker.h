// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OutfitPicker.generated.h"

UCLASS()
class ASTRAVR_API AOutfitPicker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOutfitPicker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> ItemName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> ItemID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> ItemPrice;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> NumTry;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> NumBuy;
};
