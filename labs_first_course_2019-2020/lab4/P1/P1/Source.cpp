//1.	���� ���� �������� 21 / 4 � 21% 4?
//����� ����� 12.10.2019
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 21;
	int b = 4;
	cout << "������� ����� ����� - " << a / b << "\n";
	cout << "������� � �������� ����� - " << a / (double)b << "\n";
	cout << "������� � ������� - " << a % b;

}