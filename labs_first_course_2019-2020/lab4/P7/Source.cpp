//7.	Запишіть правильно математичні вирази на С++
// Жуков Андрій 10.10.2019
#include <iostream>
#include <cmath>
using namespace std;
double e, b, x, y, z, k=3;

double func(double x, double y, double k);
double func2(double x, double y, double z);

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите числа: \n";
	cin >> x >> y >> z;
	b =  func(x, y, k);
	cout << b << "\n" << endl;

	cout << "Введите числа: \n";
	cin >> x >> y >> z;
	e = func2(x, y, z);
	cout << e << endl;



}
double func (double x, double y, double k)
{
	return 	 x + (pow(y, k)) / (x + (pow(y, k) / (x + (pow(y, k)))));

}

double func2 (double x, double y, double z)
{
	return 	 ((y - x) * (y - (z / (y - x)) / (1 + (y - (pow((y - x), 2))))));

}


