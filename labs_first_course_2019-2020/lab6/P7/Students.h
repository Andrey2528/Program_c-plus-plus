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
	Student(string Sname = "�������", USINT Sage = 22, string Sgender = "�������", float Sscolarship = 0)
	{
		itsName = Sname;
		itsAge = Sage;
		itsGender = Sgender;
		itsScolarship = Sscolarship;
	}
	//Destructor
	~Student()
	{
		cout << "��'��� ����� ����������" << endl;
	}
	//Medots
	void printAllData()
	{
		cout << "³� ��������: " << itsAge << endl << "����� ��������: " << itsGender << endl << "�������: " << itsScolarship << endl;
	};

	void printName()
	{
		cout << "��'� ��������: " << itsName << endl;
	}
	void printAge()
	{
		cout << "³� �������� : " << itsAge << endl;
	}

	void printGender()
	{
		cout << "����� ��������: " << itsGender << endl;
	}

	void printScolarship()
	{
		cout << "�������: " << itsScolarship << "\n" << endl;
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
