//
//lab25.cpp
//Harrison Moore
//CS201
//April 10, 2020
//

#include <vector>
#include <iostream>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector <int> data1{ 2, 6, 2, 3, 6, 7, 9, 4, 1, 0, 7, 3, 6, 3, 5, 2 };
vector <int> data2{ 2, 6, 0, 3, 1, 7, 5, 4, 1, 4, 7, 3, 6, 3, 5, 2 };
vector <int> data3{ 2, 6, 2, 3, 6, 7, 9, 4, 1, 0, 7, 3, 6, 3, 5, 2 };

int main()
{
	auto iter1 = data1.begin();
	auto iter2 = data2.begin();
	auto data_mismatch = std::mismatch(iter1, data1.end(), iter2);
	auto number_of = data_mismatch.first;
	if (data_mismatch.first == data1.end())
		cout << "Values are all the same." << endl;
	else
		cout << "Mismatches." << endl;
	while (true)
	{
		data_mismatch = std::mismatch(iter1, data1.end(), iter2);
		if (data_mismatch.first == data1.end())
			break;
		cout << data_mismatch.first[0] << " " << data_mismatch.second[0] << endl;
		iter1 = next(data_mismatch.first, 1);
		iter2 = next(data_mismatch.second, 1);
	}
}