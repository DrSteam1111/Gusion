#pragma once

#include "Gusion/Core.h"

#include "Gusion/Window.h"
#include "Gusion/LayerStack.h"
#include "Gusion/Events/Event.h"
#include "Gusion/Events/ApplicationEvent.h"

#include "Gusion/Core/Timestep.h"
#include "Gusion/ImGui/ImGuiLayer.h"

namespace Gusion {

	class Application
	{
	public:
		Application();
		virtual ~Application() = default;

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		inline Window& GetWindow() { return *m_Window; }

		inline static Application& Get() { return *s_Instance; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);
	private:
		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		LayerStack m_LayerStack;
		float m_LastFrameTime = 0.0f;
	private:
		static Application* s_Instance;
	};

	// To be defined in CLIENT 
	Application* CreateApplication();
}

