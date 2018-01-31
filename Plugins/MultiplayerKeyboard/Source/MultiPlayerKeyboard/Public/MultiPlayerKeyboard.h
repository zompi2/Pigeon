// Copyright 2017 Piotr Hawryluk.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

class FMultiPlayerKeyboardModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};