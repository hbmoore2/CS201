//
//lab24.cpp
//Harrison Moore
//CS201
//April 10, 2020
//This program will print contents of a vector.
//

#include <vector>
#include <iostream>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector <int> data{ 3, 5, 1, 3, 7, 9, 5, 6, 4, 8, 2, 6, 0, 3, 4, 8 };

int main()
{
	auto print_data = [](vector <int>& data)
	{
		for (size_t i = 0; i < data.size(); i++)
		{
			cout << data[i] << " ";
		}
		cout << endl << endl;
	};

	cout << "Data:" << endl;
	print_data(data);

	cout << "Sorted data:" << endl;
	auto iter1 = data.begin();
	auto iter2 = data.end();
	sort(iter1, iter2);
	print_data(data);

	cout << "Reversed data after sort:" << endl;
	reverse(iter1, iter2);
	print_data(data);

	cout << "Filled subset in data:" << endl;
	fill(iter1, iter2, 0);
	print_data(data);
}