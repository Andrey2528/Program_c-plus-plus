/*6.	���� ������� ������� ����� ����� ������ 1 � �������, ������ ����� ����� ������� �� 78 ���� ? (�� n ���� ? ).
����� ����� 10.10.2019*/
#include <iostream>
using namespace std;
unsigned int years = 1;           //��� ������� ��������
unsigned int hours = 1;
unsigned int minutes = 1;
unsigned int day = 1;
unsigned int second = 1;
unsigned int b;
unsigned long int y = 1; //���������� ������
unsigned int years1;    //��� ������� �� ������

unsigned long int func(int years);
int main()
{
	setlocale (LC_ALL, "Russian");
	cout << "������� ���������� ��� - ";
    cin >> years;
	b = func(years);
	cout << "���������� ������ ������ = " << b << " �� " << years << "���." << endl;
	system("pause");
}

unsigned long int func(int years)
{
	int vusok_days = years / 4;                   //�����      �������� �������������� ���-�� ���� �� ���������� �����

	unsigned long int days = (365 * years) + vusok_days;
	unsigned long int hours = days * 24;
	unsigned long int min = hours * 60;
	unsigned long int sec = min * 60;

	return  sec * y;                              // y - ������ ��� ������� ���-�� ������ � ���

}