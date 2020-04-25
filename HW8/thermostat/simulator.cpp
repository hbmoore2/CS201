//
//simulator.cpp
//Harrison Moore
//CS 201
//April 24, 2020
//

#include "thermostat.h"

void Simulator::askOwner() // Asks whether to continue or not
{
	string select_str;
	int select;
	if (_iter_count > 0)
	{
		cout << right << "\n1) " << "Continue" << endl;
		cout << right << "2) " << "Quit" << endl;
		cout << right << "Enter 1 to Continue or 2 to Quit: ";


		while (true)	// Gets the users selection
		{
			std::getline(cin, select_str);
			istringstream instream(select_str);
			instream >> select;
			if (instream)
				if (select > 0)
					if (select < 3)
						break;
			cout << "Please enter 1 or 2: ";
		}
		cout << endl;
		if (select == 2)
		{
			_proceed = false;
			return;
		}
		else
			_proceed = true;
	}
	cout << "Enter a lower temperature bound (integer): ";
	while (true)	// Gets the user's lower bound selection
	{
		std::getline(cin, select_str);
		istringstream instream(select_str);
		instream >> _lower;
		if (instream)
			break;
		cout << "You need to enter an integer: ";
	}

	cout << "Enter an upper temperature bound: ";

	int upper;
	while (true)	// Gets the user's upper bound selection
	{
		std::getline(cin, select_str);
		istringstream instream(select_str);
		instream >> upper;
		if (instream)
			if (upper > _lower)
				break;
		cout << "You need to enter an integer greater than your lower one: ";
	}
	_upper = upper;
	_iter_count++;
}

void Simulator::run() // Runs simulation 
{
	Environment Room;
	Agent Thermo;
	int i = 10;
	while (i < 11)
	{
		if (i == 10)
		{
			askOwner();
			i = 0;
		}
		if (_proceed)
			for (int k = 0; k < 10; k++)
			{
				Room.itteration();
				Thermo.perceive(Room);
				Thermo.get_range(_lower, _upper);
				Thermo.think();
				Thermo.act(Room);
				i++;
				if (i > 10)
					break;
			}
		else
			break;
	}
}