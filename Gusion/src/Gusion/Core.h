#pragma once

#ifdef GI_PLATFORM_WINDOWS
	#ifdef GI_BUILD_DLL
		#define GUSION_API __declspec(dllexport)
	#else
		#define GUSION_API __declspec(dllimport)
	#endif
#else
	#error Gusion only supports Windows!
#endif