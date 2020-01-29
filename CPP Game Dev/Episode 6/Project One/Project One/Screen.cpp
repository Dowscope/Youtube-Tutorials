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

	

	std::cout << "SDL Initialized" << std::endl;
	return true;
}
