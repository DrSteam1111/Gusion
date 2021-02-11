#include "gipch.h"
#include "Platform/OpenGL/OpenGLContext.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>

namespace Gusion {

	OpenGLContext::OpenGLContext(GLFWwindow* windowHandle)
		: m_WindowHandle(windowHandle)
	{
		GI_CORE_ASSERT(windowHandle, "Window handle is null!")
	}

	void OpenGLContext::Init()
	{
		GI_PROFILE_FUNCTION();

		glfwMakeContextCurrent(m_WindowHandle);
		int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		GI_CORE_ASSERT(status, "Failed to initialize Glad!");

		GI_CORE_INFO("OpenGL Info:");
		GI_CORE_INFO("  Vendor: {0}", glGetString(GL_VENDOR));
		GI_CORE_INFO("  Renderer: {0}", glGetString(GL_RENDERER));
		GI_CORE_INFO("  Version: {0}", glGetString(GL_VERSION));

		GI_CORE_ASSERT(GLVersion.major > 4 || (GLVersion.major == 4 && GLVersion.minor >= 5), "Gusion requires at least OpenGL version 4.5!");

	}

	void OpenGLContext::SwapBuffers()
	{
		GI_PROFILE_FUNCTION();

		glfwSwapBuffers(m_WindowHandle);
	}

}
