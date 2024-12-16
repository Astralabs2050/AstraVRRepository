// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AstraGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ASTRAVR_API UAstraGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	
public:


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "API Configuration")
	FString IPAddress;

	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray<TSubclassOf<UObject>> AnimBPList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	int MFIndex;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray<USkeletalMesh*> ClothingListFemale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	int ClothingIndexFemale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray<USkeletalMesh*> HairListFemale;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	int HairIndexFemale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	float AvatarSizeData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	FText Username;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	int Astras;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray <USkeletalMesh*> ClothingListMale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	int ClothingIndexMale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray <USkeletalMesh*> HairListMale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	int HairIndexMale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray <UMaterial*> SkinListFemale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	int SkinIndexFemale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray <int> SkinElementListIndexFemale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	bool DidUserPay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray <int> DefaultOutfitIndex;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	bool DidUserTryItem;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray <UMaterial*> SkinListMale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	int SkinIndexMale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	TArray<TSubclassOf<UObject>> VRAnimBPList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	FString UserID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	FString UserEmail;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	FString UserPwd;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Avatar Configuration")
	FString CompletionTime;



	// Hair cycling
	UFUNCTION(BlueprintCallable, Category = "Avatar Configuration")
	void NextHair();
	// Hair cycling
	UFUNCTION(BlueprintCallable, Category = "Avatar Configuration")
	void PrevHair();


	// Outfit cycling
	UFUNCTION(BlueprintCallable, Category = "Avatar Configuration")
	void NextOutfit();
	// Outfit cycling
	UFUNCTION(BlueprintCallable, Category = "Avatar Configuration")
	void PrevOutfit();


	UFUNCTION(BlueprintCallable, Category = "Avatar Configuration")
	void SetOutfitIndex(int index);



	UFUNCTION(BlueprintCallable, Category = "Avatar Configuration")
	void SetupAvatarMeshData(int& p_mfIndex, TArray <USkeletalMesh*>& p_clothingListFemale, int& p_clothingIndexFemale, TArray <USkeletalMesh*>& p_hairListFemale, int& p_hairIndexFemale, float& p_avatarSizeData, TArray <USkeletalMesh*>& p_clothingListMale, int& p_clothingIndexMale, TArray <USkeletalMesh*>& p_hairListMale, int& p_hairIndexMale);



	UFUNCTION(BlueprintCallable, Category = "Avatar Configuration")
	void SetSkinTone(int& p_mfIndex, TArray <UMaterial*>& p_skinListFemale, int& p_skinIndexFemale, TArray <UMaterial*>& p_skinListMale, int& p_skinIndexMale);




	//Logging in
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	FString Code;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	bool UserLoggingIn;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	bool UserLoggedIn;


	// outfit data 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	FString ItemName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	FString ItemID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	FString ItemPrice;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	FString NumTry;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item Configuration")
	FString NumBuy;

	







	
};
