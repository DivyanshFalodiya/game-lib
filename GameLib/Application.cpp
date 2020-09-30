#define SDL_MAIN_HANDLED

#include "Menu/Menu.h"
#include "Tic/Tic.h"
#include "Pong/Pong.h"

void runTic() {
	Tic obj;
	obj.ticMenu();
	obj.loop();
}

void runPong() {
	Pong obj;
	obj.loop();
}

int main() {
	while (1) {
		Menu m;
		int choice = m.loop();
		switch (choice) {
		case 0:
			runTic();
			break;
		case 1:
			runPong();
			break;
		case 2:
			exit(0);
			break;
		}
	}
	return 0;
}