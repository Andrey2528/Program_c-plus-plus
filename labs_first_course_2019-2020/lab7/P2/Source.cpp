//2 Напишіть вкладений цикл for, що друкує картинку з нулів 10х10.


#include <iostream>

using namespace std;


int main()
{
	for (int i = 0; i < 9; i++)
	{
		cout << 1;
		for (int j = 0; j < 6; j++)
			cout << 0;
		cout << endl;
	}
	return 0;
}