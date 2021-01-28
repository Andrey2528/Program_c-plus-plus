#pragma once
#include <iostream>
using namespace std;
typedef unsigned short int USINT;
class Pencil
{

private:
	//Data
	string itsType;
	string itsModel;

public:
	//konstruktor
	Pencil();

	//Destructor
	~Pencil();

	//Medots

	void setType(string actualType);	//присвоение нового значения возраста

	void setModel(string newValueOfModel);	//присвоение нового значения стати

	string getType() const;		 //возвращение возраста

	string getModel()	const;	//возвращение стати

	void printAllData();	//вывод всех данних

};

