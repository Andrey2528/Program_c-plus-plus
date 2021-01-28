/*
 �����: ���� ���������
 ����: 30.10.2019

 2.	�������� ���������� ��� ��������� ����� �������, �������,
 ��������� � ����� �����-���, ������������ �� ���������� � � �����������,
 ������ �������, ������ ��������-��������� ��� ��������� � � ������ � �.�. :

*/
#include <iostream>
#include <string.h>

using namespace std;

class Student
{
protected:
	unsigned int age;
	float scolarship;
	string name;
	float averageMax;
public:
	Student();

	inline unsigned int getAge()
	{
		return this->age;
	}

	inline float getScolarship()
	{
		return this->scolarship;
	}

	inline string getName()
	{
		return this->name;
	}

	inline float getAverageMax()
	{
		return this->averageMax;
	}

	inline void setAge(unsigned int age)
	{
		this->age = age;
	}

	inline void setScolarship(float scolarship)
	{
		this->scolarship = scolarship;
	}

	inline void setName(string name)
	{
		this->name = name;
	}

	inline void setAverageMax(float averageMax)
	{
		this->averageMax;
	}
	
	inline void printAgeToConsole()
	{
		cout << "�������� �������� " << this->age << " ���" << endl;
	}

	inline void printScolarshipToConsole()
	{
		cout << "������� �������� " << this->scolarship << " ������" << endl;
	}

	inline void printnNameToConsole()
	{
		cout << "�������� ����� " << this->name << endl;
	}

	inline void printAverageMaxToConsole()
	{
		cout << "������� ��� �������� " << this->averageMax << endl;
	}

	inline void printAllDataToConsole()
	{
		this->printAgeToConsole();
		this->printScolarshipToConsole();
		this->printnNameToConsole();
		this->printAverageMaxToConsole();
	};

	void setDataFromConsole();
};

class Extern : Student
{
protected:
	float payment;
public:
	Extern();

	inline float getPayment()
	{
		return this->payment;
	}

	inline void setPaiment(float payment)
	{
		this->payment = payment;
	}

	inline void printPaymentToConsole()
	{
		cout << "������� ������ " << this->payment << " ������" << endl;
	}

	inline void printAllDataToConsole()
	{
		this->printAgeToConsole();
		this->printScolarshipToConsole();
		this->printnNameToConsole();
		this->printAverageMaxToConsole();
		this->printPaymentToConsole();
	}

	void setDataFromConsole();
};

void Student::setDataFromConsole()
{
	cout << "������� �������� �������� " << endl;
	cin >> this->age;
	cout << "������� ��� �������� " << endl;
	cin >> this->name;
	cout << "������� ��������� �������� " << endl;
	cin >> this->scolarship;
	cout << "������� ������� ��� �������� " << endl;
	cin >> this->averageMax;
}

void Extern::setDataFromConsole()
{
	cout << "������� �������� �������� " << endl;
	cin >> this->age;
	cout << "������� ��� �������� " << endl;
	cin >> this->name;
	cout << "������� ��������� �������� " << endl;
	cin >> this->scolarship;
	cout << "������� ������� ��� �������� " << endl;
	cin >> this->averageMax;
	cout << "������� ������� ������ ������� �� �������� " << endl;
	cin >> this->payment;
}

Student::Student()
{
	this->age = 0;
	this->name = "";
	this->scolarship = 0;
	this->averageMax = 0;
}

Extern::Extern() : Student()
{
	this->payment = 0;
}
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	Student stud;
	stud.printAllDataToConsole();

	Extern ext;
	ext.printAllDataToConsole();

	return 0;
}