/*	5. �� ������� � ���������� ��������� ���� ? int * pInt; * pInt = 9; cout << "The value at pInt:" << * pInt;
*/

#include <iostream>

using namespace std;

int main()
{
	int* pInt;
	*pInt = 8; //��������� �� ��������, � �� �� ����������
	cout << "The value at pInt:" << *pInt;

	return 0;
}