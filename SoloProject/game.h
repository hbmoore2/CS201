//
//game.h
//Harrison Moore
//CS 201
//April 27, 2020
//

#ifndef GAME_H
#define GAME_H

#include "minefield.h"

class Game
{
public:
	Game(int minecount, int x, int y);
	~Game();
	int update(int x, int y);
private:
	//minefield
	Board board;
};

#endif