#pragma once

#include "Gusion/Core/Base.h"

#include "Gusion/Core/Window.h"
#include "Gusion/Core/LayerStack.h"
#include "Gusion/Events/Event.h"
#include "Gusion/Events/ApplicationEvent.h"

#include "Gusion/Core/Timestep.h"

#include "Gusion/ImGui/ImGuiLayer.h"

int main(int argc, char** argv);

namespace Gusion {

	class Application
	{
	public:
		Application(const std::string& name = "Gusion App");
		virtual ~Application();

		void OnEvent(Event & e);

		void PushLayer(Layer * layer);
		void PushOverlay(Layer * layer);

		Window& GetWindow() { return *m_Window; }

		void Close();

		ImGuiLayer* GetImGuiLayer() { return m_ImGuiLayer; }

		static Application& Get() { return *s_Instance; }
	private:
		void Run();
		bool OnWindowClose(WindowCloseEvent& e);
		bool OnWindowResize(WindowResizeEvent& e);
	private:
		Scope<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		bool m_Minimized = false;
		LayerStack m_LayerStack;
		float m_LastFrameTime = 0.0f;
	private:
		static Application* s_Instance;
		friend int ::main(int argc, char** argv);
	};

	// To be defined in CLIENT 
	Application* CreateApplication();
}

