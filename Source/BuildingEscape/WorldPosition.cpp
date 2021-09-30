// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	FString Log;
	FString ObjectPosition = GetOwner() -> GetActorLocation().ToString();

	//Pointer Assignments - Ampersand is used to retrieve reference of variable
	FString* PrtLog = &Log;

	//You can access members of FString 
	//Log.Len();

	//Dereference pointer to access the same members, use normal dot notation otherwise
	// PrtLog -> Len();

	//here start is used to overload Log and perform the function
	// UE_LOG(LogTemp,Warning,TEXT("%s"),*Log);

	//* is need for this function to work
	UE_LOG(LogTemp,Warning,TEXT("%s"),*ObjectPosition);

	//Getting Owner (Actor) of component - returns a pointer
	//Needs GameFramework/Actor.h
	FString Name = GetOwner() -> GetName();

	UE_LOG(LogTemp,Warning,TEXT("This component is attached to %s"),*Name);  
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

