/*3.	�������� ��������, ��� ������ � ����������� �������� ���������� ���� ����� 
(x 1, y 1) �(x 2, y 2) � �������� �, ��� �������� � ����� ������� �� ���� �� ����� �������� :
����� ����� 14.10.2019*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, distance;
	cout << "�������� (�1, �1) � (�2, �2) \n" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << "��������� ����� �������: " << distance << endl;
}