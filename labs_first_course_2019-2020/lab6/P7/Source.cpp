/* 7.	�������� ��������, � ��� ����������� ��� ��'���� ���� "�������". 
��������� �� ��, ����� � �������� �� ��������� ������ �������. 
����������� �������� ������� �����-����� ��'���� �� �����, �������������� ������ �������. 
�������� � ����������� ������� �� � ������� �������� ��� ���� ��������.*/

#include <iostream>

typedef unsigned short int USINT;

using namespace std;

class Student
{

private:
	//Data
	string itsName;
	USINT itsAge;
	string itsGender;
	float itsScolarship;

public:
	//Konstruktor
	Student()
	{
		itsName = "";
		itsAge = 18;
		itsGender = "";
		itsScolarship = 1396;
	}
//����������� �� �����������
	Student(string Sname, USINT Sage, string Sgender, float Sscolarship)
	{
		itsName = Sname;                //���������� ������������ �������� �����
		itsAge = Sage;					//���������� ������������ �������� ��������
		itsGender = Sgender;			//���������� ������������ �������� �����
		itsScolarship = Sscolarship;	//���������� ������������ �������� ���������
	}

	//Destructor
	~Student()
	{
		cout << "��'��� ����� ����������" << endl;
	}
	//Medots
	void printAllData();      //����� ���� ������

	void printName();       //����� ����� ��������

	void printAge();        //����� ��������


	void printGender();       //����� �����


	void printScolarship();      //����� ���������


	void setName(string newValueOfName);       //���������� ������ �������� �����


	void setAge(USINT actualAge);				//���������� ������ �������� ��������


	void setGender(string newValueOfGender);	//���������� ������ �������� �����


	void setScolarship(float newValueOfScolarship);			//���������� ������ �������� ���������


	string getName() const;      //����������� �����


	int getAge() const;			 //����������� ��������


	string getGender() const;		 //����������� �����

	float getScolarship() const;	 //����������� ���������

};




void Student::setName(string newValueOfName)   //���������� ������ �������� �����
{
	itsName = newValueOfName;
}

void Student::setAge(USINT actualAge)		//���������� ������ �������� ��������
{
	itsAge = actualAge;
}

void Student::setGender(string newValueOfGender)		//���������� ������ �������� �����
{
	itsGender = newValueOfGender;
}

void Student::setScolarship(float newValueOfScolarship)		//���������� ������ �������� ���������
{
	itsScolarship = newValueOfScolarship;
}

string Student::getName() const		//����������� �����
{
	return itsName;
}

int Student::getAge() const			 //����������� ��������
{
	return itsAge;
}

string Student::getGender()	const	//����������� �����
{
	return itsGender;
}
float Student::getScolarship() const		//����������� ���������
{
	return itsScolarship;
}

void Student::printAllData()		//����� ���� ������
{
	cout << "³� ��������: " << itsAge << endl << "����� ��������: " << itsGender << endl << "�������: " << itsScolarship << endl;
};

void Student::printName()
{
	cout << "��'� ��������: " << itsName << endl;
}
void Student::printAge()
{
	cout << "³� �������� : " << itsAge << endl;
}

void Student::printGender()
{
	cout << "����� ��������: " << itsGender << endl;
}

void Student::printScolarship()
{
	cout << "�������: " << itsScolarship << "\n" << endl;
}


int main()
{


	setlocale(LC_ALL, "Ukrainian");

	Student s1("Andrey", 18, "Male", 1200);
	Student s2;	 

	s1.setName("�����");
	s1.setAge(18);
	s1.setGender("�������");
	s1.setScolarship(1241);

	s2.setName("³�����");
	s2.setAge(21);
	s2.setGender("�������");
	s2.setScolarship(1412);

	cout << s1.getName() << endl;

	s2.printName();
    s2.printAge();
	s2.printGender();
	s2.printScolarship();

	float ageInAverage = (float(s1.getAge()) + s2.getAge()) / 2;
	float summarizedScolarship = s1.getScolarship() + s2.getScolarship();

	cout << "������� �� ��������: " << ageInAverage << "\n" << endl;
	cout << "������� �������� ��������: " << summarizedScolarship << "\n" << endl;

	return 0;
}