#include <SDL2/SDL.h>
#include "maze.h"

void drawMaze(SDL_Renderer *renderer, int map[5][5], float playerAngle) {
	    for (int y = 0; y < 5; y++) {
		            for (int x = 0; x < 5; x++) {
				                if (map[y][x] == 1) {
							                SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Wall color
									                SDL_Rect wall = { x * 100, y * 100, 100, 100 };
											                SDL_RenderFillRect(renderer, &wall);
													            }
						        }
			        }
}
