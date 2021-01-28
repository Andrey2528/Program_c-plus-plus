/*6.	��������� �.5, �������������� �������� typedef.*/
#include <iostream>

typedef long int(*ptrsToFunc[10])(int);

class Car
{
public:
	static long int convertToLong(int exmpl)
	{
		return long int(exmpl);
	}
};

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	//������� ������ � 10 �������� ��� �������
	ptrsToFunc pointers;

	//����������� ��� ��������� � ������� ��������� �� ������� ���������
	for (unsigned int i = 0; i < 10; i++)
	{
		pointers[i] = Car::convertToLong;
	}

	cout << pointers[3](15); //��������� � 3 ������� � ���������� 15

	return 0;
}