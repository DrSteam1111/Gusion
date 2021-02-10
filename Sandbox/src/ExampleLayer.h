#pragma once

#include "Gusion.h"

class ExampleLayer : public Gusion::Layer
{
public:
	ExampleLayer();
	virtual ~ExampleLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Gusion::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Gusion::Event& e) override;
private:
	Gusion::ShaderLibrary m_ShaderLibrary;
	Gusion::Ref<Gusion::Shader> m_Shader;
	Gusion::Ref<Gusion::VertexArray> m_VertexArray;

	Gusion::Ref<Gusion::Shader> m_FlatColorShader;
	Gusion::Ref<Gusion::VertexArray> m_SquareVA;

	Gusion::Ref<Gusion::Texture2D> m_Texture, m_GusionLogoTexture;

	Gusion::OrthographicCameraController m_CameraController;
	glm::vec3 m_SquareColor = { 0.2f, 0.3f, 0.8f };
};