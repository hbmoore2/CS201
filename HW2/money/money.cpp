//
//money.cpp
//Harrison Moore
//CS 201
//Feb 10, 2020
//
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int pennies;
int nickels;
int dimes;
int quarters;
int dollars;

int main()
{
	cout << "How many pennies do you have?" << endl;
	cin >> pennies;
	cout << "How many nickels do you have?" << endl;
	cin >> nickels;
	cout << "How many dimes do you have?" << endl;
	cin >> dimes;
	cout << "How many quarters do you have?" << endl;
	cin >> quarters;
	cout << "How many dollars do you have?" << endl;
	cin >> dollars;
	return 0;
}