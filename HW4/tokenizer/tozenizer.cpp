//
//tozenizer.cpp
//Harrison Moore
//CS201
//Feb 26, 2020
//This program will take an input from the user and will output text
//

#include "tokenizer.h"

bool ReadLine(string & str)
{
	std::getline(cin, str);
	if (str.size() == 0)
		return false;
	else
		return true;
}
