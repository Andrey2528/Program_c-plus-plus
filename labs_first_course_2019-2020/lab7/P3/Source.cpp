//3.	�������� ����� for, while, do ... while ��� ����� ����� �� 100 �� 200 ����� 2.
#include <iostream>

using namespace std;


int main()
{
	unsigned short int i = 100;

	while (i <= 200 )
	{
		cout << "\nWhile  " << i << "  ";
		i += 2;
	}

	for (i = 100; i <= 200; i += 2)
		cout << "\nfor  " << i << "  ";

	
	i = 100;
	do
	{
		cout << "\ndo While  " << i << "  ";
		i += 2;
	} while (i <= 200);
	return 0;
}