// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Runtime\Core\Public\Misc\FileHelper.h>
#include "MyDataLoggingLibrary.generated.h"


/**
 * 
 */
UCLASS()
class VR5MANNEQUIN_API UMyDataLoggingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString SaveStringToFile(FString FileName, FString Data);
	
};
