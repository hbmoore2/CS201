//
//boxer.cpp
//Harrison Moore
//CS201
//Feb 17, 2020
//
#include <iostream>
#include <string>
#include <vector>
#include "boxer.h"

string box(string s, int n)
{
    string star = "";
    string layers;    
    string message = "";

    string wid = "";  
    for (int i = 0; i < n; i++)
    {
        wid += "*";
    }

    if (n != 0)
    {
        star = "**";
        for (int i = 0; i < s.size(); i++) // size of box
        {
            star += "*";
        }
        star = wid + star + wid;
        if (n > 1)
        {
            for (int i = 0; i < n; i++)     // box width
            {
                layers += star;

                if (i < n - 1)    
                    layers += "\n";
            }
            star = layers;
        }
    }

    message += wid + " ";
    for (int i = 0; i < s.size(); i++)
    {
        message += " ";
    }
    message += " " + wid;

    message += "\n" + wid + " " + s + " " + wid + "\n"; // message in box

    message += wid + " ";
    for (int i = 0; i < s.size(); i++)
    {
        message += " ";
    }
    message += " " + wid;
    return star + "\n" + message + "\n" + star;
}