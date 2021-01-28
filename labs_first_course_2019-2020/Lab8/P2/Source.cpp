/*2.	Якщо у вас є змінна типу unsigned short int з ім'ям yourAge, як оголосити вказівник, щоб мати до неї доступ.*/
#include <iostream>

using namespace std;

int main()
{
	unsigned short int yourAge = 0;
	unsigned short int* pointerToYourAge = &yourAge;

	*pointerToYourAge = 49;
	cout << *pointerToYourAge;

	return 0;
}