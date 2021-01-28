#pragma once
#include <iostream>
#include "car.h"
using namespace std;
class Bus : public Car
{
protected:
	unsigned int carryingCapacity;

public:
	Bus();

	~Bus();
	

	void setCarryingCapacity(unsigned int carryingCapacity);

	unsigned int getCarryingCapacity();

	void printAllDataToConsole();
	void setAllData();
	
};

