#include "gipch.h"
#include "Gusion/Renderer/RenderCommand.h"

namespace Gusion {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}