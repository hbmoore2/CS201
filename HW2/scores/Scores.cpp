//
//scores.cpp
//Harrison Moore
//CS 201
//Feb 10, 2020
//
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> people;
	vector<int> scores;

	string a;
	int b;
	bool flag = false;

	while (flag == false)
	{
		cout << "Enter a name and score. Type 'end' to stop." << endl;
		cout << "name: ";
		cin >> a;
		if (a == "end")
			break;

		for (int i = 0; i < people.size(); i++)
		{
			if (a == people[i])
			{
				cout << "Error: Name is already in use." << endl;
				flag = true;
			}
		}
		if (flag == false)
		{
			cout << "score: ";
			cin >> b;

			people.push_back(a);
			scores.push_back(b);

			cout << endl;
		}
	}
	for (int i = 0; i < people.size(); i++)
	{
		cout << people[i] << " " << scores[i] << endl;
	}
}