#include "Bus.h"
Bus::Bus()
{
	carryingCapacity = 0;
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
	cout << "���� �������� " << this->color << endl;
	cout << "������������ �������� �������� " << this->maxSpeed << endl;
	cout << "������� �������� �������� " << this->currentSpeed << endl;
	cout << "������ ��������� " << this->carMileage << endl;
	cout << "���������������� �������� " << this->carryingCapacity << endl;
	cout << "���������� ����� " << this->Wheels << endl;
	cout << "���������� ��� �������� " << this->warrantyInYears << endl;
	cout << "���� �� ������� " << this->isBought;
	if (isBought == 0)
		cout << "-���" << endl;
	if (isBought == 1)
		cout << "-��" << endl;

}

void Bus::setAllData()
{
	cout << "������ �������� " <<  endl;
	cin >> this->model;
	cout << "��� ��������� �������� " <<endl;
	cin >> this->owner;
	cout << "���� �������� " << endl;
	cin >> this->color;
	cout << "������������ �������� �������� " <<  endl;
	cin >> this->maxSpeed;
	cout << "������� �������� �������� " << endl;
	cin >> this->currentSpeed;
	cout << "������ ��������� " <<  endl;
	cin >> this->carMileage;
	cout << "���������������� �������� " <<  endl;
	cin >> this->carryingCapacity;
	cout << "���������� ����� " << endl;
	cin >> this->Wheels;
	cout << "���������� ��� �������� " << endl;
	cin >> this->warrantyInYears;
	cout << "���� �� ������� 1-��, 0-���" <<  endl;
	cin >> this->isBought;
}