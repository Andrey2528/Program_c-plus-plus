/*2
�������� ��������, � ��� ����������� ��� ��'���� ���� "�������" . ��������� ��
��, ����� � ��������.����������� �������� ����� - ����� ��'���� �� �����.

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
	cout << "������� ��������: " << age << endl << "����� ��������: " << gender << endl << "���������: " << scolarship << endl;
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