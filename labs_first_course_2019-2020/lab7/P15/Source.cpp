
#include<iostream>
#include<string>
using namespace std;
class Cat
{

private:
	//Data
	int itsAge;
	string itsGender;
	float itsScolarship;

public:
	//konstruktor
	Cat();

	//Destructor
	~Cat();

	//Medots

	void setAge(int actualAge);	//присвоение нового значения возраста

	void setGender(string newValueOfGender);	//присвоение нового значения стати

	void setScolarship(float newValueOfScolarship);	//присвоение нового значения стипендии

	int getAge() const;		 //возвращение возраста

	string getGender()	const;	//возвращение стати

	float getScolarship() const;	//возвращение стипендии

	void printAllData();	//вывод всех данних

	void printAge();

	void printGender();

	void printScolarship();

};

//konstruktor
Cat::Cat()
{
	itsAge = 18;
	itsGender = "";
}

//Destructor
Cat::~Cat()
{
	cout << "Об'єкт класу видаляєтся" << endl;
}
//Medots

void Cat::setAge(int actualAge)		//присвоение нового значения возраста
{
	itsAge = actualAge;
}

void Cat::setGender(string newValueOfGender)		//присвоение нового значения стати
{
	itsGender = newValueOfGender;
}

int Cat::getAge() const			 //возвращение возраста
{
	return itsAge;
}

string Cat::getGender()	const	//возвращение стати
{
	return itsGender;
}

void Cat::printAllData()		//вывод всех данних
{
	cout << "Возраст кота: " << itsAge << endl << "Стать кота: " << itsGender << endl;
};


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

	void setType(string actualType);	//присвоение нового значения возраста

	void setModel(string newValueOfModel);	//присвоение нового значения стати

	string getType() const;		 //возвращение возраста

	string getModel()	const;	//возвращение стати

	void printAllData();	//вывод всех данних

};

Pencil::Pencil()
{
	itsType = "";
	itsModel = "";
}

//Destructor
Pencil::~Pencil()
{
	cout << "Об'єкт класу видаляєтся" << endl;
}
//Medots

void Pencil::setType(string actualType)		//присвоение нового значения возраста
{
	itsType = actualType;
}

void Pencil::setModel(string newValueOfModel)		//присвоение нового значения стати
{
	itsModel = newValueOfModel;
}

string Pencil::getType() const			 //возвращение возраста
{
	return itsType;
}

string Pencil::getModel()	const	//возвращение стати
{
	return itsModel;
}

void Pencil::printAllData()		//вывод всех данних
{
	cout << "Тип карандаша: " << itsType << endl << "Модель карандаша: " << itsModel << endl;
}

int main()
{
	bool Carry = 0;
	setlocale(LC_ALL, "russian");
	int n, a;
	cout << "Ведите имя объекта(1-Cat, pencil-2): ";
	cin >> n;
	do {
		switch (n)
		{
			case 1:
			{
				Cat fromConsole;

				bool Carry;
				do
				{
					int age;
					string gender;
					cout << "Введите возвраст" << endl;
					cin >> age;
					do
					{
						cout << "Введите пол(Допустимые значения: Male или Female" << endl;
						cin >> gender;
					} while (!(gender == "Male" || gender == "Female"));

					fromConsole.setAge(age);
					fromConsole.setGender(gender);

					fromConsole.printAllData();

					cout << "Хотите продолжать? 1 - да, 0 - нет" << endl;
					cin >> Carry;
				} while (Carry == 1 || !(Carry == 0));
				a = 0;
				break;
			}
			break;
			case 2:
			{
				Pencil fromConsole;

				bool isUserNeedToCarryOnProcedure;
				do
				{
					string type;
					string model;
					cout << "Введите тип" << endl;
					do
					{
						cout << "Введите тип(B - мягкий, HB - твердо-мягкий, F - средний, H - твёрдый, 2H - очень твёрдый)" << endl;
						cin >> type;
					} while (!(type == "B" || type == "HB" || type == "F" || type == "H" || type == "2H"));

					cout << "Введите модель" << endl;
					cin >> model;

					fromConsole.setType(type);
					fromConsole.setModel(model);

					fromConsole.printAllData();

					cout << "Хотите продолжать? 1 - да, 0 - нет" << endl;
					cin >> Carry;
				} while (Carry == 1 || !(Carry == 0));
				a = 0;
				break;
			}
		} 
		return 0;
	} while (Carry == 1 || Carry == 0);
}