//
//vacuum-cleaner-world.h
//Harrison Moore
//CS 201
//April 24, 2020
//

#ifndef vacuumcleanerworld_H
#define vacuumcleanerworld_H

#include <iostream>
#include <vector>
#include <random>
#include <Windows.h>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::random_device;

class environment
{
public:
	environment() : _world{ 0, 0, 0, 0, 0, 0, 0, 0, 0 } {};
	void dirt(int& moves, random_device& r); // Randomly puts down dirt

	vector<int> _world;
};

class agent
{
public:
	agent() : _moves{ 0 }, _pos{ 0 }, _left{ false }, _right{ false }, _vacuum{ false }{};
	void get_dirt_loc(environment& house);	// dirt location
	void vac_it(environment& house);		//no dirt left :)

	int _moves;		// Number of moves made by the vacuum
	bool _left;
	bool _right;
	bool _vacuum;	// Clean here
	int _pos;		// Vacuum location
};

class simulator
{
public:
	void move(agent& vac);		// Moves the vacuum
	void simulate(int& repeat);
};

#define vacuumcleanerworld_H
#endif