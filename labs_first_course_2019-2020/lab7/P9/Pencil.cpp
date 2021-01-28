#pragma once
#include "Pencil.h"
Pencil::Pencil()
{
	itsType = "";
	itsModel = "";
}

//Destructor
Pencil::~Pencil()
{
	cout << "ќб'Їкт класу видал€Їтс€" << endl;
}
//Medots

void Pencil::setType(string actualType)		//присвоение нового значени€ возраста
{
	itsType = actualType;
}

void Pencil::setModel(string newValueOfModel)		//присвоение нового значени€ стати
{
	itsModel = newValueOfModel;
}



string Pencil::getType() const			 //возвращение возраста
{
	return itsType;
}

string Pencil::getModel()	const	//возвращение стати
{
	return itsModel;
}

void Pencil::printAllData()		//вывод всех данних
{
	cout << "¬озраст работника: " << itsType << endl << "—тать работника: " << itsModel << endl;
};

