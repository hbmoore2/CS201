//
//fltk-truc.cpp
//Harrison Moore
//CS201
//April 3, 2020
//This program will use FLTK.
//

#include "truncstruct.h"
#include <iostream>
#include <FL/Fl.h>
#include <FL/Fl_Box.h>
#include <FL/Fl_Window.h>
#include <FL/Fl_Input.h>
using std::cout;
using std::cin;
using std::endl;


int integer;

int main(int argc, char** argv)
{
    Fl_Window* window = new Fl_Window(500, 300);
    Fl_Box* box1 = new Fl_Box(150, 20, 200, 30, "Welcome to Truncate!");
    box1->box(FL_UP_BOX);
    box1->labelfont(FL_BOLD + FL_ITALIC);
    box1->labelsize(16);

//Instructions
    Fl_Box* box2 = new Fl_Box(60, 60, 400, 20, "To truncate, you need to input a string and an integer value.");
    box2->box(FL_UP_BOX);
    box2->labelfont(FL_ITALIC);
    box2->labelsize(12);
}