//
//lab20.cpp
//Harrison Moore
//CS201
//Mar 26, 2020
//This program will print values of cosine for angles in intervals of 5 degrees.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ios>
#include <cstdlib>
using std::cout;
using std::endl;
using std::setprecision;
using std::setw;
using std::cos;

const double M_PI = std::acos(-1);

int main()
{
	for (int i = 0; i <= 180; i += 5)
		cout << setw(3) << i << setw(12) << std::fixed << setprecision(8) << cos(i * (M_PI / 180.0)) << endl;
}