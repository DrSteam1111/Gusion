#pragma once

namespace Gusion
{
	typedef enum class MouseCode : uint16_t
	{
		// From glfw3.h
		Button0 = 0,
		Button1 = 1,
		Button2 = 2,
		Button3 = 3,
		Button4 = 4,
		Button5 = 5,
		Button6 = 6,
		Button7 = 7,

		ButtonLast = Button7,
		ButtonLeft = Button0,
		ButtonRight = Button1,
		ButtonMiddle = Button2
	} Mouse;

	inline std::ostream& operator<<(std::ostream& os, MouseCode mouseCode)
	{
		os << static_cast<int32_t>(mouseCode);
		return os;
	}
}

#define GI_MOUSE_BUTTON_0      ::Gusion::Mouse::Button0
#define GI_MOUSE_BUTTON_1      ::Gusion::Mouse::Button1
#define GI_MOUSE_BUTTON_2      ::Gusion::Mouse::Button2
#define GI_MOUSE_BUTTON_3      ::Gusion::Mouse::Button3
#define GI_MOUSE_BUTTON_4      ::Gusion::Mouse::Button4
#define GI_MOUSE_BUTTON_5      ::Gusion::Mouse::Button5
#define GI_MOUSE_BUTTON_6      ::Gusion::Mouse::Button6
#define GI_MOUSE_BUTTON_7      ::Gusion::Mouse::Button7
#define GI_MOUSE_BUTTON_LAST   ::Gusion::Mouse::ButtonLast
#define GI_MOUSE_BUTTON_LEFT   ::Gusion::Mouse::ButtonLeft
#define GI_MOUSE_BUTTON_RIGHT  ::Gusion::Mouse::ButtonRight
#define GI_MOUSE_BUTTON_MIDDLE ::Gusion::Mouse::ButtonMiddle