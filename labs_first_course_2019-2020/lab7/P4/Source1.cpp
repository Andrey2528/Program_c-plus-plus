/*5.	�������� �������� ���������� ���� � �������� �����, �� ��������� � ���������:
a)	������� ����� ���������� ��������� � ���������;     
b)	���������� ������������ �� ������� ��������.     
*/
#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int inputtedValue = 0;
	int multiplication = 1;
	int sum = 0;
	bool procedure;
	int n;
	//do
	//{
	//	cout << "������� ����� ������� ����� ���� �������� � ���������� \n";
	//	cin >> inputtedValue;
	//	multiplication *= inputtedValue;
	//	sum += inputtedValue;
	//	cout << "������ ����������? 1 - ��, 0 - ���" << endl;
	//	cin >> procedure;
	
	//} while (procedure == 1 || procedure != 0);   //���������� ������������ �� ������� ��������. 
	//	cout << "�����: " << sum << endl << "���������: " << multiplication << endl;
	cout << "������� ���������� ����";
		cin >> n;
	for (int i = 1; i <= n; i++) {
		

		cout << "������� ����� ������� ����� ���� �������� � ���������� \n";
		cin >> inputtedValue;
		multiplication *= inputtedValue;
		sum += inputtedValue;

	}
	cout << "�����: " << sum << endl << "���������: " << multiplication << endl;

	return 0;
}






