/*20.	Виконайте віднімання двох беззнакових цілих, якщо зменшуване більше від'ємника.
Жуков Андрій 12.10.2019 */
#include <iostream>
using namespace std;
int main()
{
	unsigned int a, b, c;
	cout << "Input 2 number: \n";
	cin >> a >> b;
	if (a > b)
	{
		c = a - b;
		cout << c << endl;
	}
	return 0;

}