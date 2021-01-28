#include <Gusion.h>

class Sandbox : public Gusion::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Gusion::Application* Gusion::CreateApplication()
{
	return new Sandbox();
}