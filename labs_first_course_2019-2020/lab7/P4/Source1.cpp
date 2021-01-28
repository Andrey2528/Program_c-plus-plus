/*5.	Напишіть програму обчислення суми і множення чисел, що вводяться з клавіатури:
a)	кількість чисел попередньо вводиться з клавіатури;     
b)	обчислення припиняються за запитом програми.     
*/
#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int inputtedValue = 0;
	int multiplication = 1;
	int sum = 0;
	bool procedure;
	int n;
	//do
	//{
	//	cout << "Введите число которое дожно быть умножено и прибавлено \n";
	//	cin >> inputtedValue;
	//	multiplication *= inputtedValue;
	//	sum += inputtedValue;
	//	cout << "Хотите продолжать? 1 - да, 0 - нет" << endl;
	//	cin >> procedure;
	
	//} while (procedure == 1 || procedure != 0);   //обчислення припиняються за запитом програми. 
	//	cout << "Сумма: " << sum << endl << "умножение: " << multiplication << endl;
	cout << "введите количество цифр";
		cin >> n;
	for (int i = 1; i <= n; i++) {
		

		cout << "Введите число которое дожно быть умножено и прибавлено \n";
		cin >> inputtedValue;
		multiplication *= inputtedValue;
		sum += inputtedValue;

	}
	cout << "Сумма: " << sum << endl << "умножение: " << multiplication << endl;

	return 0;
}






