//
//floating_point_main.cpp
//Harrison Moore
//CS201
//Mar 23, 2020
//This program will do floating-point computation with floating_point.cpp
//

#include "floating_point.h"

int main()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	for (size_t i = 2; i < v.size(); ++i)
	{
		++v[i];
		cout << endl;
	}

	vector<double> radians = degreesToRadians(360);

		// prints out the list
	cout << "degree, cos, sin" << endl;
	for (size_t i = 0; i < radians.size(); i++)
	{
		cout << i << ", " << std::cos(radians[i]) << ", " << std::sin(radians[i]) << endl;
	}
	return 0;
}