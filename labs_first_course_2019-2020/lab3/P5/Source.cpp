///5.	�������� ������� � ����������� ��� ���������� ��������� ��� ����������� �� �����.�������� �� ��� ������� �� �����������.
//����� ����� 30.09.2019
#include <iostream>
using namespace std;

void info(unsigned int number, string suname, char sex,
	unsigned int age, unsigned int weight, string smoke, unsigned int cash);

int main()
{
	setlocale(LC_ALL, "Rus");
	unsigned int number1 = 1;         //�����
	string suname1 = "������";                  //�������
	char sex1 = 'M';                  //�����
	unsigned int age1 = 51;        //��
	unsigned int weight1 = 79;                  //����
	string smoke1 = "���";             //������ �� �
	unsigned int cash1 = 2500;               //��������

	unsigned int number2 = 2;         //�����
	string suname2 = "��������";                  //�������
	char sex2 = 'M';                  //�����
	unsigned int age2 = 50;        //��
	unsigned int weight2 = 80;                  //����
	string smoke2 = "���";             //������ �� �
	unsigned int cash2 = 2500;               //��������
	
	info(number1,  suname1, sex1,  age1,  weight1,  smoke1,  cash1);
	info(number2, suname2, sex2, age2, weight2, smoke2, cash2);
	return 0;
	
}

void info(unsigned int number, string suname,  char sex,  
	unsigned int age,  unsigned int weight, string smoke,  unsigned int cash)

 {
	cout << "��������  \n";
	cout << "�����- " << number << "\n";

	cout << "���- " << suname << "\n";

	cout << "�����- " << sex << "\n";

	cout << "�������- " << age << "\n";

	cout << "���- " << weight << "\n";

	cout << "�������- " << smoke << "\n";

	cout << "��������- " << cash << "\n";

	cin.get();

	
 }

