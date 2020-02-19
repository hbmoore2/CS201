//
//boxer.cpp
//Harrison Moore
//CS201
//Feb 17, 2020
//
#include <iostream>
#include <string>
#include "boxer.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string s;
	int size;

	cout << "Type leave to exit the program." << endl;
	while (s != "leave")
	{
		cout << "Please enter a string: ";
		cin >> s;
		if (s == "leave")			//exits the program
		{
			return 0;
		}
		cout << "Please enter an integer (size): ";
		cin >> size;

		if (size < 0)
		{
			while (size < 0)
			{
				cout << "Please enter an integer greater than 0." << endl;
				cin >> size;
			}
		}
		box(s, size);
	}
}