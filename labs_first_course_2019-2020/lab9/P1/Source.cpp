/*1.	������� ��'��� ������ ���� � �����. ���� ��������� � �������� �� �����. 
����� � ����������� �������� ����� ��'���� �� ��������� ��������� �� ���������.*/
#include <iostream>
using namespace std;
int main() {
	int number = 5;

	//��������
	int* ptrToNumber = &number;
	*ptrToNumber = 6;
	cout << *ptrToNumber << endl;

	//���������
	int& rfrToNumber = number;
	rfrToNumber = 7;
	cout << rfrToNumber << endl;

	//������� ������� ����������
	ptrToNumber = 0;
	return 0;
}