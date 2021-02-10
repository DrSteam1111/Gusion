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

		#ifdef GI_ENABLE_ASSERTS
			int versionMajor;
			int versionMinor;
			glGetIntegerv(GL_MAJOR_VERSION, &versionMajor);
			glGetIntegerv(GL_MINOR_VERSION, &versionMinor);

			GI_CORE_ASSERT(versionMajor > 4 || (versionMajor == 4 && versionMinor >= 5), "Gusion requires at least OpenGL version 4.5!");
		#endif // GI_ENABLE_ASSERTS

	}

	void OpenGLContext::SwapBuffers()
	{
		GI_PROFILE_FUNCTION();

		glfwSwapBuffers(m_WindowHandle);
	}

}