//14.	Напишіть if, який перевіряє дві цілі змінні і змінює більше на менше.
// Жуков Андрій 12.10.2019
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "input two numbers: \n" << endl;
	cin >> a >> b;
	if (b > a)
		b = a;
	else 
		a = b;
    cout << "a" << a << endl;
	cout << "b" << b << endl;
	return 0;
}