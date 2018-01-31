// Copyright 2017 Piotr Hawryluk.

#include "MultiPlayerViewportClient.h"

void UMultiPlayerViewportClient::PostInitProperties()
{
	Super::PostInitProperties();
	for (auto& Mapping : KeyboardMappings)
	{
		KeyControllerMap.Add(Mapping.Key, Mapping.ControllerID);
	}
}

bool UMultiPlayerViewportClient::InputKey(FViewport* InViewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed /*= 1.f*/, bool bGamepad /*= false*/)
{
	if (IgnoreInput() || !KeyControllerMap.Contains(Key) || bGamepad)
	{
		return Super::InputKey(InViewport, ControllerId, Key, EventType, AmountDepressed, bGamepad);
	}
	
	int32 ControllerID = KeyControllerMap[Key];
	return Super::InputKey(InViewport, ControllerID, Key, EventType, AmountDepressed, bGamepad);
}
