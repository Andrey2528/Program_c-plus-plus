/*
4.	�������� 3 ������� �������� ��� ���������� ����, ������, �������, ������, ����� ����������� ���� ����� ����� a � b � ��������� ���������� �� �����:
a)       ����� a � b ��������������;
b)       ������ a � b ����������� ��������;
c)       �������� ����� a � b ������ � ���������.
 ����� ����� 131 ����� 19.09.2019
b)
*/
#include <iostream>
using namespace std;
int main() 
{
	//a)
	{
		int a = 27;
		int b = 72;
		cout << "\n";
		cout << "s = " <<  a + b << endl;
		cout << "r = " << a - b << endl;
		cout << "m = " << a * b << endl;
		cout << " d = " <<(double)a / b << endl;
		cout << " arithmetic mean = " << ((double)a + b) / 2 << endl;
		cout << "Press <Enter>to continue \n\t";
		cin.get();
	}
	//b)
 {
		int a;
		int b;
		a = 96;
		b = 35;
		cout << "\n";
		cout << "s = " << a + b << endl;
		cout << "r = " << a - b << endl;
		cout << "m = " << a * b << endl;
		cout << " d = " << (double)a / b << endl;
		cout << " arithmetic mean = " << ((double)a + b) / 2 << endl;
		cout << "Press <Enter>to continue \n\t";
		cin.get();

 }
  //c)
  {
	    int a = 1;
	    int b = 1;
		cout << "input two numbers \t";
		cin >> a >> b;
		cout << "\n";
		cout << "s = " << a + b << endl;
		cout << "r = " << a - b << endl;
		cout << "m = " << a * b << endl;
		cout << " d = " << (double)a / b << endl;
		cout << " arithmetic mean = " << ((double)a + b) / 2 << endl;
		cout << "Press <Enter> to end";
		cin.get();
  }
}