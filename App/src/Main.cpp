#include "Application.h"
#include <Tools/FileSystem/PathMountResolver.h>


int main(int argc, char** argv)
{
	Shared::Tools::PathMountResolver::SetMountPrefix("Core");

	Application().Run();

	return 0;
}