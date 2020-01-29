/*
	2D C++ Game Development
	YouTube Tutorial
	Episode 7

	Initializing SDL and creating a window - Part 2
*/
#include <SDL.h>
#include "Room.h"
#include "Screen.h"

Screen* screen;
Room *r;

// Main Function
int main(int argc, char* argv[]) {
	screen = new Screen(800, 600);
	if (screen->initialize() != true) {
		return 1;
	}

	SDL_Delay(5000);

	screen->cleanup();

	r = new Room();
	return 0;
}