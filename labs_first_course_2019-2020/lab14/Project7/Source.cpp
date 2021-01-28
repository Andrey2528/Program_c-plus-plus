/*7.	�������� �������� �������� � ����������� �����, �� �� ���� �����-���� � ���� �������� �����-����. 
����� ����������� �������� �����-���� � ���������� �������� ����� ����, � ���������� - ������������ ��.
8.	�������� ������� �� �.7, � ����� ����������� ��� ��'���� � �� ����� ���������� �������� �������� � �������� ������ ����� �����. 
��������� ������� �� ��'���� � ��������� �� ���� ���������� �������� �������� ����� �����.
*/
#include <iostream>

using namespace std;

class Example
{
public:
	static int staticField;
	int varField;
	Example()
	{
		staticField++;
		varField = 5;
	}

	Example(int varField)
	{
		staticField++;
		this->varField = varField;
	}

	~Example()
	{
		staticField--;
	}
};

/*�������� ������ ��� ���������� �����-����(Data-field) ������ Example � �������������� ���*/
int Example::staticField = 0;

void printStaticAndVarFields(Example*);

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Example* ex1 = new Example(1);
	printStaticAndVarFields(ex1);

	Example* ex2 = new Example(4);
	printStaticAndVarFields(ex2);

	Example* ex3 = new Example(9);
	printStaticAndVarFields(ex3);


	//������ ������, �������� ���������
	delete ex1;
	ex1 = NULL;
	cout << "�������� ����������� ���������� ����� �������� �������: " << Example::staticField << endl;

	delete ex2;
	ex2 = NULL;
	cout << "�������� ����������� ���������� ����� �������� �������: " << Example::staticField << endl;

	delete ex3;
	ex3 = NULL;
	cout << "�������� ����������� ���������� ����� �������� �������: " << Example::staticField << endl;


	return 0;
}

void printStaticAndVarFields(Example* ex)
{
	cout << "�������� ��������� ����������: " << Example::staticField << endl;
	cout << "�������� ���������� ����������: " << (*ex).varField << endl;
}