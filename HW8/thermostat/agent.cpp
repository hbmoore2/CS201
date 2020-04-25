//
//agent.cpp
//Harrison Moore
//CS 201
//April 24, 2020
//

#include "thermostat.h"

		// Gets the temperature from environment
void Agent::perceive(Environment& location)
{
	_current_temp = location.get_temp();
}

	// If the temperature is less than the upper bound, then 
	// heater is on until it hits below lower range
void Agent::think()
{
	if (_current_temp < _lower)
		_act = true;
	if (_current_temp > _upper)
		_act = false;
}

		// Gets the upper and lower bounds from simulator
void Agent::get_range(int lower, int upper)
{
	_lower = lower;
	_upper = upper;
}

void Agent::act(Environment& location)
{
	location._heater = _act;
}