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
		cout << "Об'єкт класу видаляєтся" << endl;
	}
	//Medots

	void Student::setAge(USINT actualAge)		//присвоение нового значения возраста
	{
		itsAge = actualAge;
	}

	void Student::setGender(string newValueOfGender)		//присвоение нового значения стати
	{
		itsGender = newValueOfGender;
	}

	void Student::setScolarship(float newValueOfScolarship)		//присвоение нового значения стипендии
	{
		itsScolarship = newValueOfScolarship;
	}

	int Student::getAge() const			 //возвращение возраста
	{
		return itsAge;
	}

	string Student::getGender()	const	//возвращение стати
	{
		return itsGender;
	}
	float Student::getScolarship() const		//возвращение стипендии
	{
		return itsScolarship;
	}

	void Student::printAllData()		//вывод всех данних
	{
		cout << "Вік студента: " << itsAge << endl << "Стать студента: " << itsGender << endl << "Стипедія: " << itsScolarship << endl;
	};



