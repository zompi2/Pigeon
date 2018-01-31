// Copyright 2017 Piotr Hawryluk.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "MultiPlayerViewportClient.generated.h"

/**
*
*/
USTRUCT()
struct FKeyboardMapping
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	int32 ControllerID;

	UPROPERTY()
	FKey Key;
};

/**
 * 
 */
UCLASS(config = Input)
class MULTIPLAYERKEYBOARD_API UMultiPlayerViewportClient : public UGameViewportClient
{
	GENERATED_BODY()

	UPROPERTY(Config)
	TArray<FKeyboardMapping> KeyboardMappings; ///< Configuration of pairs: Key - Controller ID

	TMap<FKey, int32> KeyControllerMap; ///< Cached map of bindings between key and Controller ID. Used for faster look up.
public:
	//~ Begin UObject Interface
	virtual void PostInitProperties() override;
	//~ End UObject Interface

	//~ Begin FViewportClient Interface.
	virtual bool InputKey(FViewport* InViewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed = 1.f, bool bGamepad = false) override;
	//~ End FViewportClient Interface.


	
};