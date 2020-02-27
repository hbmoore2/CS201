//
//fifo-lifo.cpp
//Harrison Moore
//CS201
//Feb 26, 2020
//This program will let a user put items into a container and pop them out.
//

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

string str;
int fifolifo;
int fifo;
int lifo;
int yes_no = 1;
string item;
vector<string> container;

// First-In First-Out
void FifoPush(vector<string>& container, const string& item);
void FifoPop(vector<string>& container, string& item);

// Last-In First-Out
void LifoPush(vector<string>& container, const string& item);
void LifoPop(vector<string>& container, string& item);

// Shared functionality
bool IsContainerEmpty(const vector<string>& container);
void PrintContainer(const vector<string>& container);

bool TestFifo();
bool TestLifo();


int main()
{
	cout << "Hello, welcome to your container." << endl;
	cout << "\nHow would you like to fill your container?" << endl;
	cout << "With Fifo (First-In First-Out) or with Lifo (Last-In First-Out)?" << endl;
	cout << "Enter \"Fifo\" for Fifo or \"Lifo\" for Lifo: ";
	while (true)
	{
		if (fifolifo > 0) // Notifies the user of what they need to enter.
			cout << "Please enter \"Fifo\" or \"Lifo\"." << endl;
		cin >> str;
		if (str == "Fifo")
			break;
		if (str == "Lifo")
			break;
		fifolifo++;
	}
	cout << endl;

	if (str == "Fifo")		//Fifo picked
	{
		cout << "You chose Fifo. Enter something to place in your container: ";
		yes_no = 1;
		while (yes_no != 0)
		{
			if (fifo > 0)
				cout << "Enter another item to place in your container: ";

			cin >> item;
			FifoPush(container, item);

			cout << "Would you like to add another item? Enter \"1\" for yes or \"0\" for no: ";
			cin >> yes_no;

			fifo++;
		}

		yes_no = 1;
		while (yes_no != 0)
		{
			cout << endl;
			cout << "Would you like to \"Pop\" the last item out of your container? Enter \"1\" for yes or \"0\" for no: ";
			cin >> yes_no;
			if (yes_no == 1)
			{
				if (container.size() == 0)
				{
					cout << "Your container is empty.";
					break;
				}
				cout << "Your last item was: ";
				FifoPop(container, item);
			}
		}
	}

	else if (str == "Lifo") // picked lifo
	{
		cout << "You chose Lifo. Enter something to place in your container: ";
		yes_no = 1;
		while (yes_no != 0)
		{
			if (lifo > 0)
				cout << "Enter another item to place in your container: ";
				cin >> item;
			LifoPush(container, item);
			cout << "Would you like to add another item? Enter \"1\" for yes or \"0\" for no: ";
			cin >> yes_no;
			lifo++;
		}

		yes_no = 1;
		while (yes_no != 0)
		{
			cout << endl;
			cout << "Would you like to \"Pop\" the last item out of your container? Enter \"1\" for yes or \"0\" for no: ";
			cin >> yes_no;
			if (yes_no == 1)
			{
				if (container.size() == 0)
				{
					cout << "Your container is empty.";
					break;
				}
				cout << "Your last item was: ";
				LifoPop(container, item);
			}
		}
	}
}