#include "Components/ExampleComponent.h"
#include <Engine/Components/Transform.h>
#include <Engine/Entity/GameObject.h>
#include <Utilities/Debugging/Guards.h>


using namespace DeadFrame2D::Core;
using namespace DeadFrame2D::Engine;
using namespace DeadFrame2D::Utilities;
using namespace DeadFrame2D::Constants;


ExampleComponent::ExampleComponent(float amplitude, float frequency, float rotationSpeed)
	: transform(nullptr),
	initialPosition(Vector2F::Zero),
	timeAccumulator(0.0f),
	amplitude(amplitude),
	frequency(frequency),
	rotationSpeed(rotationSpeed)
{
}

void ExampleComponent::Init()
{
	transform = OwningObject.lock()->GetComponent<Transform>();

	GuardAgainstNull(transform, "ExampleComponent::Init: Transform not found from ExampleComponent.");
}

void ExampleComponent::Start()
{
	initialPosition = transform->GetWorldPosition();
}

void ExampleComponent::Update(float deltaTime)
{
	timeAccumulator += deltaTime;
	timeAccumulator = std::fmod(timeAccumulator, 1000.0f);

	transform->RotateByDegrees(rotationSpeed * deltaTime);

	auto offset = std::sin(timeAccumulator * MathConstants::PI_f * frequency) * amplitude;

	transform->SetWorldPosition(Vector2F(initialPosition.x + offset, initialPosition.y));
}

void ExampleComponent::Draw()
{

}