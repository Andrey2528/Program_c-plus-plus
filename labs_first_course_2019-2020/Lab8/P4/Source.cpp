/*4.	Напишіть невелику програму, в якій оголошуються ціле і вказівник на ціле. 
Дайте адресу цілого вказівником. 
За допомогою вказівника встановіть значення цілої змінної.*/
#include <iostream>
using namespace std;
int main()
{
	int integer;
	int* pointerToInteger = &integer;
	cout << pointerToInteger << endl << (long)pointerToInteger << endl;
	*pointerToInteger = 8;
	cout << integer; // Печатает в консоль адрес целого
	return 0;
}