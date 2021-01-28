//15.	Запишіть те ж саме, використовуючи потрійну операцію.
// Жуков Андрій 12.10.2019
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "input two numbers: \n" << endl;
	cin >> a >> b;
	
	(a < b) ? b = a : a = b;
	cout << "a: " << a << "b:" << b << "\n" << endl;
	cin.get();
	cin.get();
	return 0;

		
}