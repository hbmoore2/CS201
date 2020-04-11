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

int main()
{
	vector<string> answer{ "s","k","y" };
	vector<string> blank{ "_","_","_" };
	string guess; //The letter guessed
	map<string, int> usedGuesses; // Stores letters used in guesses.
	int attempts = answer.size() * 2; // Gets 6 tries
	int win = 0;
	cout << "*WELCOME TO THE GAME OF HANGMAN*" << endl << endl;
	while (attempts != 0 && win == 0)
	{
		cout << "Attempts left: " << attempts << endl;
		blankSpace(blank);
		cout << endl << "Guess a letter or the word: ";
		getline(cin, guess);
		if (alreadyGuessed(usedGuesses, guess))
		{
			cout << "You already guessed that! Type in a different letter." << endl;
			continue;
		}
		if (guess.length() == 1) // determines if the guess is a letter or a word
		{
			if (isCorrect(answer, guess))
			{
				cout << guess << " is correct! " << endl;
				usedGuesses[guess] = attempts;
				attempts--;
				showLetter(answer, blank, guess);
			}
			else
			{
				cout << guess << " is incorrect." << endl;
				usedGuesses[guess] = attempts;
				attempts--;
			}
		}
		// Will end loop if correct
		else if (guess == "sky")
		{
			cout << "Correct! The answer is sky!" << endl;
			win = 1;
		}
		else
		{
			cout << guess << " is incorrect. " << endl;
			usedGuesses[guess] = attempts;
			attempts--;
		}
		if (AllLettersFound(answer, blank))
		{
			cout << "The word is complete! The answer is sky!" << endl;
			win = 1;
		}
	}
	if (attempts == 0)
	{
		cout << "You're all out of attempts! Try again!";
	}
}