//4.	Напишіть кілька конструкторів і деструктор для класу "Студент".

#include <iostream>

using namespace std;

class Student
{
public:
	int age;
	char Surname[21];
	char sex[11];
	double scolarship;

	Student();
	Student(int itsAge, char itsSurname, char itsSex, double itsScolarship);
	Student(int);

	void print();
	void enter();



};

Student::Student() {};

Student::Student(int itsAge, char itsSurname, char itsSex, double itsScolarship)
{

}

Student::Student(int)
{
	enter();
}


void Student::print()
{
	cout << "age= " << age << endl << "surname -  " << Surname << endl << "sex= " << sex << endl << "cash= " << scolarship << endl;

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
