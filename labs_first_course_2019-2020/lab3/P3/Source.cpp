//3.	Оголосіть змінні, необхідні для зберігання наступних відомостей про співробітника: 
//Табельний номер, прізвище, стать, вік, вага, курить чи ні, тарифна ставка і проініціалізіруйте їх. 
//Роздрукуйте дані на екрані. 
//Введіть нові значення з клавіатури і знову роздрукуйте.
//Жуков Андрій 30.09.2019
#include <iostream>
using namespace std;
int main()

{
	setlocale(LC_ALL, "Rus");
	unsigned int number = 1;         //номер
	string suname = "Григорий";                  //ім'я
	char sex = 'M';                  //стать
	unsigned int age = 50;        //вік
	unsigned int weight = 79;                  //вага
	string smoke = "Нет";             //курить чи ні
	unsigned int cash = 2500;               //зарплата


	cout << "номер- " << number << "\n";

	cout << "имя- " << suname << "\n";

	cout << "стать- " << sex << "\n";

	cout << "возраст- " << age << "\n";

	cout << "Вес- " << weight << "\n";

	cout << "Курение- " << smoke << "\n";

	cout << "Зарплата- " << cash << "\n";

	cin.get();

}
