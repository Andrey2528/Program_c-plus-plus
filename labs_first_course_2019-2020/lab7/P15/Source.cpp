
#include<iostream>
#include<string>
using namespace std;
class Cat
{

private:
	//Data
	int itsAge;
	string itsGender;
	float itsScolarship;

public:
	//konstruktor
	Cat();

	//Destructor
	~Cat();

	//Medots

	void setAge(int actualAge);	//���������� ������ �������� ��������

	void setGender(string newValueOfGender);	//���������� ������ �������� �����

	void setScolarship(float newValueOfScolarship);	//���������� ������ �������� ���������

	int getAge() const;		 //����������� ��������

	string getGender()	const;	//����������� �����

	float getScolarship() const;	//����������� ���������

	void printAllData();	//����� ���� ������

	void printAge();

	void printGender();

	void printScolarship();

};

//konstruktor
Cat::Cat()
{
	itsAge = 18;
	itsGender = "";
}

//Destructor
Cat::~Cat()
{
	cout << "��'��� ����� ����������" << endl;
}
//Medots

void Cat::setAge(int actualAge)		//���������� ������ �������� ��������
{
	itsAge = actualAge;
}

void Cat::setGender(string newValueOfGender)		//���������� ������ �������� �����
{
	itsGender = newValueOfGender;
}

int Cat::getAge() const			 //����������� ��������
{
	return itsAge;
}

string Cat::getGender()	const	//����������� �����
{
	return itsGender;
}

void Cat::printAllData()		//����� ���� ������
{
	cout << "������� ����: " << itsAge << endl << "����� ����: " << itsGender << endl;
};


class Pencil
{

private:
	//Data
	string itsType;
	string itsModel;

public:
	//konstruktor
	Pencil();

	//Destructor
	~Pencil();

	//Medots

	void setType(string actualType);	//���������� ������ �������� ��������

	void setModel(string newValueOfModel);	//���������� ������ �������� �����

	string getType() const;		 //����������� ��������

	string getModel()	const;	//����������� �����

	void printAllData();	//����� ���� ������

};

Pencil::Pencil()
{
	itsType = "";
	itsModel = "";
}

//Destructor
Pencil::~Pencil()
{
	cout << "��'��� ����� ����������" << endl;
}
//Medots

void Pencil::setType(string actualType)		//���������� ������ �������� ��������
{
	itsType = actualType;
}

void Pencil::setModel(string newValueOfModel)		//���������� ������ �������� �����
{
	itsModel = newValueOfModel;
}

string Pencil::getType() const			 //����������� ��������
{
	return itsType;
}

string Pencil::getModel()	const	//����������� �����
{
	return itsModel;
}

void Pencil::printAllData()		//����� ���� ������
{
	cout << "��� ���������: " << itsType << endl << "������ ���������: " << itsModel << endl;
}

int main()
{
	bool Carry = 0;
	setlocale(LC_ALL, "russian");
	int n, a;
	cout << "������ ��� �������(1-Cat, pencil-2): ";
	cin >> n;
	do {
		switch (n)
		{
			case 1:
			{
				Cat fromConsole;

				bool Carry;
				do
				{
					int age;
					string gender;
					cout << "������� ��������" << endl;
					cin >> age;
					do
					{
						cout << "������� ���(���������� ��������: Male ��� Female" << endl;
						cin >> gender;
					} while (!(gender == "Male" || gender == "Female"));

					fromConsole.setAge(age);
					fromConsole.setGender(gender);

					fromConsole.printAllData();

					cout << "������ ����������? 1 - ��, 0 - ���" << endl;
					cin >> Carry;
				} while (Carry == 1 || !(Carry == 0));
				a = 0;
				break;
			}
			break;
			case 2:
			{
				Pencil fromConsole;

				bool isUserNeedToCarryOnProcedure;
				do
				{
					string type;
					string model;
					cout << "������� ���" << endl;
					do
					{
						cout << "������� ���(B - ������, HB - ������-������, F - �������, H - ������, 2H - ����� ������)" << endl;
						cin >> type;
					} while (!(type == "B" || type == "HB" || type == "F" || type == "H" || type == "2H"));

					cout << "������� ������" << endl;
					cin >> model;

					fromConsole.setType(type);
					fromConsole.setModel(model);

					fromConsole.printAllData();

					cout << "������ ����������? 1 - ��, 0 - ���" << endl;
					cin >> Carry;
				} while (Carry == 1 || !(Carry == 0));
				a = 0;
				break;
			}
		} 
		return 0;
	} while (Carry == 1 || Carry == 0);
}