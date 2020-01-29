#pragma once

#include <SDL.h>

class Screen
{
private:
	int _height, _width;
public:
	Screen(int width, int height);
	~Screen();

	bool initialize();
};

