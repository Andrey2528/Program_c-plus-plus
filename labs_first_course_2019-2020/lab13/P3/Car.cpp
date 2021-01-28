#include "Car.h"
Car::Car()
{
	this->color = "white";
	this->quontityOfWheels = 4;
}

void Car::rides()
{
	while (this->currentSpeed < this->maxSpeed)
	{
		this->currentSpeed += 2;
	}
}
void Car::crushes()
{
	this->currentSpeed = 0;
}

 Car::~Car()
{
	cout << "Сработал деструктор Car" << endl;
}

void Car::setColor(string color)
{
	this->color = color;
}
void Car::setQuontityOfWheels(unsigned int quontityOfWheels)
{
	this->quontityOfWheels = quontityOfWheels;
}
string Car::getColor()
{
	return this->color;
}
unsigned int Car::getQuontityOfWheels()
{
	return this->quontityOfWheels;
}