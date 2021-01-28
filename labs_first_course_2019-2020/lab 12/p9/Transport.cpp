#include "Transport.h"
void Transport::riders()
{

}

Transport::Transport()
{
	model = "";
	owner = "";
	maxSpeed = 0;
	currentSpeed = 0;
	carMileage = 0;
	isBought = false;
	warrantyInYears = 0;
}

Transport::~Transport()
{
	cout << "Сработал деструктор Transport" << endl;
}

void Transport::setModel(string model)
{
	this->model = model;
}
void Transport::setOwner(string name)
{
	this->owner = name;
}
void Transport::setMaxSpeed(float maxSpeed) {
	this->maxSpeed = maxSpeed;
}
void Transport::setCurrentSpeed(float currentSpeed)
{
	this->currentSpeed = currentSpeed;
}
void Transport::setMileage(float mileage)
{
	this->carMileage = mileage;
}
void Transport::setStatus(bool isBought)
{
	this->isBought = isBought;
}
void Transport::setWarranty(int warrantyInYears)
{
	this->warrantyInYears = warrantyInYears;
}

string Transport::getModel()
{
	return this->model;
}
string Transport::getOwner()
{
	return this->owner;
}
float Transport::getMaxSpeed()
{
	return this->maxSpeed;
}
float Transport::getCurrentSpeed()
{
	return this->currentSpeed;
}
float Transport::getMileage()
{
	return this->carMileage;
}
bool Transport::getStatus()
{
	return this->isBought;
}
unsigned int Transport::getYearsOfWarranty()
{
	return this->warrantyInYears;
}