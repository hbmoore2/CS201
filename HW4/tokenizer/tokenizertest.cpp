//
//tokenizertest.cpp
//Harrison Moore
//CS201
//Feb 26, 2020
//This program will test the program
//

#include "tokenizer.h"

int main()
{
	int end = 1;
	cout << "Please enter some text. To finish, type \"end\", \"End\" or \"END\":" << endl;
	string str;
	vector<string> tokens;

	while (end != 0)		//Keeps the user in program
	{
		ReadLine(str);
		StringToTokenWS(str, tokens);

		if (str == "end")
			end = 0;
		if (str == "End")
			end = 0;
		if (str == "END")
			end = 0;
	}
	tokens.pop_back();

	AnalyzeTokens(tokens);

	int b;
	cout << endl;
	cout << "Program finished. Enter a character to end: ";
	cin >> b;
	return 0;
}

