/*
9. * **�������� ��������� ����� ���������, ���������,
������� �� ���������� � ������� �������� ��������� �.3.

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