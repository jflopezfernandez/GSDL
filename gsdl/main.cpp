
#include <Windows.h>

#include <SDL2/SDL.h>

#include <iostream>

#include "GSDL.h"



int main(int argc, char *argv[])
{
	SDL_ShowSimpleMessageBox(NULL, "Test", "Hello, world!", NULL);

	GSDL::App application;

	return application.onExecute();
}