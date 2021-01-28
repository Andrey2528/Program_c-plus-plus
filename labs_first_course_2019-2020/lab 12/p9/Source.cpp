/*
9. * **Напишіть реалізацію класів Транспорт, Автомобіль,
Автобус як віртуальних і головну програму аналогічну п.3.

*/

#include <iostream>
#include "Transport.h"
#include "car.h"
#include "Bus.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Bus* bus = new Bus();
	bus->setAllData();
	bus->printAllDataToConsole(); 

	return 0;
}