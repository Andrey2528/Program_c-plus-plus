/*5.	�������� �������� ������� ����� ������ ���������� � ������������� ������ ��������� ���� Transport .
��� ������� �������������� �� �������� ������, ��� � ������ RTTI .

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

	Transport* transps[7] = { new Transport, new Car, new Bus, new MicroBus, new SportCar, new Wagon, new Coupe };

	for (unsigned int i = 0; i < 7; i++)
	{
		cout << typeid(*transps[i]).name() << endl; //������� ����������� ������ �������
	}
	cout << endl << endl;

	//���������� ������� � ������� RTTI
	cout << "�������� ������ RTTI" << endl << endl;
	for (unsigned int i = 0; i < 7; i++)
	{
		//���������� ��� ������ ��������� ������� � ������� Bus
		//� ������� ������� strcmpr, ������� ���������� 0, ���� ������ ����������
		if (strcmp(typeid(*transps[i]).name(), "class Coupe") == 0)
		{
			//���� ��� ����� Coupe - �������� �������, ������� �������� � ������� ��� ������ � ���� �������
			transps[i]->printAllDataToConsole();
		}
	}
	//���������� ������� � ������� �������������/����������� �������
	for (unsigned int i = 0; i < 7; i++)
	{
		cout << endl << endl;
		//������� ���������� � ���� �������� ������� � ������� �������������/����������� �������
		transps[i]->printAllDataToConsole();
	}

	return 0;
}