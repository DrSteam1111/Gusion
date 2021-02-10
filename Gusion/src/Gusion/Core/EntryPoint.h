#pragma once

#include "Gusion/Core/Base.h"

#ifdef GI_PLATFORM_WINDOWS

extern Gusion::Application* Gusion::CreateApplication();

int main(int argc, char** argv)
{
	Gusion::Log::Init();

	GI_PROFILE_BEGIN_SESSION("Startup", "GusionProfile-Startup.json");
	auto app = Gusion::CreateApplication();
	GI_PROFILE_END_SESSION();

	GI_PROFILE_BEGIN_SESSION("Runtime", "GusionProfile-Runtime.json");
	app->Run();
	GI_PROFILE_END_SESSION();

	GI_PROFILE_BEGIN_SESSION("Shutdown", "GusionProfile-Shutdown.json");
	delete app;
	GI_PROFILE_END_SESSION();
}

#endif