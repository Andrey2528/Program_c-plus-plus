//16.  Перепишіть п.15, застосувавши механізм С ++ для передачі параметрів за посиланням.
#include<iostream>
using namespace std;
void func(int &a)
{
	a *= 2;
	cout << a << endl;
}

int main()
{
	int a;
	cin >> a;
	func(a);
	system("pause");
	return 0;
}