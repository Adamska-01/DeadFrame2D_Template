#pragma once
#include <Core/Engine.h>


class Application : public DeadFrame2D::Core::Engine
{
public:
	Application();

	virtual ~Application() = default;
};