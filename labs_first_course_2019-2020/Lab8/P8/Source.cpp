/*8.	������� ��'��� ������ ���� � �����. ���� �������� �� �����. ����� � ����������� �������� ����� ��'���� �� ��������� ���������.*/
#include <iostream>
using namespace std;
int main()
{
	int A = 8;
	int* pA = &A;
	*pA = 5;
	cout << *pA << endl;

}