//3.	Переведіть відстань, задану в км., в милі. (1 миля = 1609 м.)
//Жуков Андрій 10.10.2019
#include <iostream>
using namespace std;
const float convert = 1.609;

float func(float a);

int main()
{
	setlocale(LC_ALL, "Russian");
	float a;
	float s;
	cout << "Введите растояние в километрах которые хотите перевести \n" << endl;
	cin >> a;
	s = func (a);
	cout << "растояние в милях \n" << s << endl;
}

float func(float a)
{
	return a / convert;
}