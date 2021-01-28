/*
6.	Напишіть прототип функції для обчислення середньої зарплати трьох осіб. Напишіть її реалізацію. Викличте її з головної функції.
 Жуков Андрій 131 група 19.09.2019
 */
#include <iostream>
using namespace std;
double evereg3(double a, double b, double c);
int main()
{
	double a, b, c;
	cout << "input 3 numbers \n";
	cin >> a >> b >> c;
	double s;
    s = evereg3(a, b, c);
	cout << "evereg 3 =" << s;
	cin.get();
	return 0;
}
double evereg3(double a, double b, double c)
{
	return (a + b + c) / 3;
}
