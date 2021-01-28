//4.	Змініть програму 3. так, щоб в ній оброблялися відомості про двох співробітників.
//Жуков Андрій 30.09.2019
#include <iostream>
using namespace std;
int main()

{
	setlocale(LC_ALL, "Rus");
	unsigned int number1 = 1;         //номер
	string suname1 = "Григорий";                  //ім'я
	char sex1 = 'M';                  //стать
	unsigned int age1 = 50;        //вік
	unsigned int weight1 = 79;                  //вага
	string smoke1 = "Нет";             //курить чи ні
	unsigned int cash1 = 2500;               //зарплата
	
	
	setlocale(LC_ALL, "Rus");
	unsigned int number2 = 1;         //номер
	string suname2 = "Григорий";                  //ім'я
	char sex2 = 'M';                  //стать
	unsigned int age2 = 50;        //вік
	unsigned int weight2 = 79;                  //вага
	string smoke2 = "Нет";             //курить чи ні
	unsigned int cash2 = 2500;               //зарплата

	cout << "Работник 1 \n";
	cout << "номер- " << number1 << "\n";

	cout << "имя- " << suname1 << "\n";

	cout << "стать- " << sex1 << "\n";

	cout << "возраст- " << age1 << "\n";

	cout << "Вес- " << weight1 << "\n";

	cout << "Курение- " << smoke1 << "\n";

	cout << "Зарплата- " << cash1 << "\n";

	cin.get();

	cout << "Работник 2 \n";
	cout << "номер- " << number2 << "\n";

	cout << "имя- " << suname2 << "\n";

	cout << "стать- " << sex2 << "\n";

	cout << "возраст- " << age2 << "\n";

	cout << "Вес- " << weight2 << "\n";

	cout << "Курение- " << smoke2 << "\n";

	cout << "Зарплата- " << cash2 << "\n";

	cin.get();

}
