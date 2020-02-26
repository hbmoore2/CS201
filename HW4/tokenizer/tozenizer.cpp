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
unsigned StringToTokenWS(const string& str, vector<string>& tokens)
{
	istringstream instream(str);
	string s;
	int a = 0;
	while (a < str.size())
	{
		instream >> s;
		tokens.push_back(s);
		a = a + s.size() + 1;
	}
	return 0;
}