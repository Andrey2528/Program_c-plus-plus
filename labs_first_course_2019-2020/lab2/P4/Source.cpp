/*
5.	Напишіть прототип функції для виведення відомостей про автора програми, мовою програмування, типі комп'ютера і ОС. 
Напишіть її реалізацію. Викличте її з головної функції.
 Жуков Андрій 131 група 19.09.2019 
 */
#include <iostream>
using namespace std;
void info();
int main()
{
	info();
	cin.get();
	return 0;
}
void info()             //опис функції або реалізація
{
	cout << "Name:  Andrey Zhukov" << endl;
	cout << "Language:  C++" << endl;
	cout << "Type:  Notebook" << endl;
	cout << "OS:  Windows 10" << endl;
}