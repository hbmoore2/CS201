//
//hangman.cpp
//Harrison Moore
//CS201
//April 10, 2020
//This program will play a game of hangman.
//

#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

void blankSpace(vector<string>& blank) // Prints underscores for the letters that havent been revealed
{
	for_each(blank.begin(), blank.end(), [](string a) {cout << a; });
}

void showLetter(vector<string>& answer, vector<string>& blank, string guess)
{
	vector<string>::iterator it = find(answer.begin(), answer.end(), guess);
	blank[it - answer.begin()] = guess;
}

bool isCorrect(vector<string> answer, string guess) // Determines if guess is correct
{
	if (find(answer.begin(), answer.end(), guess) != answer.end())
	{
		return true;
	}
	return false;
}

bool alreadyGuessed(map<string, int>& usedGuesses, string guess)
{
	map<string, int>::iterator it = usedGuesses.find(guess);
	if (it != usedGuesses.end())
	{
		return true;
	}
	else
		return false;
}

bool AllLettersFound(vector<string>& answer, vector<string>& blank)
{
	if (answer == blank)
	{
		return true;
	}
	else
		return false;
}