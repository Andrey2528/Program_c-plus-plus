//14.  �������� � �������� inline - �������, ��� ������� ������� �������� ���������� �� �������.
#include<iostream>

using namespace std;

inline int h(unsigned char a);

int main()
{
	char symbol;
	cin >> symbol;
	cout << h(symbol);
	system("pause");
	return 0;
}

inline int h(unsigned char a)
{
	return (int)a;
}