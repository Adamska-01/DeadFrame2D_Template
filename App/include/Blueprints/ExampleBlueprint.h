#pragma once
#include <Core/Math/Vector2.h>
#include <Engine/Entity/GameObject.h>


class ExampleBlueprint : public GameObject
{
private:
	Vector2F startPos;


public:
	ExampleBlueprint(Vector2F startPos);


	virtual void ConstructGameObject() override;
};