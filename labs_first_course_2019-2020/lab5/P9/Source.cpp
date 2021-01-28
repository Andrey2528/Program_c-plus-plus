//9.	Напишіть визначення функції Perimeter (), яка обчислює периметр прямокутника.
#include <iostream>

using namespace std;

int a, b;
int Perimeter(int a, int b);

int main()
{
	cout << "input 2 numbers" << endl;
	cin >> a >> b;
	cout << Perimeter(a, b) << endl;;
	system("pause");
	return 0;
}

int Perimeter(int a, int b)
{
	unsigned long int c;
	c = 2 * (a + b);
	return c;
}