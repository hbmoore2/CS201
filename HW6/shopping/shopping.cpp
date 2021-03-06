//
//shopping.cpp
//Harrison Moore
//CS201
//April 10, 2020
//

#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <algorithm>
using std::cout;
using std::endl;
using std::cin;
struct Record
{
	double unitPrice;
	int units;
};

void printInventory(std::map<std::string, Record>& inventory);
void buy(std::map<std::string, Record>& inventory, double& total);
void drop(std::map<std::string, Record>& inventory, double& total);

int main()
{
	std::string action;
	std::map<std::string, Record > inventory;
	inventory["Napkin"] = { 5.0,5 };
	inventory["toilet paper"] = { 50.0,4 };
	inventory["apple"] = { 1.0,15 };
	inventory["egg"] = { 3.0,10 };
	inventory["potato chip"] = { 4.0,8 };
	double total = 0;
	printInventory(inventory);
	cout << "You can 'view', 'buy', 'exit', or 'remove item'." << endl;
	while (true)
	{
		getline(cin, action);
		std::transform(action.begin(), action.end(), action.begin(), ::tolower);
		if (action == "view")
		{
			printInventory(inventory);
		}
		else if (action == "buy")
		{
			buy(inventory, total);
		}
		else if (action == "exit")
		{
			break;
		}
		else if (action == "remove item")
		{
			drop(inventory, total);
		}
		cout << "Current total is: " << total << "$" << endl;
	}
	return 0;
}

void printInventory(std::map<std::string, Record>& inventory)
{
	for (auto item : inventory)
	{
		cout << "We have " << item.second.units << " " << item.first << "s for " << item.second.unitPrice << " $ each. " << endl;
	}
}

void buy(std::map<std::string, Record>& inventory, double& total)
{
	cout << "What would you like to buy? ";
	std::string item;
	getline(cin, item);
	if (inventory[item].units > 0)
	{
		inventory[item].units -= 1;
		total += inventory[item].unitPrice;
	}
	else
	{
		cout << endl << "We are out of stock on that item." << endl;
	}
}

void drop(std::map<std::string, Record>& inventory, double& total)
{
	cout << "What would you like to remove from your cart?";
	std::string item;
	getline(cin, item);
	inventory[item].units += 1;
	total -= inventory[item].unitPrice;
}