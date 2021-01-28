/*2.	Створіть об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) в стеку.
Потім посилання і вказівник на нього. 
Змініть і роздрукуйте значення цього об'єкта за допомогою вказівника та посилання.*/
#include <iostream>

using namespace std;

class  Worker
{
public:
	int Number;
	string secondName;
	string gender;
	unsigned short int age;
	float weight;
	bool isSmocking;
	float taxe;
	void printDateToConsole() {
		cout << Number << endl << secondName << endl << gender << endl << age << endl << weight << endl << isSmocking << endl << taxe << endl;
	}
	void changeValues(int newNumber, string newSecondName, string newGender, unsigned short int newAge, float newWeight, bool newIsSmocking, float newTaxe)
	{
		Number = newNumber;
		secondName = newSecondName;
		gender = newGender;
		age = newAge;
		weight = newWeight;
		isSmocking = newIsSmocking;
		taxe = newTaxe;
	}
};

int main()
{

	Worker Stive = { 192, "Fosters", "male", 18, 118, true, 5100 };

	//Покажчик
	Worker* pointerToStive = &Stive;
	pointerToStive->changeValues(192, "Fosters", "male", 19, 102, false, 5000);
	pointerToStive->printDateToConsole();

	//Посилання
	Worker& refernceToStive = Stive;
	refernceToStive.changeValues(192, "Fosters", "male", 120, 121, true, 5200);
	refernceToStive.printDateToConsole();

	//Убираем висячие показатели
	pointerToStive = 0;

	return 0;
}