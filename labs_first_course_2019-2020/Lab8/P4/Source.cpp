/*4.	�������� �������� ��������, � ��� ������������ ���� � �������� �� ����. 
����� ������ ������ ����������. 
�� ��������� ��������� ��������� �������� ���� �����.*/
#include <iostream>
using namespace std;
int main()
{
	int integer;
	int* pointerToInteger = &integer;
	cout << pointerToInteger << endl << (long)pointerToInteger << endl;
	*pointerToInteger = 8;
	cout << integer; // �������� � ������� ����� ������
	return 0;
}