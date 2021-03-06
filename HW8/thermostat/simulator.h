//
//simulator.h
//Harrison Moore
//CS 201
//April 24, 2020
//

#ifndef Simulator_H
#define Simulator_ccp

#include "thermostat.h"

class Simulator
{
public:
	Simulator() : _lower{ 0 }, _upper{ 5 }, _proceed{ true }, _iter_count{ 0 } {};
	void run();			// Runs simulation 
	void askOwner();	// Gets the temperature from the user

	int _lower;
	int _upper;

private:
	bool _proceed;
	int _iter_count;
};

#define Simulator_H
#endif