//3.	��������� �������, ������ � ��., � ���. (1 ���� = 1609 �.)
//����� ����� 10.10.2019
#include <iostream>
using namespace std;
const float convert = 1.609;

float func(float a);

int main()
{
	setlocale(LC_ALL, "Russian");
	float a;
	float s;
	cout << "������� ��������� � ���������� ������� ������ ��������� \n" << endl;
	cin >> a;
	s = func (a);
	cout << "��������� � ����� \n" << s << endl;
}

float func(float a)
{
	return a / convert;
}