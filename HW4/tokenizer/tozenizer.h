//
//tozenizer.h
//Harrison Moore
//CS201
//Feb 26, 2020
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool ReadLine(string& str);
unsigned StringToTokenWS(const string& input, vector<string>& tokens);
void AnalyzeTokens(const vector<string>& tokens);