workspace "Gusion"
	architecture "x64"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
	
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
	
project "Gusion"
	location "Gusion"
	kind "SharedLib"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	pchheader "gipch.h"
	pchsource "Gusion/src/gipch.cpp"
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"%{prj.name}/vendor/spdlog/include",
		"%{prj.name}/src"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "on"
		systemversion "latest"
		
		defines
		{
			"GI_PLATFORM_WINDOWS",
			"GI_BUILD_DLL"
		}
		
		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}
		
	filter "configurations:Debug"
		defines "GI_DEBUG"
		symbols "on"
		
	filter "configurations:Release"
		defines "GI_RELEASE"
		optimize "on"
		
	filter "configurations:Dist"
		defines "GI_DIST"
		optimize "on"
		
project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"Gusion/vendor/spdlog/include",
		"Gusion/src"
	}
	
	links
	{
		"Gusion"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "on"
		systemversion "latest"
		
		defines
		{
			"GI_PLATFORM_WINDOWS"
		}
		
	filter "configurations:Debug"
		defines "GI_DEBUG"
		symbols "on"
		
	filter "configurations:Release"
		defines "GI_RELEASE"
		optimize "on"
		
	filter "configurations:Dist"
		defines "GI_DIST"
		optimize "on"