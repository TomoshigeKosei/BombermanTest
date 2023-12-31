// Fill out your copyright notice in the Description page of Project Settings.


#include "testActor.h"

// Sets default values
AtestActor::AtestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AtestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AtestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//アクタの座標を取得
	FVector playerPos = GetActorLocation();
	//アクタのx座標を増やす
	playerPos.X += moveSpeed * DeltaTime;
	//アクタの座標を更新
	SetActorLocation(playerPos);
}

