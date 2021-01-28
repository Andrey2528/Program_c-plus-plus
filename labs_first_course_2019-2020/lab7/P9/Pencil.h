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

	void setType(string actualType);	//���������� ������ �������� ��������

	void setModel(string newValueOfModel);	//���������� ������ �������� �����

	string getType() const;		 //����������� ��������

	string getModel()	const;	//����������� �����

	void printAllData();	//����� ���� ������

};

