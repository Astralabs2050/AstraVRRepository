// Fill out your copyright notice in the Description page of Project Settings.


#include "OutfitPicker.h"

// Sets default values
AOutfitPicker::AOutfitPicker()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    ItemName =
    {
        "Astra Spacesuit",
        "Candy Crush",
        "Magnifique Set",
        "Shooter Girl",
        "Inferno Set",
        "Biker Girl",
        "Biker",
        "Astra Tracksuit",
        "Holocene Hoodie",
        "Astra Sports Trackie",
        "Motorsport Set",
        "Starboy Set",
        "Metallica",
        "Flamethrower",
        "NFT London Set15",
        "Denim Noir",
        "Anciela Dress",
        "Mulatto",
        "HBRS"
    };

    ItemID =
    {
        "astra_#1",
        "astra_#6",
        "astra_#12",
        "astra_#17",
        "astra_#11",
        "astra_#5",
        "astra_#4",
        "astra_#3",
        "astra_#10",
        "astra_#2",
        "astra_#14",
        "astra_#18",
        "astra_#13",
        "astra_#8",
        "astra_#7",
        "astra_#0",
        "astra_#15",
        "astra_#9"
    };

    ItemPrice =
    {
        "75",
        "65",
        "250",
        "60",
        "100",
        "75",
        "76",
        "55",
        "40",
        "60",
        "200",
        "85",
        "40",
        "60",
        "75",
        "60",
        "80",
        "50"
    };

    NumTry.Init(TEXT("0"), 18);

    NumBuy.Init(TEXT("0"), 18);


}

// Called when the game starts or when spawned
void AOutfitPicker::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOutfitPicker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

