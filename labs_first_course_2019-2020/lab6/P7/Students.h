#pragma once
#define STUDENTS_H_
#include <iostream>

typedef unsigned short int USINT;

using namespace std;

class Student
{

private:
	//Data
	string itsName;
	USINT itsAge;
	string itsGender;
	float itsScolarship;

public:
	//Konstruktpr
	Student(string Sname = "Анатолій", USINT Sage = 22, string Sgender = "Чоловіча", float Sscolarship = 0)
	{
		itsName = Sname;
		itsAge = Sage;
		itsGender = Sgender;
		itsScolarship = Sscolarship;
	}
	//Destructor
	~Student()
	{
		cout << "Об'єкт класу видаляєтся" << endl;
	}
	//Medots
	void printAllData()
	{
		cout << "Вік студента: " << itsAge << endl << "Стать студента: " << itsGender << endl << "Стипедія: " << itsScolarship << endl;
	};

	void printName()
	{
		cout << "Ім'я студента: " << itsName << endl;
	}
	void printAge()
	{
		cout << "Вік студента : " << itsAge << endl;
	}

	void printGender()
	{
		cout << "Стать студента: " << itsGender << endl;
	}

	void printScolarship()
	{
		cout << "Стипедія: " << itsScolarship << "\n" << endl;
	}

	void setName(string newValueOfName)
	{
		itsName = newValueOfName;
	}

	void setAge(USINT actualAge)
	{
		itsAge = actualAge;
	}

	void setGender(string newValueOfGender)
	{
		itsGender = newValueOfGender;
	}

	void setScolarship(float newValueOfScolarship)
	{
		itsScolarship = newValueOfScolarship;
	}

	string getName()
	{
		return itsName;
	}

	int getAge()
	{
		return itsAge;
	}

	string getGender()
	{
		return itsGender;
	}
	float getScolarship()
	{
		return itsScolarship;
	}
};
