project "Sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"
	
	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"src/**.h",
		"src/**.cpp"
	}
	
	includedirs
	{
		"%{wks.location}/Gusion/vendor/spdlog/include",
		"%{wks.location}/Gusion/src",
		"%{wks.location}/Gusion/vendor",
		"%{IncludeDir.glm}",
		"%{IncludeDir.entt}"
	}
	
	links
	{
		"Gusion"
	}
	
	filter "system:windows"
		systemversion "latest"
		
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