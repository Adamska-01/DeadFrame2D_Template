#pragma once
#include <Engine/SceneSystem/Scene.h>
#include <functional>
#include <memory>
#include <string>


namespace DeadFrame2D::Engine
{
	class ButtonBlueprint;
}


class ExampleScene : public DeadFrame2D::Engine::Scene
{
private:
	std::weak_ptr<DeadFrame2D::Engine::ButtonBlueprint> CreateButton(const std::string& text, const std::function<void()>& onPressedHandler, const std::function<void()>& onEnterHandler);

	std::weak_ptr<DeadFrame2D::Engine::GameObject> CreateText(const std::string& text);


public:
	ExampleScene() = default;

	virtual ~ExampleScene() override = default;


	virtual void Enter() override;
};