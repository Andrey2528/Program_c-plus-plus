/*7.�������� �������� ������ ��� ��������� �������� �� ������ (����, �����, ������, �������, ��������) � �񳺿 ������.
������������� �� �������� ������ �����. �������� �������� �������� ������ , ��������� ��������� ����� .
��������� �������� �񳺿 ������, �������� ������������ �����. �������� ������� �������� ������ � �񳺿 ������.
�������� ���� ����� ������: ���� ��� �����, ��������� ��������� �����.*/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//�������������� ���������� ��������� ������ �����
	char myCity[255] = "������ ";
	char myState[255] = "����������� ";
	char myStreet[255] = "��������������� ";
	char myBuilding[255] = "34 ";
	char myFlat[255] = "22 ";
	char fullAddress[255] = "\n";

	//��������� ���������� ������ ����� ���������� ������
	strcat_s(fullAddress, myCity);
	strcat_s(fullAddress, myState);
	strcat_s(fullAddress, myStreet);
	strcat_s(fullAddress, myBuilding);
	strcat_s(fullAddress, myFlat);

	cout << fullAddress << endl;
	cout << "���������� �������� � �������� ������ " << strlen(myCity) << endl;
	cout << "���������� �������� � �������� ������� " << strlen(myState) << endl;
	cout << "���������� �������� � �������� ����� " << strlen(myStreet) << endl;
	cout << "���������� �������� � ������ " << strlen(fullAddress) << endl;
	cout << "���������� �������� � ������ �������� " << strlen(fullAddress) << endl;
	cout << "���������� �������� � ������ ������ " << strlen(fullAddress) << endl;

	int resComparing = strcmp(myCity, myState);

	if (resComparing == 1)
	{
		cout << "�������� ������ ������ ��� �������� ������" << endl;
	}
	else if (resComparing == 0)
	{
		cout << "�������� �����" << endl;
	}
	else {
		cout << "�������� ������ ������ ��� �������� ������" << endl;
	}
	return 0;
}

