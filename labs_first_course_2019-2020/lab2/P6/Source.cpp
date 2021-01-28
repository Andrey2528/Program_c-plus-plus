/*6.	Напишіть прототип функції для обчислення середньої зарплати трьох осіб. Напишіть її реалізацію. Викличте її з головної функції.
 Жуков Андрій 131 група 19.09.2019
 */
#include <iostream>
using namespace std;
void func(double a, double b, double c);
int main()
{
	double a = 1;
	double b = 1;
	double c = 1;
	cin >> a >> b >> c; 

	func(a, b, c);
	return 0;
}
void func(double a, double b, double c)
{
	cout << (a + b + c) / 3.0;
}