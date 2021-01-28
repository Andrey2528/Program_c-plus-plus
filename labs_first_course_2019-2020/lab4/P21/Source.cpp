/*21.	Виконайте ділення двох дійсних чисел, якщо дільник НЕ 0.
Жуков Андрій 12.10.2019 */
#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "input 2  numbers: \n" << endl;
	cin >> a >> b;
	a / b;
	if (b == 0)
		cout << "EROR!!!!!!" << endl;
    if (b)
	    cout << "a / b = " << a / b << endl;
	system("pause");
	return 0;

}+








a