/*2.	���� � ��� � ����� ���� unsigned short int � ��'�� yourAge, �� ��������� ��������, ��� ���� �� �� ������.*/
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