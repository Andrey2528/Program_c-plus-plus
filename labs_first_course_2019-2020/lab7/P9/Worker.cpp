#include "Worker.h"
//konstruktor
Worker::Worker()
{
	itsAge = 18;
	itsGender = "";
	itsScolarship = 1396;
}

//Destructor
Worker::~Worker()
{
	cout << "Об'єкт класу видаляєтся" << endl;
}
//Medots

void Worker::setAge(USINT actualAge)		//присвоение нового значения возраста
{
	itsAge = actualAge;
}

void Worker::setGender(string newValueOfGender)		//присвоение нового значения стати
{
	itsGender = newValueOfGender;
}

void Worker::setScolarship(float newValueOfScolarship)		//присвоение нового значения стипендии
{
	itsScolarship = newValueOfScolarship;
}

int Worker::getAge() const			 //возвращение возраста
{
	return itsAge;
}

string Worker::getGender()	const	//возвращение стати
{
	return itsGender;
}
float Worker::getScolarship() const		//возвращение стипендии
{
	return itsScolarship;
}

void Worker::printAllData()		//вывод всех данних
{
	cout << "Возраст работника: " << itsAge << endl << "Стать работника: " << itsGender << endl << "Зарплата: " << itsScolarship << endl;
};

