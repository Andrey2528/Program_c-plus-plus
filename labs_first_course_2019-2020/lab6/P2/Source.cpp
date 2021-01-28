/*2
Напишіть програму, в якій створюються два об'єкти типу "Студент" . Встановіть їх
вік, стать і стипендію.Роздрукуйте значення членів - даних об'єктів на екрані.

*/

#include <iostream>

using namespace std;

class Student
{
public:
	int age;
	string gender;
	float scolarship;
	void printData();

};

void Student::printData()
{
	cout << "Возраст студента: " << age << endl << "Стать студента: " << gender << endl << "Стипендия: " << scolarship << endl;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Student Stitch;
	Student Natasha;

	Stitch.age = 22;
	Stitch.gender = "Male";
	Stitch.scolarship = 1200;

	Natasha.age = 19;
	Natasha.gender = "Female";
	Natasha.scolarship = 1100;

    Stitch.printData();
	Natasha.printData();
	return 0;
}