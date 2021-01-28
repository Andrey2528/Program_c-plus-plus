/*
4.	Напишіть двома способами :
●	прототип функції для обчислення квадрата, куба і зворотного значення дійсного числа;
●	реалізацію цієї функції;
●	драйвер для її перевірки.
*/
#include <iostream>

using namespace std;

float number = 0;

float squareQuadrant(float);
float cube(float);
float findReversed(float);



int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите число";
	cin >> number;
	cout << squareQuadrant(float (number)) << endl;
	cout << cube(float (number)) << endl;
	cout << findReversed(float(number)) << endl;
	return 0;
}

float squareQuadrant(float number)
{
	return number * number;
}

float cube(float number)
{
	return number * number * number;
}
float findReversed(float number)
{
	return 1 / number;
}
