#include "Cat.h"
//konstruktor
Cat::Cat()
{
	itsAge = 18;
	itsGender = "";
}

//Destructor
Cat::~Cat()
{
	cout << "Об'єкт класу видаляєтся" << endl;
}
//Medots

void Cat::setAge(USINT actualAge)		//присвоение нового значения возраста
{
	itsAge = actualAge;
}

void Cat::setGender(string newValueOfGender)		//присвоение нового значения стати
{
	itsGender = newValueOfGender;
}

int Cat::getAge() const			 //возвращение возраста
{
	return itsAge;
}

string Cat::getGender()	const	//возвращение стати
{
	return itsGender;
}

void Cat::printAllData()		//вывод всех данних
{
	cout << "Возраст кота: " << itsAge << endl << "Стать кота: " << itsGender << endl;
};


