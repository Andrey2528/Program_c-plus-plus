#pragma once
#include <iostream>
using namespace std;
typedef unsigned short int USINT;
class Student
{

private:
	//Data
	USINT itsAge;
	string itsGender;
	float itsScolarship;

public:
	//konstruktor
	Student();	

	//Destructor
	~Student();
	
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


