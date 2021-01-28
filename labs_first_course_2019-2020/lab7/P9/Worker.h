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

	void setAge(USINT actualAge);	//���������� ������ �������� ��������

	void setGender(string newValueOfGender);	//���������� ������ �������� �����

	void setScolarship(float newValueOfScolarship);	//���������� ������ �������� ���������

	int getAge() const;		 //����������� ��������

	string getGender()	const;	//����������� �����

	float getScolarship() const;	//����������� ���������

	void printAllData();	//����� ���� ������

	void printAge();

	void printGender();

	void printScolarship();

};