/*3.	Надайте значення 50 змінної yourAge з п.2.*/
#include <iostream>

using namespace std;

int main()
{
	unsigned short int yourAge = 0;
	unsigned short int* pointerToYourAge = &yourAge;

	yourAge = 50;
	cout << *pointerToYourAge;

	return 0;
}