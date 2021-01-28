//12.	Видайте на екран підказку для введення числа типу signed long int, використовуючи константи з бібліотеки limits.h
//Жуков Андрій 30.09.2019
#include "limits.h"
#include <iostream>
using namespace std;
int main()
{
		signed long int a;
		cout << "signed long int min" << LONG_MIN << "signed long int max" << LONG_MAX;
		cin >> a;
		cin.get();
		return 0;
}