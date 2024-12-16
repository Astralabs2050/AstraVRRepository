// Fill out your copyright notice in the Description page of Project Settings.


#include "AstraGameInstance.h"




void UAstraGameInstance::NextHair()
{
	// Male
	if (MFIndex == 0)
	{
		if (HairIndexMale < (HairListMale.Num() - 1))
		{
			HairIndexMale += 1;
		}		
	}
	// Female
	else
	{
		if (HairIndexFemale < (HairListFemale.Num() - 1))
		{
			HairIndexFemale += 1;
		}
	}
}
void UAstraGameInstance::PrevHair()
{
	// Male
	if (MFIndex == 0)
	{
		if (HairIndexMale < (HairListMale.Num() - 1))
		{
			HairIndexMale -= 1;
		}
	}
	// Female
	else
	{
		if (HairIndexFemale < (HairListFemale.Num() - 1))
		{
			HairIndexFemale -= 1;
		}
	}
}



void UAstraGameInstance::NextOutfit()
{
	// Male
	if (MFIndex == 0)
	{
		if (ClothingIndexMale < (ClothingListMale.Num() - 1))
		{
			ClothingIndexMale += 1;
		}
	}
	// Female
	else
	{
		if (ClothingIndexFemale < (ClothingListFemale.Num() - 1))
		{
			ClothingIndexFemale += 1;
		}
	}
}
void UAstraGameInstance::PrevOutfit()
{
	// Male
	if (MFIndex == 0)
	{
		if (ClothingIndexMale > 0 )
		{
			ClothingIndexMale -= 1;
		}
	}
	// Female
	else
	{
		if (ClothingIndexFemale > 0)
		{
			ClothingIndexFemale -= 1;
		}
	}
}



void UAstraGameInstance::SetOutfitIndex(int index)
{
	// Male
	if (MFIndex == 0)
	{
		ClothingIndexMale = index;
	}
	// Female
	else
	{
		ClothingIndexFemale = index;
	}
}


void UAstraGameInstance::SetupAvatarMeshData(int& p_mfIndex, TArray <USkeletalMesh*>& p_clothingListFemale, int& p_clothingIndexFemale, TArray <USkeletalMesh*>& p_hairListFemale, int& p_hairIndexFemale, float& p_avatarSizeData, TArray <USkeletalMesh*>& p_clothingListMale, int& p_clothingIndexMale, TArray <USkeletalMesh*>& p_hairListMale, int& p_hairIndexMale)
{
	p_mfIndex = MFIndex;
	p_clothingListFemale = ClothingListFemale;
	p_clothingIndexFemale = ClothingIndexFemale;
	p_hairListFemale = HairListFemale;
	p_hairIndexFemale = HairIndexFemale;
	p_avatarSizeData = AvatarSizeData;
	p_clothingListMale = ClothingListMale;
	p_clothingIndexMale = ClothingIndexMale;
	p_hairListMale = HairListMale;
	p_hairIndexMale = HairIndexMale;

}


void UAstraGameInstance::SetSkinTone(int& p_mfIndex, TArray <UMaterial*>& p_skinListFemale, int& p_skinIndexFemale, TArray <UMaterial*>& p_skinListMale, int& p_skinIndexMale)
{
	p_mfIndex = MFIndex;
	p_skinListFemale = SkinListFemale;
	p_skinIndexFemale = SkinIndexFemale;
	p_skinListMale = SkinListMale;
	p_skinIndexMale = SkinIndexMale;

}