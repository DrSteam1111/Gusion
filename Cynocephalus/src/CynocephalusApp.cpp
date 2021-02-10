#include <Gusion.h>
#include <Gusion/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Gusion {

	class CynocephalusApp : public Application
	{
	public:
		CynocephalusApp()
			: Application("Cynocephalus")
		{
			PushLayer(new EditorLayer());
		}

		~CynocephalusApp()
		{
		}
	};

	Application* CreateApplication()
	{
		return new CynocephalusApp();
	}

}