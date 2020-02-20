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

double convert(double t)		//temp conversion
{
	double k = t + 273.15;
	return k;
}

int main()
{
	double t = 0;
	cout << "Enter a temperature in Celsius to convert to Kelvin: ";
	cin >> t;

	double k = convert(t);
	if (k < 0)						//error message if input is invalid
	{
		cout << "This temperature is not possible.";
		return 0;
	}
	cout << k << endl;
}