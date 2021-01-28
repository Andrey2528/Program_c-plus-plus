#include "bus.h"
Bus::Bus()
{
	this->carryingCapacity = 1000;
}


void Bus::rides()
{
	while (this->currentSpeed < this->maxSpeed)
	{
		this->currentSpeed++;
	}
}

void Bus::crushes()
{
	this->currentSpeed = 0;
}

Bus::~Bus()
{
	cout << "�������� ��������� ��������" << endl;
}

void Bus::setCarryingCapacity(unsigned int carryingCapacity)
{
	this->carryingCapacity = carryingCapacity;
}
unsigned int Bus::getCarryingCapacity()
{
	return this->carryingCapacity;
}

void Bus::printAllDataToConsole()
{
	cout << "������ �������� " << this->model << endl;
	cout << "��� ��������� �������� " << this->owner << endl;
	cout << "������������ �������� �������� " << this->maxSpeed << endl;
	cout << "�������� �������� �������� " << this->currentSpeed << endl;
	cout << "������ ��������� " << this->carMileage << endl;
	cout << "���������������� �������� " << this->carryingCapacity << endl;
	cout << "���������� ��� �������� " << this->warrantyInYears << endl;
	cout << "���� �� ������� " << this->isBought << endl;

}
