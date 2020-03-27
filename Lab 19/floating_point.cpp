//
//floating_point.cpp
//Harrison Moore
//CS201
//Mar 23, 2020
//This program will calculate radians from degrees.
//

#include "floating_point.h"


vector<double> degreesToRadians(int degrees)
{
	vector<double> radians(degrees + 1);
	double compute_radian;

	for (int degree = 0; degree <= degrees; degree++)
	{
		compute_radian = (degree * (M_PI / 180.0));
		radians[degree] = compute_radian;
	}

	return radians;
}