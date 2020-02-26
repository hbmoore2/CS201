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

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

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
}