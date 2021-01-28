#include "car.h"
void Car::rides()
{
	while (this->currentSpeed < this->maxSpeed)
	{
		this->currentSpeed += 2;
	}
}

Car::Car()
{
	color = "";
	Wheels = 0;
}

Car::~Car()
{
	cout << "Сработал деструктор Car" << endl;
}

void Car::setColor(string color)
{
	this->color = color;
}
void Car::setWheels(unsigned int Wheels)
{
	this->Wheels = Wheels;
}
string Car::getColor()
{
	return this->color;
}
unsigned int Car::getWheels()
{
	return this->Wheels;
}