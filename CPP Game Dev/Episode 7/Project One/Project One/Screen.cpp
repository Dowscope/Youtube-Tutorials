#include <SDL.h>
#include <iostream>
#include "Screen.h"

Screen::Screen(int width, int height):
	_height(height), _width(width)
{
	
}


Screen::~Screen()
{
}

bool Screen::initialize() {

	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		std::cout << "SDL Not Initialized" << std::endl;
		return false;
	}

	_window = SDL_CreateWindow("Our Game",
								SDL_WINDOWPOS_CENTERED,
								SDL_WINDOWPOS_CENTERED,
								_width,
								_height,
								0);

	if (_window == NULL) { 
		std::cout << "Window did not initialize" << std::endl;
		return false; 
	}
	

	std::cout << "SDL Initialized" << std::endl;
	return true;
}

void Screen::cleanup() {
	SDL_DestroyWindow(_window);
	SDL_Quit();
}
