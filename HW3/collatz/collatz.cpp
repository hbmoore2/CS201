//
//collatz.cpp
//Harrison Moore
//CS201
//Feb 17, 2020
//
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int collatz(int num);
int main()
{
	int a;
	cout << "Enter a positive integer: ";
	cin >> a;
	while (a <= 0)
	{
		cout << "Please enter a positive number: ";
		cin >> a;
	}
	while (a > 1)
	{
		cout << a << " ";
		a = collatz(a);
	}
	cout << a << endl;
	return 0;
}

int collatz(int num)
{
	if (num % 2 == 0)
	{
		return num / 2;
	}
}