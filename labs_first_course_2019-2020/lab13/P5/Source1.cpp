/*5.	Напишіть програму обробки різних засобів транспорту з використанням масиву вказівників типу Transport .
При обробці використовуйте як віртуальні методи, так і засоби RTTI .

*/
#include <iostream>
#include "Transport.h"
#include "bus.h"
#include "Car.h"
#include "SportCar.h"
#include "Wagon.h"
#include "Coupe.h"

using namespace std;

//Класс является абстрактным, если у него есть хотя бы одна виртуальная функция.

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
		cout << typeid(*transps[i]).name() << endl; //Выводит фактические классы массива
	}
	cout << endl << endl;

	//Реализация задания с помощью RTTI
	cout << "Проверка работы RTTI" << endl << endl;
	for (unsigned int i = 0; i < 7; i++)
	{
		//Сравниваем тип данных элементов массива с классом Bus
		//С помощью функции strcmpr, которая возвращает 0, если строки одинаковые
		if (strcmp(typeid(*transps[i]).name(), "class Coupe") == 0)
		{
			//Если это класс Coupe - запустит функцию, которая печатает в консоль все данные о этом объекте
			transps[i]->printAllDataToConsole();
		}
	}
	//Реализация задания с помощью перегруженных/виртуальных функций
	for (unsigned int i = 0; i < 7; i++)
	{
		cout << endl << endl;
		//Выведет информацию о всех объектах массива с помощью перегруженных/виртуальных функций
		transps[i]->printAllDataToConsole();
	}

	return 0;
}