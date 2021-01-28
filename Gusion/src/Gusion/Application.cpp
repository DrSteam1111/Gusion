#include "gipch.h"
#include "Application.h"

#include "Gusion/Events/ApplicationEvent.h"
#include "Gusion/Log.h"

namespace Gusion {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			GI_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			GI_TRACE(e);
		}

		while (true);
	}

}