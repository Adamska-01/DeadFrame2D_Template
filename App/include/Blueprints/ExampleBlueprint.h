#pragma once
#include <Core/Math/Vector2.h>
#include <Engine/Entity/GameObject.h>


class ExampleBlueprint : public DeadFrame2D::Engine::GameObject
{
private:
	DeadFrame2D::Core::Vector2F startPos;


public:
	ExampleBlueprint(DeadFrame2D::Core::Vector2F startPos);


	virtual void ConstructGameObject() override;
};