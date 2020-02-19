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
		}
	cout << star << endl;
}

void box