#ifndef GSDL_CORE_APPLICATION_H_
#define GSDL_CORE_APPLICATION_H_

#ifndef EXTLIB_SDL2_INCLUDED
#define EXTLIB_SDL2_INCLUDED
#include <SDL2/SDL.h>
#endif // EXTLIB_SDL2_INCLUDED

namespace GSDL {
	class App {
		bool running;

		SDL_Window *screen;

	public:
		App();

		int onExecute();

		bool onInit();

		void onEvent(SDL_Event *event);

		void onLoop();

		void onRender();

		void onCleanup();
	};
}


#endif // GSDL_CORE_APPLICATION_H_
