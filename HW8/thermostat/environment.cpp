//
//environment.cpp
//Harrison Moore
//CS 201
//April 24, 2020
//

#include "thermostat.h"

// Changes temperature
void Environment::itteration()
{
	if (_heater)
		_temperature += 1;
	else
		_temperature -= 1;
	cout << _temperature << endl;
}

// Gives temperature
int Environment::get_temp()
{
	return _temperature;
}