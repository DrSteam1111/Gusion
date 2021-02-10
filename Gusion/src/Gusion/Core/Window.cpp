#include "gipch.h"
#include "Gusion/Core/Window.h"

#ifdef GI_PLATFORM_WINDOWS
	#include "Platform/Windows/WindowsWindow.h"
#endif

namespace Gusion {

	Scope<Window> Window::Create(const WindowProps& props)
	{
	#ifdef GI_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
	#else
		GI_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
	#endif
	}

}