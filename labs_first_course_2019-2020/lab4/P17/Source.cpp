/*
17.	�������� �������, ��� ������� ����� � ���� ����� � � �� ��������� �������� ����� � 5 �����.
����� ����� 12.10.2019*/
#include <iostream>
using namespace std;

float FindLessOfTwo(float a, float b);
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	float a, b, c, d, e;
	cout << "������� �������� 5 ����� " << endl;
	cin >> a >> b >> c >> d >> e;
	cout << "���������� ����� 5: " << FindLessOfTwo(a, FindLessOfTwo(b, FindLessOfTwo(c, FindLessOfTwo(d, e)))); //������� ����� :)

	return 0;
}
float FindLessOfTwo(float a, float b)
{
	return (a < b) ? a : b;

}