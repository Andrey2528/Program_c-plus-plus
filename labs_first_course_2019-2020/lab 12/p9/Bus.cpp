#include "Bus.h"
Bus::Bus()
{
	carryingCapacity = 0;
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
	cout << "Цвет автобуса " << this->color << endl;
	cout << "Максимальная скорость автобуса " << this->maxSpeed << endl;
	cout << "Средння скорость автобуса " << this->currentSpeed << endl;
	cout << "Пробег автомбуса " << this->carMileage << endl;
	cout << "Грузоподъемность автобуса " << this->carryingCapacity << endl;
	cout << "Количество колес " << this->Wheels << endl;
	cout << "Количество год гарантии " << this->warrantyInYears << endl;
	cout << "Была ли куплена " << this->isBought;
	if (isBought == 0)
		cout << "-Нет" << endl;
	if (isBought == 1)
		cout << "-Да" << endl;

}

void Bus::setAllData()
{
	cout << "Модель автобуса " <<  endl;
	cin >> this->model;
	cout << "Имя владельца автобуса " <<endl;
	cin >> this->owner;
	cout << "Цвет автобуса " << endl;
	cin >> this->color;
	cout << "Максимальная скорость автобуса " <<  endl;
	cin >> this->maxSpeed;
	cout << "Средння скорость автобуса " << endl;
	cin >> this->currentSpeed;
	cout << "Пробег автомбуса " <<  endl;
	cin >> this->carMileage;
	cout << "Грузоподъемность автобуса " <<  endl;
	cin >> this->carryingCapacity;
	cout << "Количество колес " << endl;
	cin >> this->Wheels;
	cout << "Количество год гарантии " << endl;
	cin >> this->warrantyInYears;
	cout << "Была ли куплена 1-да, 0-нет" <<  endl;
	cin >> this->isBought;
}