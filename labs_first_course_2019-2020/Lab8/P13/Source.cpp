/* 13.	Перетворіть раніше розроблений клас ( Cat , Worker , Pencil ...) в клас з динамічним виділенням пам'яті.   */
#include <iostream>

using namespace std;

typedef unsigned short int USINT;

class cat
{
public:
	//Data
	string *itsName;
	USINT *itsAge;
	string *itsGender;

	//Konstruktor

	cat()
	{
		*itsName = "";
		*itsAge = 4;
		*itsGender = "";
	}


	cat(string defName, USINT defAge, string defGender)
	{
		itsName = new string (defName);
		itsAge = new USINT (defAge);
		itsGender = new string (defGender);
	}

	void catIN(string defName, USINT defAge, string defGender)
	{
		*itsName = defName;
		*itsAge = defAge;
		*itsGender = defGender;
	}

	//Destructor
	~cat() {
		cout << "object delete" << endl;
	}

	void  changeValue(string newName, USINT newAge, string  newGender) {
		*itsName = newName;
		*itsAge = newAge;
		*itsGender = newGender;
	}

	void printAll() {
		cout << *itsName << endl << *itsAge << endl << *itsGender << endl;
	}
};


int main()
{
	cat *Steve = new cat("Vasia", 5, "Male");
	Steve->printAll();
	return 0;
}