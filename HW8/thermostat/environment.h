//
//environment.h
//Harrison Moore
//CS 201
//April 24, 2020
//

#ifndef environment_H
#define environment_ccp

#include "thermostat.h"

class Environment
{
public:
	Environment() : _heater{ false }, _temperature{ 50 } {}
	void itteration();		// Changes temperature
	int get_temp();			// Gives temperature

	bool _heater;
private:
	int _temperature;

};

#define environment_H
#endif