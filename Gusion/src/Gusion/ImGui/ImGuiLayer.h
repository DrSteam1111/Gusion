#pragma once

#include "Gusion/Core/Layer.h"

#include "Gusion/Events/ApplicationEvent.h"
#include "Gusion/Events/KeyEvent.h"
#include "Gusion/Events/MouseEvent.h"

namespace Gusion {

	class GUSION_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}