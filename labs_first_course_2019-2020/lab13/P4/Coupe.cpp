#include "Coupe.h"
Coupe::Coupe()
{
	this->passagersQuontity = 4;
}

Coupe ::~Coupe()
{
	cout << "�������� ���������� Coupe" << endl;
}

void Coupe::setPassagersQuontity(unsigned int passagersQuontity)
{
	this->passagersQuontity = passagersQuontity;
}

unsigned int Coupe::getPassengersQountity()
{
	return this->passagersQuontity;
}

void Coupe::printAllDataToConsole()
{
	Transport::printAllDataToConsole();
	cout << "������ ������: " << "������ = " << this->length << " ������ = " << this->width << " ������ = " << this->height << endl;
	cout << "���������� ����������, ������� ���������� � ����� " << this->passagersQuontity << endl;
}