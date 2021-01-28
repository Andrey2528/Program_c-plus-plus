/*11.	Додайте ще дві змінних члена в клас. 
Увімкніть функції доступу, що приймають значення цих змінних, забезпечивши при цьому всім функціям- членам однаковий тип повернення і сигнатури. 
Використовуйте вказівник на функцію-член для доступу до цих функцій.*/
#include <iostream>

using namespace std;

class Example
{
private:
	static int staticField;
public:
	int varField;
	int thirdField;
	int fourthField;

	Example()
	{
		staticField++;
		varField = 5;
		thirdField = 7;
		fourthField = 8;
	}

	Example(int varField, int thirdField, int fourthField)
	{
		staticField++;
		this->varField = varField;
		this->thirdField = thirdField;
		this->fourthField = fourthField;
	}

	~Example()
	{
		staticField--;
	}

	static int getStatic()
	{
		return Example::staticField;
	}

	//setters
	void setVarField(int varField)
	{
		this->varField = varField;
	}
	void setThirdField(int thirdField)
	{
		this->thirdField = thirdField;
	}
	void setFourthField(int fourthField)
	{
		this->fourthField = fourthField;
	}

	//getters
	int getVarField()
	{
		return varField;
	}
	int getThirdField()
	{
		return this->fourthField;
	}
	int getFourthField()
	{
		return this->fourthField;
	}
};

//Выделяем память для статичного члена-поля(Data-field) класса Example
//И инициализируем его
int Example::staticField = 0;
int (*getStatic)() = Example::getStatic;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	typedef int (Example::* MyFuncPtrType)();
	MyFuncPtrType getField;

	Example ex1;

	getField = &Example::getVarField;
	cout << (ex1.*getField)() << endl;

	getField = &Example::getThirdField;
	cout << (ex1.*getField)() << endl;

	getField = &Example::getFourthField;
	cout << (ex1.*getField)() << endl;

	return 0;
}