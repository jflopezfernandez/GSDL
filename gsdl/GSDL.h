#ifndef GSDL_GSDL_H_
#define GSDL_GSDL_H_

#ifndef EXTLIB_SDL2_INCLUDED
#define EXTLIB_SDL2_INCLUDED
#include <SDL2/SDL.h>
#endif // EXTLIB_SDL2_INCLUDED

class App {
public:
	App() { }

	void Initialize() const noexcept;

	int OnExecute() { return 0; }
};


#endif // GSDL_GSDL_H_
