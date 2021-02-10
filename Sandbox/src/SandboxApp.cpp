#include <Gusion.h>
#include <Gusion/Core/EntryPoint.h>

#include "Sandbox2D.h"

class Sandbox : public Gusion::Application
{
public:
	Sandbox()
	{
		//PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{

	}
};

Gusion::Application* Gusion::CreateApplication()
{
	return new Sandbox();
}