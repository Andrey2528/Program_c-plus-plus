//18.  Напишіть три перевантажені функції з двома параметрами різних типів, які повертають істину, якщо значення параметрів рівні.
#include<iostream>
using namespace std;
bool func(double v, int c);
bool func(int c, float x);
bool func(float z, double y);

int main()
{
	int v;
	double c;
	float z;
	cin >> v >> c >> z;
	cout << func(c, v) << "\n";
	cout << func(v, z) << "\n";
	cout << func(z, c) << "\n";
	system("pause");
	return 0;
}
bool func(double v, int c)
{
	if (v == c) return true;
	else return false;
	system("pause");
}
bool func(int c, float x)
{
	if (x == c) return true;
	else return false;
	system("pause");
}
bool func(float z, double y)
{
	if (z == y) return true;
	else return false;
	system("pause");
}