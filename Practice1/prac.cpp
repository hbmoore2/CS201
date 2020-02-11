#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	std::vector<std::string> people; // Vectors are established
	std::vector<int> scores;

	std::string x; //establishing variables
	int y;
	bool flag = false;

	while (flag == false)
	{
		cout << "Input name and score, type end to stop " << endl;
		cin >> x;
		if (x == "end")
			break;

		for (int i = 0; i < people.size(); i++)
		{
			if (x == people[i]) // error message
			{
				cout << "Error: Name is already in use";
				flag = true;
			}
		}
		if (flag == false)
		{
			cout << "score\n" << endl; // collecting score input
			cin >> y;

			people.push_back(x);
			scores.push_back(y);

			cout << "\n\n";
		}
	}
	for (int i = 0; i < people.size(); i++)
	{
		cout << people[i] << " - " << scores[i] << "\n";// Displays ending scores and names
	}
}