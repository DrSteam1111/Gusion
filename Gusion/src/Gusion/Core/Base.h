#pragma once

#include <memory>

#include "Gusion/Core/PlatformDetection.h"

#ifdef GI_DEBUG
	#if defined(GI_PLATFORM_WINDOWS)
		#define GI_DEBUGBREAK() __debugbreak()
	#elif defined(GI_PLATFORM_LINUS)
		#include <signal.h>
		#define GI_DEBUGBREAK() raise(SIGTRAP)
	#else
		#error "Platform doesn't support debugbreak yet!"
	#endif	
	#define GI_ENABLE_ASSERTS
#else
	#define GI_DEBUGBREAK()
#endif

#define GI_EXPAND_MACRO(x) x
#define GI_STRINGIFY_MACRO(x) #x

#define BIT(x) (1 << x)

#define GI_BIND_EVENT_FN(fn) [this](auto&&... args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }

namespace Gusion {

	template<typename T>
	using Scope = std::unique_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Scope<T> CreateScope(Args&& ... args)
	{
		return std::make_unique<T>(std::forward<Args>(args)...);
	}

	template<typename T>
	using Ref = std::shared_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Ref<T> CreateRef(Args&& ... args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}
}

#include "Gusion/Core/Log.h"
#include "Gusion/Core/Assert.h"
