/*
17.	Напишіть функцію, яка повертає менше з двох чисел і з її допомогою визначте менше з 5 чисел.
Жуков Андрій 12.10.2019*/
#include <iostream>
using namespace std;

float FindLessOfTwo(float a, float b);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	float a, b, c, d, e;
	cout << "Введите значения 5 чисел " << endl;
	cin >> a >> b >> c >> d >> e;
	cout << "Наименьшее среди 5: " << FindLessOfTwo(a, FindLessOfTwo(b, FindLessOfTwo(c, FindLessOfTwo(d, e)))); //Хардкор левел :)

	return 0;
}
float FindLessOfTwo(float a, float b)
{
	return (a < b) ? a : b;

}