#pragma once

#include <glm/glm.hpp>

#include "Gusion/Core/Base.h"
#include "Gusion/Core/KeyCodes.h"
#include "Gusion/Core/MouseCodes.h"

namespace Gusion {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static glm::vec2 GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};

}
