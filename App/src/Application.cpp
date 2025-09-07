#include "Application.h"
#include "Scenes/ExampleScene.h"
#include <Core/SubSystems/Systems/Window.h>


Application::Application()
{
	Window::SetWindowTitle("Hello World!");

	SceneManager::LoadScene<ExampleScene>();
}