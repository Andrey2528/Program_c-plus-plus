/*	5. що невырно в наступному фрагменты коду ? int * pInt; * pInt = 9; cout << "The value at pInt:" << * pInt;
*/

#include <iostream>

using namespace std;

int main()
{
	int* pInt;
	*pInt = 8; //указывает на значение, а не на переменную
	cout << "The value at pInt:" << *pInt;

	return 0;
}