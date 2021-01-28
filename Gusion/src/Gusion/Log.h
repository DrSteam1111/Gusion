#pragma once

#include "Core.h"
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Gusion {

	class GUSION_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
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