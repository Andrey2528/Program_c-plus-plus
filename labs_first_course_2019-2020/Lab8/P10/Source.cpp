/*10.	Створіть об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) у вільній пам'яті.
Змініть і роздрукуйте значення цього об'єкта за допомогою вказівника.*/
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
		itsName = "";
		itsAge = 4;
		itsGender = "";
	}

	cat(string defName, USINT defAge, string defGender)
	{
		itsName = defName;
		itsAge = defAge;
		itsGender = defGender;
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
	
	cat* Vasya = new cat{ "Murka", 6, "Female" };
	Vasya->printAll();

	cat* pVasya = Vasya;
	pVasya->changeValue("Vasya", 5, "Male");
	pVasya->printAll();

}