//
//truncstructmain.cpp
//Harrison Moore
//CS201
//April 1, 2020
//This program will input a string from the user and pass it to function trunc8.
//

#include "truncstruct.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;


int len;

int main()
{
	string a;
	cout << "Type in a string: ";
	cin >> a;
	cout << endl;

	StringInfo type_string;

	if (len > 0)
	{
		StringInfo input{ a, len };
		type_string = trunc(input);
	}
	else
		type_string = trunc8(a);

	string s = type_string.str;
	len = type_string.len;

	cout << "You typed: " << s << " and it has a length of " << len << "." << endl;
}