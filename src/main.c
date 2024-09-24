#include <SDL2/SDL.h>
#include "maze.h"
#include "player.h"

#define WIDTH 800
#define HEIGHT 600

int main(void) {
	    SDL_Window *window = NULL;
	        SDL_Renderer *renderer = NULL;
		    Player player;
		        int map[5][5] = {
				        {1, 1, 1, 1, 1},
					        {1, 0, 0, 0, 1},
						        {1, 0, 1, 0, 1},
							        {1, 0, 0, 0, 1},
								        {1, 1, 1, 1, 1}
					    };

			    SDL_Init(SDL_INIT_VIDEO);
			        window = SDL_CreateWindow("The Maze", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
				    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
				        
				        initPlayer(&player);

					    int running = 1;
					        while (running) {
							        handleInput(&player);
								        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
									        SDL_RenderClear(renderer);
										        drawMaze(renderer, map, player.angle);
											        SDL_RenderPresent(renderer);
												        SDL_Delay(16);
													    }

						    SDL_DestroyRenderer(renderer);
						        SDL_DestroyWindow(window);
							    SDL_Quit();
							        return 0;
}

