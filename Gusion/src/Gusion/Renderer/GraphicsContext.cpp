#include "gipch.h"
#include "Gusion/Renderer/GraphicsContext.h"

#include "Gusion/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace Gusion {

	Scope<GraphicsContext> GraphicsContext::Create(void* window)
	{
		switch (Renderer::GetAPI())
		{
			case RendererAPI::API::None:    GI_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
			case RendererAPI::API::OpenGL:  return CreateScope<OpenGLContext>(static_cast<GLFWwindow*>(window));
		}

		GI_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}