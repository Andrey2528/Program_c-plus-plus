#pragma once
#include <iostream>
using namespace std;
typedef unsigned short int USINT;
class Worker
{

private:
	//Data
	USINT itsAge;
	string itsGender;
	float itsScolarship;

public:
	//konstruktor
	Worker();

	//Destructor
	~Worker();

	//Medots

	void setAge(USINT actualAge);	//присвоение нового значения возраста

	void setGender(string newValueOfGender);	//присвоение нового значения стати

	void setScolarship(float newValueOfScolarship);	//присвоение нового значения стипендии

	int getAge() const;		 //возвращение возраста

	string getGender()	const;	//возвращение стати

	float getScolarship() const;	//возвращение стипендии

	void printAllData();	//вывод всех данних

	void printAge();

	void printGender();

	void printScolarship();

};