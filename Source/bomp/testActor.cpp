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
	//�A�N�^�̍��W���擾
	FVector playerPos = GetActorLocation();
	//�A�N�^��x���W�𑝂₷
	playerPos.X += 5.f * DeltaTime;
	//�A�N�^�̍��W���X�V
	SetActorLocation(playerPos);
}
