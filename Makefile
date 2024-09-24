CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -Iinc -lSDL2
SRC = src/main.c src/maze.c src/player.c src/raycasting.c
OBJ = $(SRC:.c=.o)

all: TheMaze

TheMaze: $(OBJ)
		$(CC) -o $@ $^

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ) TheMaze
