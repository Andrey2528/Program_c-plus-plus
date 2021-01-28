/*4.	����������� �������� �.3 ���, ��� Car ��� ADT, 
� ������� � Car ����� SportsCar, Wagon, Coupe.
��������� � ������ ���������� �������.

*/
#include <iostream>
#include "Transport.h"
#include "bus.h"
#include "Car.h"
#include "SportCar.h"
#include "Wagon.h"
#include "Coupe.h"

using namespace std;

//����� �������� �����������, ���� � ���� ���� ���� �� ���� ����������� �������.

class MicroBus : public Bus, public Car
{
public:
	void rides()
	{
		Bus::rides();
	}
	void crushes()
	{
		Car::crushes();
	}
};

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Transport* trans = new Transport();

	delete trans;

	Transport* bus = new Bus;
	bus->rides();
	bus->printAllDataToConsole();

	delete bus;

	MicroBus* mbus = new MicroBus();
	mbus->rides();


	cout << "\n\n\n";

	cout << "�������� �������� ���� " << mbus->getCurrentSpeed() << endl;

	mbus->crushes();

	cout << "�������� ����� ������ " << mbus->getCurrentSpeed() << endl << endl << endl << endl;

	mbus->printAllDataToConsole();

	delete mbus;

	cout << endl << endl;

	Transport* wg = new Coupe();

	wg->printAllDataToConsole();

	delete wg;

	//�������� ����������
	trans = NULL;
	bus = NULL;
	mbus = NULL;
	wg = NULL;



	return 0;
}