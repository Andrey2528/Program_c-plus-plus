/*9.	Створіть об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) у стеку.
Потім вказівник на нього. Змініть і роздрукуйте значення цього об'єкта за допомогою вказівника.*/
#include <iostream>

using namespace std;

typedef unsigned short int USINT;

class cat
{
public:
	//Data
	string itsName = " ";
	USINT itsAge = 5;
	string itsGender = " ";

	//Konstruktor
	cat()
	{
		itsName = "Murka";
		itsAge = 4;
		itsGender = "Female";
	}
	cat(string defaultName, string defaultGender, USINT defaultAge)
	{
		itsName = defaultName;
		itsAge = defaultAge;
		itsGender = defaultGender;

	}
	//Destructor
	~cat(){
		cout << "object delete" << endl;}

	void  changeValue(string newName, USINT newAge, string  newGender) {
		itsName = newName;
		itsAge = newAge;
		itsGender = newGender;
	}

	void printAll() {
		cout << itsName << endl << itsAge << endl << itsGender << endl;
	}

};

int main() {
	
	cat Vasya;
	cat* pVasya = &Vasya;
	pVasya->printAll();
	pVasya->changeValue("Vasya", 5, "Male");
	pVasya->printAll();

}