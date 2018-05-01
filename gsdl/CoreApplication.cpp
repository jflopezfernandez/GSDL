
#include <SDL2/SDL.h>

#ifndef GSDL_CORE_APPLICATION_H_
#include "CoreApplication.h"
#endif // GSDL_CORE_APPLICATION_H_

namespace GSDL {
	App::App()
		: running(true), screen(NULL) {
		// IMPLEMENT
	}

	int App::onExecute() {
		if (!onInit()) {
			return -1;
		}

		SDL_Event event;

		while (running) {
			while (SDL_PollEvent(&event)) {
				onEvent(&event);
			}

			onLoop();
			onRender();
		}

		onCleanup();
	}

	bool App::onInit() {
		//if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		//	return false;
		//}
		
		//screen = SDL_CreateWindow("Game Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_FULLSCREEN | SDL_WINDOW_OPENGL);

		//if (!screen) {
		//	return false;
		//}

		//SDL_Renderer *renderer = SDL_CreateRenderer(screen, -1, 0);

		//if (!renderer) {
		//	return false;
		//}

		//SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		//SDL_RenderClear(renderer);
		//SDL_RenderPresent(renderer);

		return true;
	}

	void App::onEvent(SDL_Event *event) {
		if (event->type == SDL_QUIT) {
			running = false;
		}
	}

	void App::onLoop() {
		// IMPLEMENT
	}

	void App::onRender() {
		// IMPLEMENT
	}

	void App::onCleanup() {
		SDL_Quit();
	}
}
