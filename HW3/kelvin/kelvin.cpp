//
//kelvin.cpp
//Harrison Moore
//CS201
//Feb 17, 2020
//
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double convert(double t)
{
	double k = t + 273.15;
	return k;
}

int main()
{
	double t = 0;
	cout << "Enter a temperature in Celsius: ";
	cin >> t;
}