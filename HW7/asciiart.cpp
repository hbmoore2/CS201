//
//asciiart.cpp
//Harrison Moore
//CS201
//April 17, 2020
//This program will output an ASCII art from a PPM file.
//

#include <iostream>
#include "Color3.h"
#include "Image3.h"

using std::cout;
using std::endl;
using std::cin;
using std::ifstream;
using std::ofstream;


int main()
{
    Image3 image(0, 0);
    if (image.loadPPM("parrot.jpg"))
    {
        image.printASCII(cout);
    }
}