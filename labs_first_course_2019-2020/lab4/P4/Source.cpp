/*4.	��������� ����������� � ������� �� ����������� � ������� �� ������ 
(������� ��� ��������� : � = 5 / 9 (� - 32)).
����� ����� 10.10.2019*/
#include <iostream>
using namespace std;
float a, F, d = 9, w = 5;

float func(float a);
int main()
{
	setlocale(LC_ALL, "russian");
	float C;
	cout << "������� ������� � ���������� - \n" << endl;
	cin >> F;
	C = func(a);
	cout << "������� � ������� - " << C << "\n" << endl;
	system("pause");
}
float func(float a)
{
	return (w / d) * (F - 32);
}

