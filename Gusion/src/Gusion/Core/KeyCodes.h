#pragma once

namespace Gusion
{
	typedef enum class KeyCode : uint16_t
	{
		// From glfw3.h
		Space = 32,
		Apostrophe = 39, /* ' */
		Comma = 44, /* , */
		Minus = 45, /* - */
		Period = 46, /* . */
		Slash = 47, /* / */

		D0 = 48, /* 0 */
		D1 = 49, /* 1 */
		D2 = 50, /* 2 */
		D3 = 51, /* 3 */
		D4 = 52, /* 4 */
		D5 = 53, /* 5 */
		D6 = 54, /* 6 */
		D7 = 55, /* 7 */
		D8 = 56, /* 8 */
		D9 = 57, /* 9 */

		Semicolon = 59, /* ; */
		Equal = 61, /* = */

		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,

		LeftBracket = 91,  /* [ */
		Backslash = 92,  /* \ */
		RightBracket = 93,  /* ] */
		GraveAccent = 96,  /* ` */

		World1 = 161, /* non-US #1 */
		World2 = 162, /* non-US #2 */

		/* Function keys */
		Escape = 256,
		Enter = 257,
		Tab = 258,
		Backspace = 259,
		Insert = 260,
		Delete = 261,
		Right = 262,
		Left = 263,
		Down = 264,
		Up = 265,
		PageUp = 266,
		PageDown = 267,
		Home = 268,
		End = 269,
		CapsLock = 280,
		ScrollLock = 281,
		NumLock = 282,
		PrintScreen = 283,
		Pause = 284,
		F1 = 290,
		F2 = 291,
		F3 = 292,
		F4 = 293,
		F5 = 294,
		F6 = 295,
		F7 = 296,
		F8 = 297,
		F9 = 298,
		F10 = 299,
		F11 = 300,
		F12 = 301,
		F13 = 302,
		F14 = 303,
		F15 = 304,
		F16 = 305,
		F17 = 306,
		F18 = 307,
		F19 = 308,
		F20 = 309,
		F21 = 310,
		F22 = 311,
		F23 = 312,
		F24 = 313,
		F25 = 314,

		/* Keypad */
		KP0 = 320,
		KP1 = 321,
		KP2 = 322,
		KP3 = 323,
		KP4 = 324,
		KP5 = 325,
		KP6 = 326,
		KP7 = 327,
		KP8 = 328,
		KP9 = 329,
		KPDecimal = 330,
		KPDivide = 331,
		KPMultiply = 332,
		KPSubtract = 333,
		KPAdd = 334,
		KPEnter = 335,
		KPEqual = 336,

		LeftShift = 340,
		LeftControl = 341,
		LeftAlt = 342,
		LeftSuper = 343,
		RightShift = 344,
		RightControl = 345,
		RightAlt = 346,
		RightSuper = 347,
		Menu = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// From glfw3.h
#define GI_KEY_SPACE           ::Gusion::Key::Space
#define GI_KEY_APOSTROPHE      ::Gusion::Key::Apostrophe    /* ' */
#define GI_KEY_COMMA           ::Gusion::Key::Comma         /* , */
#define GI_KEY_MINUS           ::Gusion::Key::Minus         /* - */
#define GI_KEY_PERIOD          ::Gusion::Key::Period        /* . */
#define GI_KEY_SLASH           ::Gusion::Key::Slash         /* / */
#define GI_KEY_0               ::Gusion::Key::D0
#define GI_KEY_1               ::Gusion::Key::D1
#define GI_KEY_2               ::Gusion::Key::D2
#define GI_KEY_3               ::Gusion::Key::D3
#define GI_KEY_4               ::Gusion::Key::D4
#define GI_KEY_5               ::Gusion::Key::D5
#define GI_KEY_6               ::Gusion::Key::D6
#define GI_KEY_7               ::Gusion::Key::D7
#define GI_KEY_8               ::Gusion::Key::D8
#define GI_KEY_9               ::Gusion::Key::D9
#define GI_KEY_SEMICOLON       ::Gusion::Key::Semicolon     /* ; */
#define GI_KEY_EQUAL           ::Gusion::Key::Equal         /* = */
#define GI_KEY_A               ::Gusion::Key::A
#define GI_KEY_B               ::Gusion::Key::B
#define GI_KEY_C               ::Gusion::Key::C
#define GI_KEY_D               ::Gusion::Key::D
#define GI_KEY_E               ::Gusion::Key::E
#define GI_KEY_F               ::Gusion::Key::F
#define GI_KEY_G               ::Gusion::Key::G
#define GI_KEY_H               ::Gusion::Key::H
#define GI_KEY_I               ::Gusion::Key::I
#define GI_KEY_J               ::Gusion::Key::J
#define GI_KEY_K               ::Gusion::Key::K
#define GI_KEY_L               ::Gusion::Key::L
#define GI_KEY_M               ::Gusion::Key::M
#define GI_KEY_N               ::Gusion::Key::N
#define GI_KEY_O               ::Gusion::Key::O
#define GI_KEY_P               ::Gusion::Key::P
#define GI_KEY_Q               ::Gusion::Key::Q
#define GI_KEY_R               ::Gusion::Key::R
#define GI_KEY_S               ::Gusion::Key::S
#define GI_KEY_T               ::Gusion::Key::T
#define GI_KEY_U               ::Gusion::Key::U
#define GI_KEY_V               ::Gusion::Key::V
#define GI_KEY_W               ::Gusion::Key::W
#define GI_KEY_X               ::Gusion::Key::X
#define GI_KEY_Y               ::Gusion::Key::Y
#define GI_KEY_Z               ::Gusion::Key::Z
#define GI_KEY_LEFT_BRACKET    ::Gusion::Key::LeftBracket   /* [ */
#define GI_KEY_BACKSLASH       ::Gusion::Key::Backslash     /* \ */
#define GI_KEY_RIGHT_BRACKET   ::Gusion::Key::RightBracket  /* ] */
#define GI_KEY_GRAVE_ACCENT    ::Gusion::Key::GraveAccent   /* ` */
#define GI_KEY_WORLD_1         ::Gusion::Key::World1        /* non-US #1 */
#define GI_KEY_WORLD_2         ::Gusion::Key::World2        /* non-US #2 */

/* Function keys */
#define GI_KEY_ESCAPE          ::Gusion::Key::Escape
#define GI_KEY_ENTER           ::Gusion::Key::Enter
#define GI_KEY_TAB             ::Gusion::Key::Tab
#define GI_KEY_BACKSPACE       ::Gusion::Key::Backspace
#define GI_KEY_INSERT          ::Gusion::Key::Insert
#define GI_KEY_DELETE          ::Gusion::Key::Delete
#define GI_KEY_RIGHT           ::Gusion::Key::Right
#define GI_KEY_LEFT            ::Gusion::Key::Left
#define GI_KEY_DOWN            ::Gusion::Key::Down
#define GI_KEY_UP              ::Gusion::Key::Up
#define GI_KEY_PAGE_UP         ::Gusion::Key::PageUp
#define GI_KEY_PAGE_DOWN       ::Gusion::Key::PageDown
#define GI_KEY_HOME            ::Gusion::Key::Home
#define GI_KEY_END             ::Gusion::Key::End
#define GI_KEY_CAPS_LOCK       ::Gusion::Key::CapsLock
#define GI_KEY_SCROLL_LOCK     ::Gusion::Key::ScrollLock
#define GI_KEY_NUM_LOCK        ::Gusion::Key::NumLock
#define GI_KEY_PRINT_SCREEN    ::Gusion::Key::PrintScreen
#define GI_KEY_PAUSE           ::Gusion::Key::Pause
#define GI_KEY_F1              ::Gusion::Key::F1
#define GI_KEY_F2              ::Gusion::Key::F2
#define GI_KEY_F3              ::Gusion::Key::F3
#define GI_KEY_F4              ::Gusion::Key::F4
#define GI_KEY_F5              ::Gusion::Key::F5
#define GI_KEY_F6              ::Gusion::Key::F6
#define GI_KEY_F7              ::Gusion::Key::F7
#define GI_KEY_F8              ::Gusion::Key::F8
#define GI_KEY_F9              ::Gusion::Key::F9
#define GI_KEY_F10             ::Gusion::Key::F10
#define GI_KEY_F11             ::Gusion::Key::F11
#define GI_KEY_F12             ::Gusion::Key::F12
#define GI_KEY_F13             ::Gusion::Key::F13
#define GI_KEY_F14             ::Gusion::Key::F14
#define GI_KEY_F15             ::Gusion::Key::F15
#define GI_KEY_F16             ::Gusion::Key::F16
#define GI_KEY_F17             ::Gusion::Key::F17
#define GI_KEY_F18             ::Gusion::Key::F18
#define GI_KEY_F19             ::Gusion::Key::F19
#define GI_KEY_F20             ::Gusion::Key::F20
#define GI_KEY_F21             ::Gusion::Key::F21
#define GI_KEY_F22             ::Gusion::Key::F22
#define GI_KEY_F23             ::Gusion::Key::F23
#define GI_KEY_F24             ::Gusion::Key::F24
#define GI_KEY_F25             ::Gusion::Key::F25

/* Keypad */
#define GI_KEY_KP_0            ::Gusion::Key::KP0
#define GI_KEY_KP_1            ::Gusion::Key::KP1
#define GI_KEY_KP_2            ::Gusion::Key::KP2
#define GI_KEY_KP_3            ::Gusion::Key::KP3
#define GI_KEY_KP_4            ::Gusion::Key::KP4
#define GI_KEY_KP_5            ::Gusion::Key::KP5
#define GI_KEY_KP_6            ::Gusion::Key::KP6
#define GI_KEY_KP_7            ::Gusion::Key::KP7
#define GI_KEY_KP_8            ::Gusion::Key::KP8
#define GI_KEY_KP_9            ::Gusion::Key::KP9
#define GI_KEY_KP_DECIMAL      ::Gusion::Key::KPDecimal
#define GI_KEY_KP_DIVIDE       ::Gusion::Key::KPDivide
#define GI_KEY_KP_MULTIPLY     ::Gusion::Key::KPMultiply
#define GI_KEY_KP_SUBTRACT     ::Gusion::Key::KPSubtract
#define GI_KEY_KP_ADD          ::Gusion::Key::KPAdd
#define GI_KEY_KP_ENTER        ::Gusion::Key::KPEnter
#define GI_KEY_KP_EQUAL        ::Gusion::Key::KPEqual

#define GI_KEY_LEFT_SHIFT      ::Gusion::Key::LeftShift
#define GI_KEY_LEFT_CONTROL    ::Gusion::Key::LeftControl
#define GI_KEY_LEFT_ALT        ::Gusion::Key::LeftAlt
#define GI_KEY_LEFT_SUPER      ::Gusion::Key::LeftSuper
#define GI_KEY_RIGHT_SHIFT     ::Gusion::Key::RightShift
#define GI_KEY_RIGHT_CONTROL   ::Gusion::Key::RightControl
#define GI_KEY_RIGHT_ALT       ::Gusion::Key::RightAlt
#define GI_KEY_RIGHT_SUPER     ::Gusion::Key::RightSuper
#define GI_KEY_MENU            ::Gusion::Key::Menu