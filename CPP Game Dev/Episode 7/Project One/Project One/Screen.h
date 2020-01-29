#pragma once

#include <SDL.h>

class Screen
{
private:
	int _height, _width;
	SDL_Window* _window;
public:
	Screen(int width, int height);
	~Screen();

	bool initialize();
	void cleanup();
};

