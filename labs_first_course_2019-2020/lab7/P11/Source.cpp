/*11.	�������� �������� ��� ��������� �������������� ���������� �� ������ г�����, �������������� �������� ������� �����
 
����	��������������
n <5	�����, ���� ���������
5 <= n < 5.5	������, ������� ����������
5.5 <= n < 6.5	��������, ���������� � ����������� ���
6.5 <= n <7.5	����, ������ ������� � ������� ���������
n > 7.5	����������, �������� ������� � ������� ���������
*/
#include<iostream>

using namespace std;

int choose_case(float mark)
{
	int mark_key;
	if (mark < 5)
		mark_key = 1;
	else if (mark >= 5 && mark < 5.5)
		mark_key = 2;
	else if (mark >= 5.5 && mark < 6.5)
		mark_key = 3;
	else if (mark >= 6.5 && mark < 7.5)
		mark_key = 4;
	else if (mark >= 7.5 && mark <= 10)
		mark_key = 5;
	else mark_key = 777;
	return mark_key;
}
int main() {
	setlocale(LC_ALL, "rus");
	float mark;
	do {
		
		cout << "������� ������ �� ����� �������: ";

		cin >> mark;
		switch (choose_case(mark))
		{
			case 1:
			{
				cout << "������, ��� ����������. " << endl;
				break;
			}
			case 2:
			{
				cout << "�������, ��������� ����������. " << endl;
				break;
			}
			case 3:
			{
				cout << "���������, ���������� � ����������� ����. " << endl;
				break;
			}
			case 4:
			{
				cout << "��������, ������ ���� � ������ ����������. " << endl;
				break;
			}
			case 5:
			{
				cout << "����������, ����������� ����� � ������ ���������. " << endl;
				break;
			}

			default:
			{
				cout << "������� ������ �������� " << endl;
			}
		}

	} while (mark < 5 || mark > 10);
	
	cin.get();

}