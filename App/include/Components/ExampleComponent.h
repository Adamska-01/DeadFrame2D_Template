#pragma once
#include <Core/Math/Vector2.h>
#include <Engine/Components/GameComponent.h>


namespace DeadFrame2D::Engine
{
	class Transform;
}


class ExampleComponent : public DeadFrame2D::Engine::GameComponent
{
private:
	DeadFrame2D::Engine::Transform* transform;

	DeadFrame2D::Core::Vector2F initialPosition;

	float timeAccumulator;

	float amplitude;

	float frequency;

	float rotationSpeed;


public:
	ExampleComponent(float amplitude, float frequency, float rotationSpeed);

	virtual ~ExampleComponent() override = default;


	virtual void Init() override;

	virtual void Start() override;

	virtual void Update(float deltaTime) override;

	virtual void Draw() override;
};