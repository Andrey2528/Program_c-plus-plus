//3.	Розробіть методи класу, що дозволяють виконувати введення / виведення всіх членів - даних класу "Студент" та перевірте їх в головній програмі.
#include <iostream>

using namespace std;

class Student
{
public:
	int age;
	char Surname[21];
	char sex[11];
	double scolarship;

	void print();
	void enter();
	
	
};

void Student::print()
{
	cout <<  "age= " << age << endl << "surname -  " << Surname << endl << "sex= " << sex << endl << "cash= " << scolarship << endl;

}

void Student::enter()
{
	cout << "input age: ";
	cin >> age;
	cout << "input Surname: ";
	cin >> Surname;
	cout << "input sex: ";
	cin >> sex;
	cout << "input you cash: ";
	cin >> scolarship;
	cout << "\n";
}

int main()
{
	Student Andrey;


	Andrey.enter();

	Andrey.print();


	cin.get();

	return 0;
}

