/*3.	������� ��'��� ����-����� ����� ������������ ����� ( Cat , Worker , Pencil ...) � ����� ���'��.
���� ��������� � �������� �� �����. 
����� � ����������� �������� ����� ��'���� �� ��������� ��������� �� ���������.*/
#include <iostream>

using namespace std;

class  Worker
{
public:
	int Number;
	string secondName;
	string gender;
	unsigned short int age;
	float weight;
	bool isSmocking;
	float taxe;
	Worker(int newNumber, string IsecondName, string Igender, unsigned short int Iage, float Iweight, bool IisSmocking, float Itaxe)
	{
		Number = newNumber;
		secondName = IsecondName;
		gender = Igender;
		age = Iage;
		weight = Iweight;
		isSmocking = IisSmocking;
		taxe = Itaxe;
	}
	void printDateToConsole() {
		cout << Number << endl << secondName << endl << gender << endl << age << endl << weight << endl << isSmocking << endl << taxe << endl;
	}
	void changeValues(int newTabelNumber, string newSecondName, string newGender, unsigned short int newAge, float newWeight, bool newIsSmocking, float newTaxe)
	{
		Number = newTabelNumber;
		secondName = newSecondName;
		gender = newGender;
		age = newAge;
		weight = newWeight;
		isSmocking = newIsSmocking;
		taxe = newTaxe;
	}
};

int main()
{
	Worker* Stive = new Worker{ 192, "Fosters", "male", 19, 102, false, 5000 };

	Stive->changeValues(192, "Fosters", "male", 19, 102, false, 5000);
	Stive->printDateToConsole();

	Worker& refernceStive = *Stive;
	Stive->changeValues(92, "Fosters", "male", 21, 103, false, 5220);
	Stive->printDateToConsole();

	//������ ������
	delete Stive;

	//������� ������� ����������
	Stive = 0;

	return 0;
}