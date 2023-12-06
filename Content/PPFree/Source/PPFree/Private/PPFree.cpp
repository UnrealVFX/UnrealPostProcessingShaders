// Copyright Epic Games, Inc. All Rights Reserved.

#include "PPFree.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"
#define LOCTEXT_NAMESPACE "FPPFreeModule"

void FPPFreeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("PPFree/Shaders")); // add this!
	AddShaderSourceDirectoryMapping("/PPFree", ShaderDirectory);
}

void FPPFreeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPPFreeModule, PPFree)