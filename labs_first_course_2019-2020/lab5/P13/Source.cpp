//13.  �������� � �������� �������, �� ������� ������, ���� � ��������� ������ ������� 'Y', 'y', '�', '�' � ������ � ������ �������.
//����� ����� 14.10.2019

#include<iostream>
#include "windows.h"
using namespace std;
char a;
bool func(char a);
int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP;
	cout << "Input Y or y or d or D" << endl;
	cin >> a;
	cout << func(a)<< endl;
	system("pause"); 
	return 0;
}
 
bool func(char a)
{
	cout << a << endl;

	if (a == '�' || a == '�' || a == '�' || a == '�')
	{
		return true;
	}
	else {
		return false;

	}
}