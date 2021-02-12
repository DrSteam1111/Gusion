#pragma once

#include "Gusion/Core/Base.h"
#include "Gusion/Core/Log.h"
#include <filesystem>

#ifdef GI_ENABLE_ASSERTS

	// Alteratively we could use the same "default" message for both "WITH_MSG" and "NO_MSG" and
	// provide support for custom formatting by concatenating the formatting string instead of having the format inside the default message
	#define GI_INTERNAL_ASSERT_IMPL(type, check, msg, ...) { if(!(check)) { GI##type##ERROR(msg, __VA_ARGS__); GI_DEBUGBREAK(); } }
	#define GI_INTERNAL_ASSERT_WITH_MSG(type, check, ...) GI_INTERNAL_ASSERT_IMPL(type, check, "Assertion failed: {0}", __VA_ARGS__)
	#define GI_INTERNAL_ASSERT_NO_MSG(type, check) GI_INTERNAL_ASSERT_IMPL(type, check, "Assertion '{0}' failed at {1}:{2}", GI_STRINGIFY_MACRO(check), std::filesystem::path(__FILE__).filename().string(), __LINE__)
	
	#define GI_INTERNAL_ASSERT_GET_MACRO_NAME(arg1, arg2, macro, ...) macro
	#define GI_INTERNAL_ASSERT_GET_MACRO(...) GI_EXPAND_MACRO( GI_INTERNAL_ASSERT_GET_MACRO_NAME(__VA_ARGS__, GI_INTERNAL_ASSERT_WITH_MSG, GI_INTERNAL_ASSERT_NO_MSG) )
	
	// Currently accepts at least the condition and one additional parameter (the message) being optional
	#define GI_ASSERT(...) GI_EXPAND_MACRO( GI_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_, __VA_ARGS__) )
	#define GI_CORE_ASSERT(...) GI_EXPAND_MACRO( GI_INTERNAL_ASSERT_GET_MACRO(__VA_ARGS__)(_CORE_, __VA_ARGS__) )
#else
	#define GI_ASSERT(...)
	#define GI_CORE_ASSERT(...)
#endif
