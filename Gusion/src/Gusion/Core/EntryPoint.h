#pragma once

#ifdef GI_PLATFORM_WINDOWS

extern Gusion::Application* Gusion::CreateApplication();

int main(int argc, char** argv)
{
	Gusion::Log::Init();
	GI_CORE_WARN("Initialized Log!");
	int a = 5;
	GI_INFO("Hello! Var={0}", a);

	auto app = Gusion::CreateApplication();
	app->Run();
	delete app;
}

#endif