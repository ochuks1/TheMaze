#ifndef PLAYER_H
#define PLAYER_H

typedef struct Player {
	    float x;
	        float y;
		    float angle;
} Player;

void initPlayer(Player *player);
void handleInput(Player *player);

#endif
