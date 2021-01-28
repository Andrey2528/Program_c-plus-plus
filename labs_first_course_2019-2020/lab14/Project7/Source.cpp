/*7.	Напишіть невелику програму з оголошенням класу, що має одну змінну-член і одну статичну змінну-член. 
Нехай конструктор ініціалізує змінну-член і інкрементує статичну змінну член, а деструктор - декрементирує її.
8.	Напишіть драйвер до п.7, в якому створюється три об'єкти і на екран виводяться значення звичайної і статичної змінних членів класу. 
Необхідно знищити ці об'єкти і простежте як буде змінюватися значення статичної змінної члена.
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

/*Выделяем память для статичного члена-поля(Data-field) класса Example и инициализируем его*/
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


	//Чистим память, обнуляем указатели
	delete ex1;
	ex1 = NULL;
	cout << "Значение статической переменной после удаления объекта: " << Example::staticField << endl;

	delete ex2;
	ex2 = NULL;
	cout << "Значение статической переменной после удаления объекта: " << Example::staticField << endl;

	delete ex3;
	ex3 = NULL;
	cout << "Значение статической переменной после удаления объекта: " << Example::staticField << endl;


	return 0;
}

void printStaticAndVarFields(Example* ex)
{
	cout << "Значение статичной переменной: " << Example::staticField << endl;
	cout << "Значение динамичной переменной: " << (*ex).varField << endl;
}