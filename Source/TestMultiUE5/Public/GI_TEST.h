// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GI_TEST.generated.h"

/**
 * 
 */
UCLASS()
class TESTMULTIUE5_API UGI_TEST : public UGameInstance
{
	GENERATED_BODY()
	
	void Init() override;

public :
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		int test;
};
