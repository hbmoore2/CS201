//
//L28.cpp
//Harrison Moore
//CS201
//April 17, 2020
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <fstream>


std::vector<int> numbers();
void printIntegersToFile(const std::vector<int>& integers, std::ofstream& output);


int main() {

    std::ofstream file("Text.txt"); // Opens file 

    if (!file) { // Error message if file couldn't be opened
        std::cout << "ERROR: FILE COULD NOT BE OPENED" << std::endl;
    }
    else
    {
    }

    if (!file) { // Error message if unable to write to file
        std::cout << "Error writing in file" << std::endl;
    }

    std::vector<int> integers = numbers();
    int seed = 5;
    std::shuffle(integers.begin(), integers.end(), std::default_random_engine(5));

    printIntegersToFile(integers, file);

    return 0;
}

std::vector<int> numbers() {

    std::ofstream file("Text.txt");

    std::vector<int> integers;

    for (int i = 1; i <= 100; i++)
    {
        integers.push_back(i);
    }
    return integers;
}

void printIntegersToFile(const std::vector<int>& integers, std::ofstream& output) {

    for (int i = 1; i <= 100; i++) {
        output << std::setw(4) << integers[i - 1];
        if (i % 10 == 0) {
            output << '\n';
        }
    }
}