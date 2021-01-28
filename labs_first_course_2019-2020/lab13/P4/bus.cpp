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
	cout << "Сработал деструкор автобуса" << endl;
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
	cout << "Модель автобуса " << this->model << endl;
	cout << "Имя владельца автобуса " << this->owner << endl;
	cout << "Максимальная скорость автобуса " << this->maxSpeed << endl;
	cout << "Нынешняя скорость автобуса " << this->currentSpeed << endl;
	cout << "Пробег автомбуса " << this->carMileage << endl;
	cout << "Грузоподъемность автобуса " << this->carryingCapacity << endl;
	cout << "Количество год гарантии " << this->warrantyInYears << endl;
	cout << "Была ли куплена " << this->isBought << endl;

}
