#include "Wagon.h"
Wagon::Wagon()
{
	this->length = 5;
	this->width = 4;
	this->height = 2;
}

Wagon::~Wagon()
{
	cout << "Сработал деструктор Wagon " << endl;
}

void Wagon::rides()
{
	while (this->currentSpeed <= this->maxSpeed)
	{
		this->maxSpeed += 0.4;
	}
}

void Wagon::setLength(unsigned int length)
{
	this->length = length;
}
void Wagon::setWidth(unsigned int width)
{
	this->width = width;
}
void Wagon::setHeight(unsigned int height)
{
	this->height = height;
}

unsigned int Wagon::getLength()
{
	return this->length;
}
unsigned int Wagon::getWidth()
{
	return this->width;
}
unsigned int Wagon::getHeight()
{
	return this->height;
}