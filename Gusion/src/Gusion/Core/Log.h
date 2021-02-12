#pragma once

#include "Gusion/Core/Base.h"

// This ignores all warnings raised inside External headers
#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#pragma warning(pop)

namespace Gusion {

	class Log
	{
	public:
		static void Init();

		static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define GI_CORE_TRACE(...)		::Gusion::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GI_CORE_INFO(...)		::Gusion::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GI_CORE_WARN(...)		::Gusion::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GI_CORE_ERROR(...)		::Gusion::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GI_CORE_CRITICAL(...)	::Gusion::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define GI_TRACE(...)			::Gusion::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GI_INFO(...)			::Gusion::Log::GetClientLogger()->info(__VA_ARGS__)
#define GI_WARN(...)			::Gusion::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GI_ERROR(...)			::Gusion::Log::GetClientLogger()->error(__VA_ARGS__)
#define GI_CRITICAL(...)		::Gusion::Log::GetClientLogger()->critical(__VA_ARGS__)
