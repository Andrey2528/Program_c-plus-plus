#include "Transport.h"
#include <iostream>
using namespace std;

	//Это виртуальные функции класса реализация есть только в потомках
 void Transport::rides()
	{

	}

	void Transport::crushes()
	{

	}

void Transport::printAllDataToConsole()
	{

	}

Transport::Transport()
	{
		model = "";
		owner = "";
		maxSpeed = 100;
		currentSpeed = 0;
		carMileage = 2;
		isBought = false;
		warrantyInYears = 1;
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

