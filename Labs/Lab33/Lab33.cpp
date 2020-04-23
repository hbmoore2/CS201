//
//Lab33.cpp
//Harrison Moore
//CS 201
//April 22, 2020
//This program will create an object of a class and call a member fuction to it.
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Lab33
{
public:
	void prints();
	void setter(int input);
	int getter();

private:
	string s = "Printed something :)";
	int value;
};

void toString(Lab33 object1, Lab33 object2);

int main()
{
	Lab33 class1;
	Lab33 class2;
	cout << "Function that prints something: ";
	class1.prints();
	cout << endl;
	int a = 0;
	int b = 0;

	cout << "Enter integer value for class1: ";
	cin >> a;
	cout << "Enter integer value for class2: ";
	cin >> b;

	class1.setter(a);
	class2.setter(b);

	cout << endl;

	toString(class1, class2);

	Lab33 class3 = class1;
	cout << "class3 copied class1: " << endl;
	cout << "class3's value: " << class3.getter();

	cout << endl;
}

void Lab33::prints() { cout << s << endl; }
void Lab33::setter(int input) { value = input; }
int Lab33::getter() { return value; }

void toString(Lab33 object1, Lab33 object2)
{
	cout << "class1's value: " << object1.getter() << endl;
	cout << "class2's value: " << object2.getter() << endl;
}