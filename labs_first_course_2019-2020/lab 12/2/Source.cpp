/*
 Автор: Лесів Олександр
 Дата: 30.10.2019

 2.	Напишіть оголошення для наступних класів Студент, Заочник,
 включивши в нього члени-дані, конструктори за умовчанням і з параметрами,
 методи доступу, методи введення-виведення для клавіатури і з екрану і т.д. :

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
		cout << "Возвраст студента " << this->age << " лет" << endl;
	}

	inline void printScolarshipToConsole()
	{
		cout << "Студент получает " << this->scolarship << " гривен" << endl;
	}

	inline void printnNameToConsole()
	{
		cout << "Студента зовут " << this->name << endl;
	}

	inline void printAverageMaxToConsole()
	{
		cout << "Средний бал студента " << this->averageMax << endl;
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
		cout << "Студент платит " << this->payment << " гривен" << endl;
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
	cout << "Введите возвраст студента " << endl;
	cin >> this->age;
	cout << "Введите имя студента " << endl;
	cin >> this->name;
	cout << "Введите стипендию студента " << endl;
	cin >> this->scolarship;
	cout << "Введите средний бал студента " << endl;
	cin >> this->averageMax;
}

void Extern::setDataFromConsole()
{
	cout << "Введите возвраст студента " << endl;
	cin >> this->age;
	cout << "Введите имя студента " << endl;
	cin >> this->name;
	cout << "Введите стипендию студента " << endl;
	cin >> this->scolarship;
	cout << "Введите средний бал студента " << endl;
	cin >> this->averageMax;
	cout << "Введите сколько платит студент за обучение " << endl;
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