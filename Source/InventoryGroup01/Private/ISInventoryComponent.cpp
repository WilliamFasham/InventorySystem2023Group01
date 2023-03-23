// Fill out your copyright notice in the Description page of Project Settings.


#include "ISInventoryComponent.h"

// Sets default values for this component's properties
UISInventoryComponent::UISInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Add item to inventory array
bool UISInventoryComponent::AddItemToInventory(FName NewItem)
{
	Inventory.Add(NewItem);
	return true;
}

// Check if the inventory array contains an item
bool UISInventoryComponent::QueryInventory(FName NewItem)
{
	if (Inventory.Contains(NewItem))
	{
		return true;
	}
	return false;
}

// Remove an existing item from the inventory
bool UISInventoryComponent::RemoveItemFromInventory(FName ItemToRemove)
{
	return true;
}

// Getter function for the inventory array
TArray<FName> UISInventoryComponent::GetInventory()
{
	return Inventory;
}


// Called when the game starts
void UISInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UISInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

