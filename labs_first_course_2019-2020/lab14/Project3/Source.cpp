/*3.	Напишіть оголошення вказівника на функцію, що повертає long і приймає ціле.*/
#include <iostream>

using namespace std;

long int convertToLong(int);

int main()
{
	long int(*ptrToFunc)(int) = convertToLong;

	cout << ptrToFunc(9) << endl;

	return 0;
}


long int convertToLong(int exmpl)
{
	return long int(exmpl);
}