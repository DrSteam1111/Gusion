#include <Gusion.h>

#include "imgui/imgui.h"

class ExampleLayer : public Gusion::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		if (Gusion::Input::IsKeyPressed(GI_KEY_TAB))
			GI_TRACE("Tab key is pressed (poll)!");
	}

	virtual void OnImGuiRender() override
	{
		ImGui::Begin("Test");
		ImGui::Text("Hello World");
		ImGui::End();
	}

	void OnEvent(Gusion::Event& event) override
	{
		if (event.GetEventType() == Gusion::EventType::KeyPressed)
		{
			Gusion::KeyPressedEvent& e = (Gusion::KeyPressedEvent&)event;
			if (e.GetKeyCode() == GI_KEY_TAB)
				GI_TRACE("Tab key is pressed (event)!");
			GI_TRACE("{0}", (char)e.GetKeyCode());
		}
	}

};

class Sandbox : public Gusion::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}
};

Gusion::Application* Gusion::CreateApplication()
{
	return new Sandbox();
}