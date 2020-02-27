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

string ans = "2940";		// ANSWER
string guess = "";			//User's guess

int main()
{
	cout << "Welcome to the game of bulls and cows!" << endl;
	cout << "Guess the four digit number: ";

	while(guess != ans)
	{
		getline(cin, guess);
		int num;
		istringstream wrong(guess);
		wrong >> num;
		if (guess.size() < 4 || guess.size() > 4 || !wrong)
		{
			cout << "Enter only 4 digits!" << endl;
		}
	}
}