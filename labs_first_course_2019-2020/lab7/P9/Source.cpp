/*9.	*** Напишіть циклічну програму для введення параметрів об'єкта ( Cat , Pencil , Worker , Student ... ) з клавіатури і друку їх на екран. 
Використовувати класи з попередньої теми.*/
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
		cout << "выберите пункт меню: \n 1 - Данные студента\n 2 - Данные кота\n 3 - Данные карандаша\n 4 - Данные работника\n 5 - выход\n";
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
				cout << "Введите возвраст" << endl;
				cin >> age;
				do
				{
					cout << "Введите пол(Допустимые значения: Male или Female" << endl;
					cin >> gender;

				} while (!(gender == "Male" || gender == "Female"));
				cout << "Введите размер стипендии" << endl;
				cin >> scolarship;

				fromConsole.setAge(age);
				fromConsole.setGender(gender);
				fromConsole.setScolarship(scolarship);

				fromConsole.printAllData();

				cout << "Хотите продолжать? 1 - да, 0 - нет" << endl;
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
				cout << "Введите возвраст" << endl;
				cin >> age;
				do
				{
					cout << "Введите пол(Допустимые значения: Male или Female" << endl;
					cin >> gender;
				} while (!(gender == "Male" || gender == "Female"));

				fromConsole.setAge(age);
				fromConsole.setGender(gender);

				fromConsole.printAllData();

				cout << "Хотите продолжать? 1 - да, 0 - нет" << endl;
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
				cout << "Введите тип" << endl;
				do
				{
					cout << "Введите тип(B - мягкий, HB - твердо-мягкий, F - средний, H - твёрдый, 2H - очень твёрдый)" << endl;
					cin >> type;
				} while (!(type == "B" || type == "HB" || type == "F" || type == "H" || type == "2H"));

				cout << "Введите модель" << endl;
				cin >> model;

				fromConsole.setType(type);
				fromConsole.setModel(model);

				fromConsole.printAllData();

				cout << "Хотите продолжать? 1 - да, 0 - нет" << endl;
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
				cout << "Введите возвраст" << endl;
				cin >> age;
				do
				{
					cout << "Введите пол(Допустимые значения: Male или Female" << endl;
					cin >> gender;
				} while (!(gender == "Male" || gender == "Female"));
				cout << "Введите размер зарплаты" << endl;
				cin >> scolarship;

				fromConsole.setAge(age);
				fromConsole.setGender(gender);
				fromConsole.setScolarship(scolarship);

				fromConsole.printAllData();

				cout << "Хотите продолжать? 1 - да, 0 - нет" << endl;
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