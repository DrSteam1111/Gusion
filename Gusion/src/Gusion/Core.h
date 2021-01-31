#pragma once

#include <memory>

#ifdef GI_PLATFORM_WINDOWS
#if GI_DYNAMIC_LINK
	#ifdef GI_BUILD_DLL
		#define GUSION_API __declspec(dllexport)
	#else
		#define GUSION_API __declspec(dllimport)
	#endif
#else
	#define GUSION_API
#endif
#else
	#error Gusion only supports Windows!
#endif

#ifdef GI_DEBUG
	#define GI_ENABLE_ASSERTS
#endif

#ifdef GI_ENABLE_ASSERTS
	#define GI_ASSERT(x, ...) { if(!(x)) { GI_ERROR("Assertion Failed {0}", __VA_ARGS__); __debugbreak(); } }
	#define GI_CORE_ASSERT(x, ...) { if(!(x)) { GI_CORE_ERROR("Assertion Failed {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define GI_ASSERT(x, ...)
	#define GI_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define GI_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)

namespace Gusion {

	template<typename T>
	using Scope = std::unique_ptr<T>;

	template<typename T>
	using Ref = std::shared_ptr<T>;
}