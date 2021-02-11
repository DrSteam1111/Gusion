#pragma once

#include "Gusion/Core/Base.h"
#include "Gusion/Core/Log.h"
#include "Gusion/Scene/Scene.h"
#include "Gusion/Scene/Entity.h"

namespace Gusion {

	class SceneHierarchyPanel
	{
	public:
		SceneHierarchyPanel() = default;
		SceneHierarchyPanel(const Ref<Scene>& scene);

		void SetContext(const Ref<Scene>& scene);

		void OnImGuiRender();
	private:
		void DrawEntityNode(Entity entity);
		void DrawComponents(Entity entity);
	private:
		Ref<Scene> m_Context;
		Entity m_SelectionContext;
	};

}