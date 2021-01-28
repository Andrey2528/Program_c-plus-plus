//13.  Напишіть і перевірте функцію, що повертає істину, якщо з клавіатури введені символи 'Y', 'y', 'д', 'Д' і брехня в іншому випадку.
//Жуков Андрій 14.10.2019

#include<iostream>
#include "windows.h"
using namespace std;
char a;
bool func(char a);
int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP;
	cout << "Input Y or y or d or D" << endl;
	cin >> a;
	cout << func(a)<< endl;
	system("pause"); 
	return 0;
}
 
bool func(char a)
{
	cout << a << endl;

	if (a == 'У' || a == 'у' || a == 'Д' || a == 'д')
	{
		return true;
	}
	else {
		return false;

	}
}