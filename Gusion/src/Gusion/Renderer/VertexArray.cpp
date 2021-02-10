#include "gipch.h"
#include "Gusion/Renderer/VertexArray.h"

#include "Gusion/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLVertexArray.h"

namespace Gusion {

	Ref<VertexArray> VertexArray::Create()
	{
		switch (Renderer::GetAPI())
		{
			case RendererAPI::API::None: GI_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
			case RendererAPI::API::OpenGL: return CreateRef<OpenGLVertexArray>();
		}

		GI_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}