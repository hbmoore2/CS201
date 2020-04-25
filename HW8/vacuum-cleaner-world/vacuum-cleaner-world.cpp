//
//vacuum-cleaner-world.cpp
//Harrison Moore
//CS 201
//April 24, 2020
//This program will be used as a vacuum :D.
//

#include "vacuum-cleaner-world.h"

int main()
{
	simulator Neo;
	int repeat = 80;
	Neo.simulate(repeat);
}


// Randomly puts down dirt
void environment::dirt(int& moves, random_device& r)
{
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(0, _world.size() - 1);
	if (moves % 7 == 0)
		_world[uniform_dist(e1)] = 1;
}

// Gets nearest dirt
void agent::get_dirt_loc(environment& house)
{
	int close_dirt = 0;
	int close_dirt_dist = 9;
	int distance = 9;
	for (size_t i = 0; i < house._world.size(); i++) // Finds dirt
	{
		distance = 9;
		if (house._world[i] == 1)
		{
			if (_pos > i)
				distance = (_pos - i);
			if (i > _pos)
				distance = (i - _pos);
			if (_pos == i)
				distance = 0;
			if (distance < close_dirt_dist)
			{
				close_dirt_dist = distance;
				close_dirt = i;
			}
		}
	};
	cout << "Vacuum cleaning in progress..." << endl << endl;
	if (close_dirt > _pos)
	{
		cout << "Right" << endl;
		_right = true;
		_left = false;
		_vacuum = false;
	}
	if (close_dirt < _pos)
	{
		cout << "Left" << endl;
		_left = true;
		_right = false;
		_vacuum = false;
	}
	if (close_dirt == _pos)
	{
		cout << "Vacuum" << endl;
		_vacuum = true;
		_right = false;
		_left = false;
	}
}

// Moves the vacuum cleaner
void simulator::move(agent& vac)
{
	if (vac._right)
		vac._pos += 1;
	if (vac._left)
		vac._pos -= 1;
}


void agent::vac_it(environment& house)
{
	if (_vacuum)
		house._world[_pos] = 0;
}

// Simulates the world
void simulator::simulate(int& repeat)
{
	environment house;
	agent vac;
	random_device r;

	for (int j = 0; j < repeat; j++)
	{
		system("cls"); // refreshes the console screen.

		house.dirt(j, r);
		vac.get_dirt_loc(house);
		for (size_t i = 0; i < house._world.size(); i++)
		{
			if (vac._pos == i)
				cout << "[<=>]"; // vacuum
			else
				cout << "   ";
		}

		cout << endl;
		for (size_t i = 0; i < house._world.size(); i++)
			cout << " " << house._world[i] << " ";
		cout << endl;

		if (!vac._vacuum)
			move(vac);
		else
		{
			Sleep(0200);
			vac.vac_it(house);
		}
		vac._moves++;
		Sleep(0400);
	}
}
