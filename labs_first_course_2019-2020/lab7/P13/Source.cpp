/*
13 �� ������������ , � �� ������ ����������� � ���������� ��� ? 
double color = 1; 
switch ( color ) 
{ case 1: cout << " Black \ n "; 
   case 2: cout << "White \ n "; 
   default : cout << " Other \ n "; } 
*/
#include <iostream>

using namespace std;

int main()
{
	double color = 1; // ������ ����� color �����, �� ������ �������� ����� �� ��������� ������ �� ������
	switch (color) { // switch �� �������� ������ �������� ������������� ��� �������� ������ ���� �����
	case 1: cout << " Black \ n "; 
	case 2: cout << " White \ n ";
	default: cout << " Other \ n ";
	}
}