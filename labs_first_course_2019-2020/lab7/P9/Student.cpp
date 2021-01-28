#include "Student.h"

	//konstruktor
	Student::Student()
	{
		itsAge = 18;
		itsGender = "";
		itsScolarship = 1396;
	}

	//Destructor
	Student::~Student()
	{
		cout << "��'��� ����� ����������" << endl;
	}
	//Medots

	void Student::setAge(USINT actualAge)		//���������� ������ �������� ��������
	{
		itsAge = actualAge;
	}

	void Student::setGender(string newValueOfGender)		//���������� ������ �������� �����
	{
		itsGender = newValueOfGender;
	}

	void Student::setScolarship(float newValueOfScolarship)		//���������� ������ �������� ���������
	{
		itsScolarship = newValueOfScolarship;
	}

	int Student::getAge() const			 //����������� ��������
	{
		return itsAge;
	}

	string Student::getGender()	const	//����������� �����
	{
		return itsGender;
	}
	float Student::getScolarship() const		//����������� ���������
	{
		return itsScolarship;
	}

	void Student::printAllData()		//����� ���� ������
	{
		cout << "³� ��������: " << itsAge << endl << "����� ��������: " << itsGender << endl << "�������: " << itsScolarship << endl;
	};



