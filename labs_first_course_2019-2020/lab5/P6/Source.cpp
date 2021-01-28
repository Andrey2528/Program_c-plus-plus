/*6.
��������� ���� ��������� ������� tolowerR(ch), toupperR(ch), isalphaR(ch),islowerR(ch), isupperR(ch), isalnumR(ch)
��� ������ � ��������� ���������� �������.*/
#include <iostream>

using namespace std;

const char starerValueOfUpper = '�';
const char starterValueOfLower = '�';
const char starterValueOfDigit = '0';

char toUpperR(char);
char toLowerR(char);
bool isalphaR(char);
bool islowerR(char);
bool isUpperR(char);
bool isAlNumR(char);

int main() 
{
	setlocale(LC_ALL, "RUSSIAN");

	cout << "�������� ������� toUpperR(���� �������� '�'): " << toUpperR('�') << endl;
	cout << "�������� ������� toLowerR(���� �������� '�'): " << toLowerR('�') << endl << endl;

	cout << "�������� ������� isalphaR(���� �������� '�'): " << isalphaR('�') << endl;
	cout << "�������� ������� isalphaR(���� �������� 'Z'): " << isalphaR('Z') << endl << endl;

	cout << "�������� ������� islowerR(���� �������� '�'): " << islowerR('�') << endl;
	cout << "�������� ������� islowerR(���� �������� '�'): " << islowerR('�') << endl << endl;

	cout << "�������� ������� isUpperR(���� �������� '�': " << isUpperR('�') << endl;
	cout << "�������� ������� isUpperR(���� �������� '�': " << isUpperR('�') << endl << endl;

	cout << "�������� ������� isAlNumR(���� �������� '5'): " << isAlNumR('5') << endl;

	return 0;
}

char toUpperR(char ch)      //������������ ����� � ���� � ������
{ 
	if (islowerR(ch))                                                                           // ���� ����� �������� - �������� ������ (� - 32 = �)
		return ch - 32;
	else                                                                                        // ���� ����� ������ - ������� ��
	{  
		return ch;
	}
}

char toLowerR(char ch)     //������������ ����� � ������ � ����
{
	if (isUpperR(ch))                                                                           // ���� ����� ������ - �������� �������� (� + 32 = �)
		return ch + 32;
	else                                                                                        // ���� ����� �������� - �������� ��
	{
		return ch;
	}
}

bool isalphaR(char ch)               //������� ����. ����� �� �
{
	return (ch >= starerValueOfUpper && ch < starterValueOfLower + 32);                         // ch >= A( i ch < a + 32
}

bool islowerR(char ch)              //������� ���� ����. ����� �� �
{
	return (ch >= starterValueOfLower && ch < starterValueOfLower + 32);                        // ch >= ai ch < a + 32
}

bool isUpperR(char ch)              //������� ������ ����. ����� �� �
{
	return (ch >= starerValueOfUpper && ch <= starerValueOfUpper + 32);                         // ch >= A i ch <= A + 32
}

bool isAlNumR(char ch)              //�������� ����. �����, ����� �� �
{
	return (ch >= starterValueOfDigit && ch <= starterValueOfDigit + 9) || isalphaR(ch);        // ch > 0 � ch <= 0 + 9 ��� ������� ����. ����� �� �
}