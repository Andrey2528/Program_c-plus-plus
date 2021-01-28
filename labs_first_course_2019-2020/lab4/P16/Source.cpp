//16.	Визначте більше з трьох чисел, введених з клавіатури.
// Жуков Андрій 12.10.2019
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "input 3 numbers: \n" << endl;
	cin >> a >> b >> c;
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	cout << "max number: \n" << max << endl;

	return 0;
}