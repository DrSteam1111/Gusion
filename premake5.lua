workspace "Gusion"
	architecture "x64"
	startproject "Sandbox"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
	
	flags
	{
		"MultiProcessorCompile"
	}
	
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

IncludeDir = {}
IncludeDir["GLFW"] = "Gusion/vendor/GLFW/include"
IncludeDir["Glad"] = "Gusion/vendor/Glad/include"
IncludeDir["ImGui"] = "Gusion/vendor/imgui"
IncludeDir["glm"] = "Gusion/vendor/glm"
IncludeDir["stb_image"] = "Gusion/vendor/stb_image"

group "Dependencies"
	include "Gusion/vendor/GLFW"
	include "Gusion/vendor/Glad"
	include "Gusion/vendor/imgui"
	
group ""
	
project "Gusion"
	location "Gusion"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	pchheader "gipch.h"
	pchsource "Gusion/src/gipch.cpp"
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/vendor/stb_image/**.h",
		"%{prj.name}/vendor/stb_image/**.cpp",
		"%{prj.name}/vendor/glm/glm/**.hpp",
		"%{prj.name}/vendor/glm/glm/**.inl"
	}
	
	defines
	{
		"_CRT_SECURE_NO_WARNINGS"
	}
	
	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.Glad}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.stb_image}"
	}
	
	links
	{
		"GLFW",
		"Glad",
		"ImGui",
		"opengl32.lib"
	}
	
	filter "system:windows"
		systemversion "latest"
		
		defines
		{
			"GI_PLATFORM_WINDOWS",
			"GI_BUILD_DLL",
			"GLFW_INCLUDE_NONE"
		}
		
	filter "configurations:Debug"
		defines "GI_DEBUG"
		runtime "Debug"
		symbols "on"
		
	filter "configurations:Release"
		defines "GI_RELEASE"
		runtime "Release"
		optimize "on"
		
	filter "configurations:Dist"
		defines "GI_DIST"
		runtime "Release"
		optimize "on"
		
project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"
	
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
		"Gusion/src",
		"Gusion/vendor",
		"%{IncludeDir.glm}"
	}
	
	links
	{
		"Gusion"
	}
	
	filter "system:windows"
		systemversion "latest"
		
		defines
		{
			"GI_PLATFORM_WINDOWS"
		}
		
	filter "configurations:Debug"
		defines "GI_DEBUG"
		runtime "Debug"
		symbols "on"
		
	filter "configurations:Release"
		defines "GI_RELEASE"
		runtime "Release"
		optimize "on"
		
	filter "configurations:Dist"
		defines "GI_DIST"
		runtime "Release"
		optimize "on"