/*
8. * **�������� ��������� ����� �������,
������� � ������������ �������� �� ����������
� ������� �������� ��������� �.3.
*/

#include <iostream>
using namespace std;

class Student {
protected:
	unsigned int age;
	float scolarship;
	string name;		
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

	inline void setAge(unsigned int age)
	{
		this->age = age;
	}

	inline void setScolarship(float scolarship)
	{
		this->scolarship = scolarship;
	}

	inline void setNAme(string name)
	{
		this->name = name;
	}

	inline void printAgeToConsone()
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

	inline void printData();

	void setDataToConsole();
};

class Extern : Student
{
protected:
	float payment;
	float borrow;
public:
	Extern();
	Extern(float);
	virtual ~Extern()
	{
		cout << "���������� �������� ��������";
	};

	virtual void pays(int money)
	{
		this->borrow = this->borrow - money;
	}

	inline float getPayment()
	{
		return this->payment;
	}


	inline float getBorrow()
	{
		return this->borrow;
	}

	inline void setBorrow()
	{
		this->borrow = borrow;
	}

	inline void setPayment()
	{
		this->payment = payment;
	}

	inline void printPayment()
	{
		cout << "������� ������ " << this->payment << " ������" << endl;
	}

	inline void printBorrow()
	{
		cout << "������������ �������� " << this->borrow << " ������";
	}

	inline void printData();

	void setDataToConsole();
};

void Student::setDataToConsole()
{
	cout << "������� �������� �������� " << endl;
	cin >> this->age;
	cout << "������� ��� �������� " << endl;
	cin >> this->name;
	cout << "������� ��������� �������� " << endl;
	cin >> this->scolarship;
}

void Extern::setDataToConsole()
{
	cout << "������� �������� �������� " << endl;
	cin >> this->age;
	cout << "������� ��� �������� " << endl;
	cin >> this->name;
	cout << "������� ��������� �������� " << endl;
	cin >> this->scolarship;
	
	cout << "������� ������� ������ ������� �� �������� " << endl;
	cin >> this->payment;
}

void Extern::printData()
{
	this->printAgeToConsone();
	this->printScolarshipToConsole();
	this->printnNameToConsole();
	this->printPayment();
	this->printBorrow();
}

void Student::printData()
{
	this->printAgeToConsone();
	this->printScolarshipToConsole();
	this->printnNameToConsole();
}

Student::Student()
{
	this->age = 0;
	this->name = "";
	this->scolarship = 0;
}

Extern::Extern() : Student()
{
	this->borrow = 0;
	this->payment = 0;
}

Extern::Extern(float borrow)
{
	this->borrow = borrow;
	this->payment = 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Student stud1;
	stud1.setDataToConsole();
	stud1.printData();

	Extern ext1;
	ext1.setDataToConsole();
	ext1.printData();
}