//caesar-cypher
//Harrison Moore
//CS201
//April 20, 2020
//This program will...
//

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <sstream>
using std::istringstream;
#include <vector>
using std::vector;

unsigned StringToTokenWS(const string& user_string, vector<string>& tokens);

int main()
{
	string user_string;
	string cypher_shift_str;
	int cypher_shift_val;
	cout << "Caesar Cypher" << endl;
	cout << endl;
	while (true)
	{
		vector<string> tokens;
		// Takes users line
		cout << "Enter a message to cypher: ";
		std::getline(cin, user_string);
		if (user_string.size() == 0) // Checks if line is blank
			break;
		else
			StringToTokenWS(user_string, tokens);
	}
}