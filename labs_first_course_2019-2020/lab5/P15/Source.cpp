//15.  �������� � �������� ������ void -������� ��� �������� �����, �������������� ������� �������� ��������� �� ���������.
//������������� � ������������� �� ������.
#include<iostream>

using namespace std;

int b;
void func(int a)
{
	a = 2 * b;
}

int main()
{
	int a = 2;
	cin >> b;
	func(a);
	system("pause");
	return 0;
}