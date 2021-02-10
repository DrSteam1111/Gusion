#pragma once

#include "Gusion.h"

class Sandbox2D : public Gusion::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Gusion::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Gusion::Event& e) override;
private:
	Gusion::OrthographicCameraController m_CameraController;

	Gusion::Ref<Gusion::VertexArray> m_SquareVA;
	Gusion::Ref<Gusion::Shader> m_FlatColorShader;

	Gusion::Ref<Gusion::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};

