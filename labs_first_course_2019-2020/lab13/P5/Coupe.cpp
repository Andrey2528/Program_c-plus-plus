#include "Coupe.h"
Coupe::Coupe()
{
	this->passagersQuontity = 4;
}

Coupe ::~Coupe()
{
	cout << "Сработал деструктор Coupe" << endl;
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
	cout << "Размер вагона: " << "Длинна = " << this->length << " Ширина = " << this->width << " Высота = " << this->height << endl;
	cout << "Количество пассажиров, которые помещаются в вагон " << this->passagersQuontity << endl;
}