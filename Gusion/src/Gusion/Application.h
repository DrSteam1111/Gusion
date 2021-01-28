#pragma once

#include "Core.h"

namespace Gusion {

	class GUSION_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT 
	Application* CreateApplication();
}

