//
//fltk-truc.cpp
//Harrison Moore
//CS201
//April 3, 2020
//This program will use FLTK.
//

#include "truncstruct.h"
#include <iostream>
#include <string>
#include <FL/Fl.h>
#include <FL/Fl_Box.h>
#include <FL/Fl_Window.h>
#include <FL/Fl_Input.h>
#include <FL/Fl_Output.h>
#include <FL/Fl_Value_Input.h>
#include <FL/Fl_Button.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int integer;

int main(int argc, char** argv)
{
    Fl_Window* window = new Fl_Window(500, 300);
    Fl_Box* box1 = new Fl_Box(150, 20, 200, 30, "Welcome to Truncate!");
    box1->box(FL_UP_BOX);
    box1->labelfont(FL_BOLD + FL_ITALIC);
    box1->labelsize(16);

//Instructions
    Fl_Box* box2 = new Fl_Box(60, 60, 400, 20, "Enter a string to truncate.");
    box2->box(FL_UP_BOX);
    box2->labelfont(FL_ITALIC);
    box2->labelsize(12);

//User input (string)
    Fl_Input* input1 = new Fl_Input(140, 90, 130, 20, "Type in a string:");
    input1->box(FL_UP_BOX);
    input1->labelfont(FL_ITALIC);
    input1->labelsize(12);
    input1->value("");

//User input (Integer)
    Fl_Box* box3 = new Fl_Box(60, 120, 300, 20, "Enter the number of characters you want to truncate.");
    box3->box(FL_UP_BOX);
    box3->labelfont(FL_ITALIC);
    box3->labelsize(12);
    Fl_Value_Input* input2 = new Fl_Value_Input(150, 150, 130, 20, "Pick an integer:");
    input2->box(FL_UP_BOX);
    input2->labelfont(FL_ITALIC);
    input2->labelsize(12);
    input2->value(integer);

//Truncate button
    Fl_Button* button1 = new Fl_Button(130, 180, 100, 20, "Truncate");
    button1->box(FL_UP_BOX);
    button1->labelfont(FL_BOLD + FL_ITALIC);
    button1->labelsize(12);
    button1->value();

//Quit button
    Fl_Button* button2 = new Fl_Button(250, 180, 100, 20, "Quit");
    button2->box(FL_UP_BOX);
    button2->labelfont(FL_BOLD + FL_ITALIC);
    button2->labelsize(12);
    button2->value();

    window->end();
    window->show(argc, argv);
    return Fl::run();
}