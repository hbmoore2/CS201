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
	tokens.push_back("");
	return 0;
}
void AnalyzeTokens(const vector<string>& tokens)
{
	for (int i = 0; i < tokens.size(); i++)
	{
		int noti = 0;
		string::size_type pos1 = tokens[i].find_first_of("0123456789");
		string::size_type pos2 = tokens[i].substr(0, 1).find_first_of("_0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
		string::size_type pos3 = tokens[i].find_first_of("\"");
		if (pos1 > 1000)
			noti++;
		else
			for (int j = 0; j < tokens[i].size(); j++)
			{
				if (tokens[i].substr(j, 1).find_first_of("0123456789") > 1)
					noti++;
			}
		if (noti == 0)
			cout << "[integer]              \"" << tokens[i] << "\"" << endl;
		else if (tokens[i].size() == 0)
			cout << "[integer]              \"\"" << tokens[i] << endl;
	}
}