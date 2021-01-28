/*1.	�������� ���������� �������� ����� - �����.*/
#include <iostream>

using namespace std;

// ���������� �����, �� ������ ��������� ���� �����
class CPi
{
public:
	static double Pi; // ��������� ���� ����� - ���������
};

// ���������� �������� ����� �� ������ ����� � ���������� ������������
static double Exp = 2.7182818284; // ����������

// ����������� ���������� ����� ����� CPi
double CPi::Pi = 3.141592653589793;

// ������������ ������� ����, �������� ���� = 0 (�� �������������)
static double ZeroD;
static int ZeroI;
static char ZeroC;

int* pZ; // ������� �������� �� int

int _tmain()
{
	double d;
	CPi obj; // ��'��� �����
	double* pPi; // �������� �� double
	double* pExp; // �������� �� double

	// �������� ����� �� ��������� ���� ����� ��'���� obj ����� CPi
	pPi = &obj.Pi;
	pExp = &::Exp; // ����� �� ��������� ���� ����� Exp - ����� ��� ������� ����� ::

	// ��������
	d = obj.Pi; // d = 3.14159
	d = Exp; // d = 2.71828
	d = ::Exp; // d = 2.71828 - ��� ��� �����
	d = *pPi; // d = 3.14159

	// ������� �������� �� int
	pZ = &ZeroI;
	d = *pZ; // d = 0

	*pZ = 5;
	d = ZeroI; // d = 5

	return 0;
}