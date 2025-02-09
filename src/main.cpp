#if defined(_WIN64)
	#define SDL_MAIN_HANDLED 
#endif

#include <SDL2/SDL.h>

#include "Game.hpp"
#include "GameUtils.hpp"

int main()
{
    Game game{ "Cardboard Pirates", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, g::windowW, g::windowH };
    game.run();
}
