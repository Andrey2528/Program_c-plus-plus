/*12 Напишіть програму для визначення терміну служби електричної лампочки на основі її потужності, використовуючи наступну таблицю рішень.    
Потужність, Вт	Термін служби, год
25			2500
40, 60		1000
75, 100		750
150, 200	500
*/
#include <iostream>

using namespace std;

int choose_case(float mark)
{
	int mark_key = 0;
	if (mark == 25)
		mark_key = 1;
	else if (mark == 40 || mark == 60)
		mark_key = 2;
	else if (mark == 75 || mark == 100)
		mark_key = 3;
	else if (mark == 150 || mark == 200)
		mark_key = 4;
	return mark_key;
}
int main() {
	setlocale(LC_ALL, "rus");

	float mark;

	cout << "Введите мощность лампочки: ";
do{
	cin >> mark;
	switch (choose_case(mark))
		{
		case 1:
		{
			cout << "2500" << endl;
			break;
		}
		case 2:
		{
			cout << "1000 " << endl;
			break;
		}
		case 3:
		{
			cout << "750 " << endl;
			break;
		}
		case 4:
		{
			cout << "500 " << endl;
			break;
		}
		default:
		{
			cout << "Введите верное значение " << endl;
		}
	}
} while (mark < 25 || mark > 200);

	cin.get();

}