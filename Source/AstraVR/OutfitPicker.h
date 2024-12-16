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

	// values for female avatar
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> ItemName_F;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> ItemID_F;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> ItemPrice_F;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> NumTry_F;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> NumBuy_F;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<USkeletalMesh*>  OutfitList_F;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	int CurrentIndex_F;


	// values for male avatar
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> ItemName_M;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> ItemID_M;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> ItemPrice_M;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> NumTry_M;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<FString> NumBuy_M;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	TArray<USkeletalMesh*> OutfitList_M;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	int CurrentIndex_M;





};
