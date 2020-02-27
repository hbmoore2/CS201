//
//fifo-lifo.cpp
//Harrison Moore
//CS201
//Feb 26, 2020
//This program will let a user put items into a container and pop them out.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

string str;
int fifolifo;


int main()
{
	cout << "Hello, welcome to your container." << endl;
	cout << "\nHow would you like to fill your container?" << endl;
	cout << "With Fifo (First-In First-Out) or with Lifo (Last-In First-Out)?" << endl;
	cout << "Enter \"Fifo\" for Fifo or \"Lifo\" for Lifo: ";
	while (true)
	{
		if (fifolifo > 0) // Notifies the user of what they need to enter.
			cout << "Please specifically enter \"Fifo\" or \"Lifo\"." << endl;
		cin >> str;
		if (str == "Fifo")
			break;
		if (str == "Lifo")
			break;
		fifolifo++;
	}
	cout << endl;
}