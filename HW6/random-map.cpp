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

int main()
{
    // Seed with a real random value, if available
    random_device r;

    std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
    mt19937 e2(seed2);


    int mean = (first + last) / 2;
    int star = (1000 / (last - first));

    map<int, int> hist1;
    for (int n = 0; n < 10000; ++n)
    {
        ++hist1[std::round(RandomBetweenU(first, last, r))];
    }
    map<int, int> hist2;
    for (int n = 0; n < 10000; ++n)
    {
        ++hist2[std::round(1 + RandomBetweenN(first, last, mean, e2))];
    }
    map<int, int> hist3;
    for (int n = 0; n < 10000; ++n)
    {
        ++hist3[std::round(RandomBetween(first, last))];
    }
}
