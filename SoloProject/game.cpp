//
//game.cpp
//Harrison Moore
//CS 201
//April 27, 2020
//

#include "game.h"
#include <iostream>

using namespace std;

Game::Game(int minecount, int sizeX, int sizey) : board(Board(minecount, sizeX, sizey))
{
	// prints minefield
	board.print();
}

Game::~Game()
{
}

int Game::update(int x, int y)
{
	if (board.getData(x, y) == 'm')
	{
		// if a mine was hit
		return -1;
	}
	else if (board.getData(x, y) == '0')
	{
		// if empty field was hit
		board.checkEmptyField(x, y);
		// out of bounds
	}
	else if (board.getData(x, y) == 'o') {

	}
	else {
		// a number was hit
		board.moveToUIF(x, y);
	}
	if (board.getGameStatus() == 1) {
		board.print();
		return 1;
	}

	// clear screen after coordinates entered.
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	//prints minefield
	board.print();
	return 0;
}