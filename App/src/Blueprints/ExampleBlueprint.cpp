#include "Blueprints/ExampleBlueprint.h"
#include "Components/ExampleComponent.h"
#include <Constants/ResourcePaths.h>
#include <Engine/Components/Rendering/Sprite.h>
#include <Engine/Components/Transform.h>


using namespace DeadFrame2D::Core;
using namespace DeadFrame2D::Engine;
using namespace Shared::Constants;


ExampleBlueprint::ExampleBlueprint(Vector2F startPos)
	: startPos(startPos)
{
}

void ExampleBlueprint::ConstructGameObject()
{
	transform->SetWorldPosition(startPos);

	AddComponent<Sprite>(Paths::Files::WINDOW_ICON);
	AddComponent<ExampleComponent>(100.0f, 2.0f, 90.0f);
}