//
//bulls-and-cows.cpp
//Harrison Moore
//CS201
//Feb 26, 2020
//This program will make the user guess a 4-digit number
//

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::istringstream;

int main()
{
	vector<int> Vrandom(4, -1);
	vector<int> numbers{ 0,1,2,3,4,5,6,7,8,9 };

	int guess;
	int done = 1;
	int bulls = 0;
	int cows = 0;
	int trys = 0;

	string s;
	vector<int> Vguess(4);

	cout << "I am going to think of a four digit number." << endl;
	for (int i = 0; i < 4; i++)
	{
		int a = -1;
		int random;
		while (a == -1)
		{
			srand(time(0));
			random = (rand() % 10);
			a = Vrandom[i] = numbers[random];
			numbers[random] = -1;
		}
	}
	cout << endl;

	cout << "Guess the four digit number: ";
	while (bulls < 4)
	{
		if (trys > 0)
			cout << "Enter another guess: ";
		done = 1;
		while (done != 0)
		{
			std::getline(cin, s);
			istringstream instream(s);
			instream >> guess;
			if (!instream)
				cout << "Please enter integers only." << endl;
			else
				done = 0;
		}
		if (guess < 0)
			for (int i = 0; i < Vrandom.size(); i++)
			{
				cout << Vrandom[i];
			}
		int num1;
		int num2;
		int num3;
		int num4;

		num1 = (guess / 1000);
		Vguess[0] = (num1);
		num2 = ((guess - num1 * 1000) / 100);
		Vguess[1] = (num2);
		num3 = ((guess - num1 * 1000 - num2 * 100) / 10);
		Vguess[2] = (num3);
		num4 = (guess - num1 * 1000 - num2 * 100 - num3 * 10);
		Vguess[3] = (num4);

		bulls = 0;
		cows = 0;

		for (int i = 0; i < Vrandom.size(); i++)
		{
			if (Vguess[i] == Vrandom[i])
				bulls++;
			else
				for (int j = 0; j < Vrandom[i]; j++)
					if (Vguess[j] == Vrandom[i])
						cows++;
		}
		cout << endl;
	}
	cout << "Congratzzz! You guessed it!" << endl;

	int a;
	cout << endl;
	cin >> a;
	return 0;
}