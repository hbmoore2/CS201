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
	int size;
	string s;
	int i;

	cout << "Type leave to exit the program." << endl;
	while (s != "leave")
	{
		cout << "Please enter an integer (size): ";
		cin >> size;

		if (size > 1)
		{
			cout << "Please enter a string: ";
			cin >> s;
			if (s == "leave")	//exits program
			{
				return 0;
			}

			for (int i = 0; s.length() > i; i++)
			{
				for (int a = 0; a < size; a++)
				{
				}
			}
		}
		else
		{
			cout << "Please enter an integer greater than 0." << endl;
		}
	}
}