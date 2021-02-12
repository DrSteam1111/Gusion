include "./vendor/premake/premake_customization/solution_items.lua"

workspace "Gusion"
	architecture "x86_64"
	startproject "Cynocephalus"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}
	
	solution_items
	{
		".editorconfig"
	}
	
	flags
	{
		"MultiProcessorCompile"
	}
	
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

IncludeDir = {}
IncludeDir["GLFW"] = "%{wks.location}/Gusion/vendor/GLFW/include"
IncludeDir["Glad"] = "%{wks.location}/Gusion/vendor/Glad/include"
IncludeDir["ImGui"] = "%{wks.location}/Gusion/vendor/imgui"
IncludeDir["glm"] = "%{wks.location}/Gusion/vendor/glm"
IncludeDir["stb_image"] = "%{wks.location}/Gusion/vendor/stb_image"
IncludeDir["entt"] = "%{wks.location}/Gusion/vendor/entt/include"
IncludeDir["yaml_cpp"] = "%{wks.location}/Gusion/vendor/yaml-cpp/include"

group "Dependencies"
	include "vendor/premake"
	include "Gusion/vendor/GLFW"
	include "Gusion/vendor/Glad"
	include "Gusion/vendor/imgui"
	include "Gusion/vendor/yaml-cpp"
group ""

include "Gusion"
include "Sandbox"
include "Cynocephalus"
