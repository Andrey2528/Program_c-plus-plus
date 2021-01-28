/*11.	Напишіть програму для виведення характеристики землетрусу за шкалою Ріхтера, використовуючи наступну таблицю рішень
 
бали	характеристика
n <5	Легке, немає руйнувань
5 <= n < 5.5	Середнє, невеликі руйнування
5.5 <= n < 6.5	Серйозне, руйнування і пошкодження стін
6.5 <= n <7.5	Лихо, багато будинків і будівель пошкоджені
n > 7.5	Катастрофа, більшість будинків і будівель зруйновані
*/
#include<iostream>

using namespace std;

int choose_case(float mark)
{
	int mark_key;
	if (mark < 5)
		mark_key = 1;
	else if (mark >= 5 && mark < 5.5)
		mark_key = 2;
	else if (mark >= 5.5 && mark < 6.5)
		mark_key = 3;
	else if (mark >= 6.5 && mark < 7.5)
		mark_key = 4;
	else if (mark >= 7.5 && mark <= 10)
		mark_key = 5;
	else mark_key = 777;
	return mark_key;
}
int main() {
	setlocale(LC_ALL, "rus");
	float mark;
	do {
		
		cout << "Введите оценку по шкале Рихтера: ";

		cin >> mark;
		switch (choose_case(mark))
		{
			case 1:
			{
				cout << "Легкое, нет разрушений. " << endl;
				break;
			}
			case 2:
			{
				cout << "Среднее, небольшие разрушения. " << endl;
				break;
			}
			case 3:
			{
				cout << "Серьезное, разрушения и повреждения стен. " << endl;
				break;
			}
			case 4:
			{
				cout << "Бедствие, многие дома и здания повреждены. " << endl;
				break;
			}
			case 5:
			{
				cout << "Катастрофа, большинство домов и зданий разрушены. " << endl;
				break;
			}

			default:
			{
				cout << "Введите верное значение " << endl;
			}
		}

	} while (mark < 5 || mark > 10);
	
	cin.get();

}