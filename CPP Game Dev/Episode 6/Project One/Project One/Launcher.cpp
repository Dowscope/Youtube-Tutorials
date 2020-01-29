/*
	2D C++ Game Development
	YouTube Tutorial
	Episode 6

	Initializing SDL and creating a window - Part 1
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

	r = new Room();
	return 0;
}