//
//random-map.cpp
//Harrison Moore
//CS201
//April 10, 2020
//This program will..
//

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <cmath>
#include <stdlib.h>
#include <random>
using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::random_device;
using std::mt19937;


int RandomBetweenU(
    const int& first,
    const int& last,
    random_device& r);

int RandomBetweenN(
    const int& first,
    const int& last,
    const int& mean,
    mt19937& e2);

int RandomBetween(
    const int& first,
    const int& last);

void PrintDistribution(
    const map<int, int>& numbers,
    const int& star);

