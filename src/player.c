#include <SDL2/SDL.h>
#include "player.h"

void initPlayer(Player *player) {
	    player->x = 200;
	        player->y = 200;
		    player->angle = 0;
}

void handleInput(Player *player) {
	    SDL_Event event;
	        while (SDL_PollEvent(&event)) {
			        if (event.type == SDL_QUIT) {
					            exit(0);
						            }
				        if (event.type == SDL_KEYDOWN) {
						            if (event.key.keysym.sym == SDLK_LEFT) {
								                    player->angle -= 0.1; // Rotate left
										                }
							                if (event.key.keysym.sym == SDLK_RIGHT) {
										                player->angle += 0.1; // Rotate right
												            }
									        }
					    }
}
