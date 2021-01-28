/* 7.	Напишіть програму, в якій створюються два об'єкти типу "Студент". 
Встановіть їх вік, стать і стипендію за допомогою методів доступу. 
Роздрукуйте значення окремих членів-даних об'єктів на екрані, використовуючи методи доступу. 
Визначте і роздрукуйте середній вік і сумарну стипендію цих двох студентів.*/

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
		itsAge = 18;
		itsGender = "";
		itsScolarship = 1396;
	}
//конструктор за параметрами
	Student(string Sname, USINT Sage, string Sgender, float Sscolarship)
	{
		itsName = Sname;                //присвоение стандартного значения имени
		itsAge = Sage;					//присвоение стандартного значения возвраст
		itsGender = Sgender;			//присвоение стандартного значения стати
		itsScolarship = Sscolarship;	//присвоение стандартного значения стипендии
	}

	//Destructor
	~Student()
	{
		cout << "Об'єкт класу видаляєтся" << endl;
	}
	//Medots
	void printAllData();      //вывод всех данних

	void printName();       //вывод имени отдельно

	void printAge();        //вывод возраста


	void printGender();       //вывод стати


	void printScolarship();      //вывод стипендии


	void setName(string newValueOfName);       //присвоение нового значения имени


	void setAge(USINT actualAge);				//присвоение нового значения возраста


	void setGender(string newValueOfGender);	//присвоение нового значения стати


	void setScolarship(float newValueOfScolarship);			//присвоение нового значения стипендии


	string getName() const;      //возвращение имени


	int getAge() const;			 //возвращение возраста


	string getGender() const;		 //возвращение стати

	float getScolarship() const;	 //возвращение стипендии

};




void Student::setName(string newValueOfName)   //присвоение нового значения имени
{
	itsName = newValueOfName;
}

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

string Student::getName() const		//возвращение имени
{
	return itsName;
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

void Student::printName()
{
	cout << "Ім'я студента: " << itsName << endl;
}
void Student::printAge()
{
	cout << "Вік студента : " << itsAge << endl;
}

void Student::printGender()
{
	cout << "Стать студента: " << itsGender << endl;
}

void Student::printScolarship()
{
	cout << "Стипедія: " << itsScolarship << "\n" << endl;
}


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

	cout << s1.getName() << endl;

	s2.printName();
    s2.printAge();
	s2.printGender();
	s2.printScolarship();

	float ageInAverage = (float(s1.getAge()) + s2.getAge()) / 2;
	float summarizedScolarship = s1.getScolarship() + s2.getScolarship();

	cout << "Середній вік студентів: " << ageInAverage << "\n" << endl;
	cout << "Сумарна стипендія студентів: " << summarizedScolarship << "\n" << endl;

	return 0;
}