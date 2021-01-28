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
	cout << "��'��� ����� ����������" << endl;
}
//Medots

void Cat::setAge(USINT actualAge)		//���������� ������ �������� ��������
{
	itsAge = actualAge;
}

void Cat::setGender(string newValueOfGender)		//���������� ������ �������� �����
{
	itsGender = newValueOfGender;
}

int Cat::getAge() const			 //����������� ��������
{
	return itsAge;
}

string Cat::getGender()	const	//����������� �����
{
	return itsGender;
}

void Cat::printAllData()		//����� ���� ������
{
	cout << "������� ����: " << itsAge << endl << "����� ����: " << itsGender << endl;
};


