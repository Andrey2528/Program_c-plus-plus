//6.	Напишіть методи доступу до полів класу "Студент".

#include <iostream>

typedef unsigned short int USINT;

using namespace std;

class Student
{

private:
	//Data
	string itsName;
	USINT itsAge;
	string itsGender;
	float itsScolarship;

public:
	//Konstruktor
	Student() 
	{
		itsName = "";
		itsAge = 10;
		itsGender = "";
		itsScolarship = 1000;
	};

	Student(string Sname, USINT Sage, string Sgender, float Sscolarship)
	{
		itsName = Sname;
		itsAge = Sage;
		itsGender = Sgender;
		itsScolarship = Sscolarship;
	}
	//Destructor
	~Student()
	{
		cout << "Об'єкт класу видаляєтся" << endl;
	}
	//Medots

	void setName(string newValueOfName);

	void setAge(USINT actualAge);

	void setGender(string newValueOfGender);

	void setScolarship(float newValueOfScolarship);

	string getName() const;

	int getAge() const;

	string getGender() const;
	
	float getScolarship() const;
	
	void printAllData();


};



void Student::setName(string newValueOfName)
{
	itsName = newValueOfName;
}

void Student::setAge(USINT actualAge)
{
	itsAge = actualAge;
}

void Student::setGender(string newValueOfGender)
{
	itsGender = newValueOfGender;
}

void Student::setScolarship(float newValueOfScolarship)
{
	itsScolarship = newValueOfScolarship;
}

string Student::getName() const
{
	return itsName;
}

int Student::getAge() const
{
	return itsAge;
}

string Student::getGender() const
{
	return itsGender;
}
float Student::getScolarship() const
{
	return itsScolarship;
}

void Student::printAllData()
{
	cout <<"Имя студента: " << itsName << "Возраст студента: " << itsAge << endl << "Стать студента: " << itsGender << endl << "Стипендия: " << itsScolarship << endl;
};


int main()
{


	setlocale(LC_ALL, "Ukrainian");

	Student s1("Andrey", 18, "Male", 1200);
	Student s2;

	s1.setName("Андрій");
	s1.setAge(18);
	s1.setGender("чоловіча");
	s1.setScolarship(1241);

	s2.setName("Вікторія");
	s2.setAge(21);
	s2.setGender("чоловіча");
	s2.setScolarship(1412);

	s1.printAllData();
	s2.printAllData();

	cout << s1.getAge() << endl << s1.getName() << endl << s1.setGender << endl << s1.getScolarship << endl;
	cout << s2.getAge() << endl << s2.getName() << endl << s2.setGender << endl << s2.getScolarship << endl;


	return 0;
}
