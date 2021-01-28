/*7.	Напишіть програму, 
в якій створюються два об'єкти типу Employee у вільній пам'яті; встановіть їх вік, 
число відпрацьованих років і заробітню плату; роздрукуйте їх значення. */
#include <iostream>

using namespace std;

class Emploee
{
public:

	unsigned short int age;
	unsigned short int workedYears;
	float salary;

	Emploee()
	{
		age = 0;
		workedYears = 1;
		salary = 1;
	}

	Emploee(unsigned short int defaultAge = 18, unsigned short int defaultWorkedYears = 0, float defaultSalary = 0)
	{
		age = defaultAge;
		workedYears = defaultWorkedYears;
		salary = defaultSalary;
	};

	void EmploeeIn(unsigned short int defAge, unsigned short int defWorkedYears, float defSalary)
	{
		age = defAge;
		workedYears = defWorkedYears;
		salary = defSalary;
	};

	void printDataToConsole()
	{
		cout << "Age  is " << age << endl;
		cout << "Worked for " << workedYears << " years" << endl;
		cout << "Emploee is " << salary << endl;
	};
};


int main() {
		Emploee* Andy = new Emploee{ 18, 1, 2500 }; //Створюєму об'єкт класу Emploee, та ініціалізуємо його значеннями(18, 14, 2500)
		if (Andy == NULL)
		{
			cout << "Error! No memory" << endl;
			return 0;
		}
		Emploee* Kolya = new Emploee{ 22, 4, 5000 }; //Створюєму об'єкт класу Emploee, та ініціалізуємо його значеннями(22, 4, 5000)
		if (Kolya == NULL)
		{
			cout << "Error! No memory" << endl;
			return 0;
		}

		Andy->printDataToConsole();
		Kolya->printDataToConsole();

		Andy->EmploeeIn(19, 3, 2969);
		Kolya->EmploeeIn(35, 15, 9898);

		Andy->printDataToConsole();
		Kolya->printDataToConsole();
		delete Andy;
		delete Kolya;
		Kolya = 0;
		Andy = 0;
		return 0;
}
