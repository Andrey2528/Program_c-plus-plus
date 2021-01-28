/*9.	*** �������� ������� �������� ��� �������� ��������� ��'���� ( Cat , Pencil , Worker , Student ... ) � ��������� � ����� �� �� �����. 
��������������� ����� � ���������� ����.*/
#include <iostream>
#include "Student.h"
#include "Cat.h"
#include "Pencil.h"
#include "Worker.h"
typedef unsigned short int USINT;
using namespace std;

int choose_case(float mark)
{
	int mark_key;
	if (mark == 1)
		mark_key = 1;
	else if (mark == 2)
		mark_key = 2;
	else if (mark == 3)
		mark_key = 3;
	else if (mark == 4)
		mark_key = 4;
	else if (mark == 5)
		mark_key = 5;
	return mark_key;
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int mark;
	int a;
	do {
		cout << "**********************" << endl;
		cout << "�������� ����� ����: \n 1 - ������ ��������\n 2 - ������ ����\n 3 - ������ ���������\n 4 - ������ ���������\n 5 - �����\n";
		cout << "**********************" << endl;
		cin >> mark;
		switch (choose_case(mark))
		{
		case 1:
		{
			Student fromConsole;

			bool isUserNeedToCarryOnProcedure;
			do
			{
				int age;
				string gender;
				float scolarship;
				cout << "������� ��������" << endl;
				cin >> age;
				do
				{
					cout << "������� ���(���������� ��������: Male ��� Female" << endl;
					cin >> gender;

				} while (!(gender == "Male" || gender == "Female"));
				cout << "������� ������ ���������" << endl;
				cin >> scolarship;

				fromConsole.setAge(age);
				fromConsole.setGender(gender);
				fromConsole.setScolarship(scolarship);

				fromConsole.printAllData();

				cout << "������ ����������? 1 - ��, 0 - ���" << endl;
				cin >> isUserNeedToCarryOnProcedure;
			} while (isUserNeedToCarryOnProcedure == 1 || !(isUserNeedToCarryOnProcedure == 0));
			a = 0;
			break;
		}
		break;
		case 2:
		{
			Cat fromConsole;

			bool isUserNeedToCarryOnProcedure;
			do
			{
				int age;
				string gender;
				cout << "������� ��������" << endl;
				cin >> age;
				do
				{
					cout << "������� ���(���������� ��������: Male ��� Female" << endl;
					cin >> gender;
				} while (!(gender == "Male" || gender == "Female"));

				fromConsole.setAge(age);
				fromConsole.setGender(gender);

				fromConsole.printAllData();

				cout << "������ ����������? 1 - ��, 0 - ���" << endl;
				cin >> isUserNeedToCarryOnProcedure;
			} while (isUserNeedToCarryOnProcedure == 1 || !(isUserNeedToCarryOnProcedure == 0));
			a = 0;
			break;
		}
		break;
		case 3:
		{
			Pencil fromConsole;

			bool isUserNeedToCarryOnProcedure;
			do
			{
				string type;
				string model;
				cout << "������� ���" << endl;
				do
				{
					cout << "������� ���(B - ������, HB - ������-������, F - �������, H - ������, 2H - ����� ������)" << endl;
					cin >> type;
				} while (!(type == "B" || type == "HB" || type == "F" || type == "H" || type == "2H"));

				cout << "������� ������" << endl;
				cin >> model;

				fromConsole.setType(type);
				fromConsole.setModel(model);

				fromConsole.printAllData();

				cout << "������ ����������? 1 - ��, 0 - ���" << endl;
				cin >> isUserNeedToCarryOnProcedure;
			} while (isUserNeedToCarryOnProcedure == 1 || !(isUserNeedToCarryOnProcedure == 0));
			a = 0;
			break;
		}
		case 4:
		{
			Worker fromConsole;

			bool isUserNeedToCarryOnProcedure;
			do
			{
				int age;
				string gender;
				float scolarship;
				cout << "������� ��������" << endl;
				cin >> age;
				do
				{
					cout << "������� ���(���������� ��������: Male ��� Female" << endl;
					cin >> gender;
				} while (!(gender == "Male" || gender == "Female"));
				cout << "������� ������ ��������" << endl;
				cin >> scolarship;

				fromConsole.setAge(age);
				fromConsole.setGender(gender);
				fromConsole.setScolarship(scolarship);

				fromConsole.printAllData();

				cout << "������ ����������? 1 - ��, 0 - ���" << endl;
				cin >> isUserNeedToCarryOnProcedure;
			} while (isUserNeedToCarryOnProcedure == 1 || !(isUserNeedToCarryOnProcedure == 0));
			a = 0;
			break;
		}
		case 5:
		{
			system("color 3");
			cin.get();
			a = 2;
		}
		}
	} while (a == 1 || a == 0);
	return 0;

}