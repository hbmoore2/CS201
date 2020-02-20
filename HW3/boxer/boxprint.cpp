//
//boxprint.cpp
//Harrison Moore
//CS201
//Feb 17, 2020
//
#include <iostream>
#include <string>
#include <vector>
#include "boxer.h"

int main()
{
    string s;
    int n; 

    while (s != "exit")
    {
        cout << "Enter a Message (type 'exit' to stop): " << endl;
        cin >> s;
        if (s == "exit")        // exits program
        {
            break;
        }
        cout << "Enter a positive integer: ";
        cin >> n;
        while (n < 0)
        {
            cout << "Please enter a positive integer: ";
            cin >> n;
        }
        cout << box(s, n) << endl;
    }
    return 0;
}