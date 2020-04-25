//
//minesweeper.cpp
//Harrison Moore
//CS 201
//April 27, 2020
//This program will allow the user to play a game of minesweeper.
//

//
// sometimes the game will enter multiple coordinates. NOT PERFECT :/
//

#include <iostream>
#include "game.h"
#include <string>
#include <time.h>

using namespace std;

void getUserInput(int& result, const string message)
{
	cout << message;
	while (!(cin >> result))
	{
		cout << message;
		cin.clear();
		cin.ignore();
	}
}


int main()
{
	int minecount, sizeX, sizeY, x, y, status;
	string turn;
	cout << "################################" << endl;
	cout << "###  WELCOME TO MINESWEEPER  ###" << endl;
	cout << "################################" << endl << endl;
	getUserInput(sizeX, "Enter Minefield Width (3-16): ");
	getUserInput(sizeY, "\nEnter Minefield Height (3-16): ");
	getUserInput(minecount, "\nEnter the number of mines: ");
	Game game(minecount, sizeX, sizeY);

	time_t start = time(0);
	// main game loop
	while (true)
	{
		cout << "Enter Coordinates xy (Ex. ac OR eb): ";
		cin >> turn;
		if (turn.length() > 2)
		{
			cout << endl << "No. Enter two letters in range:" << endl;
			continue;
		}
		// convert char to int
		x = turn[1] - 97;
		y = turn[0] - 97;
		status = game.update(x, y);
		if (status == -1)
		{
			cout << endl << "**EXPLOSION**. Oh no! you hit a mine!" << endl <<
				"Press any key to exit";		//Lost the game. Hit mine.
			break;
		}
		if (status == 1)
		{
			int t = (int)difftime(time(0), start);
			cout << endl << "Congratulations! You won the game in " << t << " seconds." << endl;
			break;
		}
	}
	return 0;
}