/*4.	�������� 3 ������� switch ��� ����� ���� ��� �����, �������������� ��� ����: ����, ������ � �������������.*/
#include <iostream>
#include <conio.h>
using namespace std;
void main() {
	unsigned short int number;
	cout << "Enter a number between 1 and 7: ";
	cin >> number;
	switch (number) {
	case 0: cout << "Too small, sorry!\n";
		break;
	case 7: cout << "Sanday!\n";
	case 6: cout << "Saturday!\n";
	case 5: cout << "Friday!\n";
	case 4: cout << "Thursday!\n";
	case 3: cout << "Wednesday!\n";
	case 2: cout << "Tuesday!\n";
	case 1:  cout << "Monday!\n";
		break;
	default: cout << "Too large!\n";
		break;
	}
	cout << "Finish!!!\n\n";
	system("pause");


	unsigned char letter;
	cout << "Enter a letter between a and h: ";
	cin >> letter;
	letter = tolower(letter);
	switch (letter) {
	case 'a': cout << "Too small, sorry!\n";
		break;
	case 'b': cout << "Monday!\n";
	case 'c': cout << "Tuesday!\n";
	case 'd': cout << "Wednesday!\n";
	case 'e': cout << "Thursday!\n";
	case 'f': cout << "Friday!\n";
	case 'g': cout << "Saturday!\n";
	case 'h': cout << "Sanday!\n";
		break;
	default: cout << "Too large!\n";
	}
	cout << "\n\n";
	system("pause");

	unsigned short number;
	double kursG = 1, kursD = 5.4, kursM = 2.4, kursE = 5.3, kursR = 0.16, kurs;
	cout << "������� ����� (1-������, 2-������, 3-�����, 4-����, 5-�����) : ";
	cin >> number;
	switch (number)
	{
	case 1:  cout << "������! "; kurs = kursG; break;
	case 2:  cout << "������! "; kurs = kursD; break;
	case 3:  cout << "�����! ";  kurs = kursM; break;
	case 4:  cout << "����! ";   kurs = kursE; break;
	case 5:  cout << "�����! ";  kurs = kursR; break;
	default:  cout << "������������ ����!\n"; return;
	}
	cout << "������ ���� = " << kurs << endl;
}