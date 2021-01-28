#pragma once
#include <iostream>
#include "Transport.h"
using namespace std;
class Car : public Transport
{
protected:
	string color;
	unsigned int Wheels;
	void rides();
public:
	Car();
	virtual ~Car();

	void setColor(string color);
	unsigned int getWheels();
	void setWheels(unsigned int Wheels);
	string getColor();


};

