/*12.	Напишіть програму, яка створює витік пам'яті. 
Збільшіть швидкість витоку пам'яті за допомогою створення об'єктів будь-якого раніше розробленого класу (Cat , Worker , Pencil ...) .
Поясніть як це виправити.*/
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
	

	cat(string defName, USINT defAge, string defGender)
	{
		itsName = defName;
		itsAge = defAge;
		itsGender = defGender;
	}

	void catIN(string defName, USINT defAge, string defGender)
	{
		itsName = defName;
		itsAge = defAge;
		itsGender = defGender;
	}




	//Destructor
	~cat() {
		cout << "object delete" << endl;
	}

	void  changeValue(string newName, USINT newAge, string  newGender) {
		itsName = newName;
		itsAge = newAge;
		itsGender = newGender;
	}

	void printAll() {
		cout << itsName << endl << itsAge << endl << itsGender << endl;
	}
};


int main()
{
	float* pointerToFloat;
	for (int i = 0; i <= 50; i++)
		pointerToFloat = new float(5);

	cat* pointerTocat;
	for (int i = 0; i <= 100; i++)
		pointerTocat = new cat("Vasya", 5, "Male");
		pointerTocat->catIN("Vasya", 5, "Male");

	return 0;
}