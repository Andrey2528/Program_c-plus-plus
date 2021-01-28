//11.	Напишіть функцію, яка повертає частку від ділення двох цілих чисел. Якщо друге число 0, то розподіл не виконуйте і поверніть -1.
//Жуков Андрій 14.10.2019

#include <iostream>
int a, b, c;
int myFunc(int с);
using namespace std;
int main()
{
	cout << "input 2 number" << endl;
	cin >> a >> b;
	cout << myFunc(c);
	system("pause");
	return 0;
}
int myFunc(int c)
{
	if (b != 0)
	{
		c = a % b;
		return c;
	}
	if (b == 0)
	{
		return -1;
	}

}