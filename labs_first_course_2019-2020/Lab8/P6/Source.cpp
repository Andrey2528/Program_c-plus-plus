/*6.	ўо нев≥рно в наступному фрагмент≥ коду ? 
int SomeVariable = 5; 
int * pVar = & SomeVariable; 
p Var = 9; 
cout << "SomeVariable:" << * pVar;  
*/
#include <iostream>

using namespace std;

int main()
{
	int SomeVariable = 5;
	int* pVar = &SomeVariable;
	p Var = 9;  //p Var написано через пробел, а также чтобы присвоить значение SomeVariable, через указатель pVar стоит испольовать *
	cout << "SomeVariable:" << *pVar;
	return 0;
}