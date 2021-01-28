//1.	Яким буде значення 21 / 4 і 21% 4?
//Жуков Андрій 12.10.2019
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 21;
	int b = 4;
	cout << "Деление целих чисел - " << a / b << "\n";
	cout << "Деление с дробовой частю - " << a / (double)b << "\n";
	cout << "Деление с остачей - " << a % b;

}