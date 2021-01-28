//17.  Напишіть функцію для складання двох чисел, що має одне значення за замовчуванням.
#include<iostream>

using namespace std;
int d = 3;
int pluss(int a, int d);

int main()
{
	int c;
	cin >> c;
	cout << pluss(c, d);
	system("pause");
	return 0;
}
int pluss(int a, int d)
{
	a += d;
	return a;
}