//
//mileskm.cpp
//Harrison Moore
//CS201
//Feb 3, 2020
//
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float m, k;
	cout << "Miles to Kilometers converter." << endl;
	cout << endl;
	cout << "Enter how many miles: ";
	cin >> m;
	cout << endl;

		// Calculate km from miles
	k = m * 1.609;
	cout << m << " miles is " << k << " kilometers" << endl;
	return 0;
}