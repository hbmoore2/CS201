//
//tozenizer.h
//Harrison Moore
//CS201
//Feb 26, 2020
//This header file declares tokenizer.cpp as a function
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::istringstream;

#ifndef tokenizer_H
#define tokenizer_H

bool ReadLine(string& str);
unsigned StringToTokenWS(const string& input, vector<string>& tokens);
void AnalyzeTokens(const vector<string>& tokens);

#endif