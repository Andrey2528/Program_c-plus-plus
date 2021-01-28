///5.	Напишіть функцію з параметрами для роздруківки відомостей про співробітника на екрані.Викличте її для кожного із співробітників.
//Жуков Андрій 30.09.2019
#include <iostream>
using namespace std;

void info(unsigned int number, string suname, char sex,
	unsigned int age, unsigned int weight, string smoke, unsigned int cash);

int main()
{
	setlocale(LC_ALL, "Rus");
	unsigned int number1 = 1;         //номер
	string suname1 = "Петров";                  //прізвище
	char sex1 = 'M';                  //стать
	unsigned int age1 = 51;        //вік
	unsigned int weight1 = 79;                  //вага
	string smoke1 = "Нет";             //курить чи ні
	unsigned int cash1 = 2500;               //зарплата

	unsigned int number2 = 2;         //номер
	string suname2 = "Васильев";                  //прізвище
	char sex2 = 'M';                  //стать
	unsigned int age2 = 50;        //вік
	unsigned int weight2 = 80;                  //вага
	string smoke2 = "Нет";             //курить чи ні
	unsigned int cash2 = 2500;               //зарплата
	
	info(number1,  suname1, sex1,  age1,  weight1,  smoke1,  cash1);
	info(number2, suname2, sex2, age2, weight2, smoke2, cash2);
	return 0;
	
}

void info(unsigned int number, string suname,  char sex,  
	unsigned int age,  unsigned int weight, string smoke,  unsigned int cash)

 {
	cout << "Работник  \n";
	cout << "номер- " << number << "\n";

	cout << "имя- " << suname << "\n";

	cout << "стать- " << sex << "\n";

	cout << "возраст- " << age << "\n";

	cout << "Вес- " << weight << "\n";

	cout << "Курение- " << smoke << "\n";

	cout << "Зарплата- " << cash << "\n";

	cin.get();

	
 }

