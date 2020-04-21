//
//asciiart.cpp
//Harrison Moore
//CS201
//April 17, 2020
//This program will output an ASCII art from a PPM file.
//

#include "Image3.h"

struct RGB {
	int R = 0;
	int G = 0;
	int B = 0;
};
vector <RGB> Total_data;

int main()
{
	Image3 image(80, 80); // Sets the width and hight

	image.loadPPM("Parrot.txt"); // Loads the ppm (Actually made the ppm into a
	// text file becuase I was having a hard time getting it to read the ppm)
	// Named the text file "Parrot"

	for (int y = 0; y < image.h; y++) // iterates over the rows of pixels
	{
		for (int x = 0; x < image.w; x++) // iterates over each pixel in the specified row
		{
			// Outputs the pixel as one of 16 ascii characters
			cout << image.getPixel(x, y).asciiValue() << " "; // Spaces out the characters
														// to make it seem less squished
		}
		cout << endl; // Starts a new row
	}
	return 0;
}