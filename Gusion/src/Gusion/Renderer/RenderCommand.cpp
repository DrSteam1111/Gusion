#include "gipch.h"
#include "RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace Gusion {

	RendererAPI* RenderCommand::s_RendererAPI = new OpenGLRendererAPI;

}