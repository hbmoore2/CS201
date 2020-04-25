//
//agent.h
//Harrison Moore
//CS 201
//April 24, 2020
//

#ifndef Agent_H
#define Agent_ccp

#include "thermostat.h"

class Agent
{
public:
	Agent() : _act{ false }, _current_temp{ 0 }, _lower{ 0 }, _upper{ 5 }  {};
	void perceive(Environment& location); // Gets the temperature from environment
	void think();
	void get_range(int lower, int upper);

	void act(Environment& location);



private:
	int _current_temp;
	int _lower;
	int _upper;
	bool _act;		 // Tells environment to turn on or off
};

#define Agent_H
#endif