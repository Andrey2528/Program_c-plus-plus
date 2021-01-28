//6.	Оголосіть константу Pi зі значенням 3.14159 двома способами.
//Жуков Андрій 30.09.2019
#include <iostream>
#define PI1 3.14159
using namespace std;
int main()
{
	cout << PI1;
	cin.get();

	const double PI2 = 3.14159;
	cout << PI2;
}
