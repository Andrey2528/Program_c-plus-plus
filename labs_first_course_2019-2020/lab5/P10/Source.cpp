//10.ўо нев≥рно в наступному фрагмент≥?
//#include <iostream.h> 
//void myFunc(int x);
//void main() { int x, y; y = myFunc(int); }
//Void myFunc(int a) { return 4 * a; }
#include<iostream>

int myFunc(int x);

int main()
{
	int x, y;
	y = myFunc(x);
	cout << y << endl;
	system("pause");
	return 0;
}
int myFunc(int a) 
{ 
	return 4 * a; 
}