#include "SportCar.h"
void SportCar::rides()
{
	while (this->currentSpeed <= this->maxSpeed)
	{
		maxSpeed += 3;
	}
}

SportCar::SportCar()
{
	carClass = 's';
}

SportCar::~SportCar()
{
	cout << "Сработал деструктор SportCar" << endl;
}

void SportCar::setClass(char carClass)
{
	this->carClass = carClass;
}

char SportCar::getCarClass()
{
	return this->carClass;
}