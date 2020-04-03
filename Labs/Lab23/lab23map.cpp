//
//lab23map.cpp
//Harrison Moore
//CS201
//April 1, 2020
//This program will...
//
#include <map>
using std::map;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <Windows.h>
#include <iomanip>
using std::setw;
#include <ios>
using std::left;

map<string, string> dialogue = {
	{ "Y-O", "H-E-L-L-O"},
	{ "I am bored", "Me too"},
	{ "I am a computer", "H-A-H-A me too"},
	{ "uhhhh", "meow"},
	{ "goodnight.", "goodnight!"}
};

int main()
{
	srand(time(0));
	int randvalue = ((rand()) % 5);
	switch (randvalue)
	{
	case 0:
		dialogue.erase("Y-O");
		break;
	case 1:
		dialogue.erase("I am bored");
		break;
	case 2:
		dialogue.erase("I am a computer");
		break;
	case 3:
		dialogue.erase("uhhhh");
		break;
	case 4:
		dialogue.erase("goodnight.");
		break;
	}

	for (const auto& p : dialogue)
	{
		auto k = p.first;
		auto v = p.second;
		cout << "Bot 1: " << setw(12) << left << k << "Bot 2: " << v;
		cout << endl;
		Sleep(0700);
	}
}