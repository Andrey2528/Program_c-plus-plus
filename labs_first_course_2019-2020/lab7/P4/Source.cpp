//4.	�������� �������� ��� �������� ����� �� �������� �������� � ���������. � ��� ������ �� ������ �������� �������� �������� �����.
#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	do
	{
      cout << "input number 0 - 56" << endl;
	cin >> a;
	} while (!(a >= 0 && a <= 56));
	
	return 0;
}