/*6.	�� ������ � ���������� �������� ���� ? 
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
	p Var = 9;  //p Var �������� ����� ������, � ����� ����� ��������� �������� SomeVariable, ����� ��������� pVar ����� ����������� *
	cout << "SomeVariable:" << *pVar;
	return 0;
}