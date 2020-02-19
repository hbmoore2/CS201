//
//boxprint.cpp
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

void TopBottom(string s, int size)
{
	string star(size, '*')
		for (int i = 0; i < size; i++)
		{
			cout << "*";
			for (int a = 0; a < m.length() + 2; k++)
			{
				cout << "*";
			}
			cout << star << endl;
		}
}

void box(string m, int size)
{
	string star(size, "*")
		TopBottom(s, size);
	cout << star;
	for (int b = 0; b < m.length() + 2; b++)
	{
		cout << " ";
	}
	cout << star << endl;
	cout << star << " " << m << " " << star << endl;
	cout << star;
	for (int b = 0; b < m.length() + 2; b++)
	{
		cout << " ";
	}
	cout << star << endl;
	TopBottom(m, size);
}