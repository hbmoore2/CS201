//
//bulls-and-cows.cpp
//Harrison Moore
//CS201
//Feb 26, 2020
//This program will make the user guess a 4-digit number
//

#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::istringstream;

void bulls(string guess);
void cows(string guess);

string ans = "6183";		// ANSWER
string guess = "";			//User's guess

int main()
{
	cout << "Welcome to the game of bulls and cows!" << endl;
	cout << "Guess the four digit number: ";

	while(guess != ans)
	{
		getline(cin, guess);			//User input
		int num;
		istringstream wrong(guess);
		wrong >> num;
		if (guess.size() < 4 || guess.size() > 4 || !wrong)
		{
			cout << "Enter only 4 digits!" << endl;
		}
		bulls(guess);
		cows(guess);
	}
	cout << endl;
	cout << "Congratzzz!!! You guessed all the numbers!" << endl;
	return 0;
}

void bulls(string guess)
{
			int bulls = 0;
			for (int i = 0; i < 4; i++)
			{
				if (ans.at(i) == guess.at(i))
						bulls++;
			}
			if (bulls == 0 || bulls > 1)			//plural
				cout << bulls << " bulls and ";
			else if(bulls == 1)						//singular
				cout << bulls << " bull and ";
}

void cows(string guess)
{
	int cows = 0;

	if (guess.at(0) == '1' || guess.at(0) == '8' || guess.at(0) == '3')
		cows++;
	if (guess.at(1) == '6' || guess.at(1) == '8' || guess.at(1) == '3')
		cows++;
	if (guess.at(2) == '6' || guess.at(2) == '1' || guess.at(2) == '3')
		cows++;
	if (guess.at(3) == '6' || guess.at(3) == '1' || guess.at(3) == '8')
		cows++;
	if (cows == 0 || cows > 1)		// correct number, wrong place
		cout << cows << " cows" << endl;		//plural
	else if (cows == 1)
		cout << cows << " cow" << endl;			//singular
}