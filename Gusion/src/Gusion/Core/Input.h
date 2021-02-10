#pragma once

#include "Gusion/Core/Base.h"
#include "Gusion/Core/KeyCodes.h"
#include "Gusion/Core/MouseCodes.h"

namespace Gusion {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static std::pair<float, float> GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};

}