#include "Worker.h"
//konstruktor
Worker::Worker()
{
	itsAge = 18;
	itsGender = "";
	itsScolarship = 1396;
}

//Destructor
Worker::~Worker()
{
	cout << "��'��� ����� ����������" << endl;
}
//Medots

void Worker::setAge(USINT actualAge)		//���������� ������ �������� ��������
{
	itsAge = actualAge;
}

void Worker::setGender(string newValueOfGender)		//���������� ������ �������� �����
{
	itsGender = newValueOfGender;
}

void Worker::setScolarship(float newValueOfScolarship)		//���������� ������ �������� ���������
{
	itsScolarship = newValueOfScolarship;
}

int Worker::getAge() const			 //����������� ��������
{
	return itsAge;
}

string Worker::getGender()	const	//����������� �����
{
	return itsGender;
}
float Worker::getScolarship() const		//����������� ���������
{
	return itsScolarship;
}

void Worker::printAllData()		//����� ���� ������
{
	cout << "������� ���������: " << itsAge << endl << "����� ���������: " << itsGender << endl << "��������: " << itsScolarship << endl;
};

