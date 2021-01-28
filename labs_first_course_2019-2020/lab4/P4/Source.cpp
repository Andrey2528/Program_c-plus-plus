/*4.	Переведіть температуру з градусів за Фаренгейтом в градуси за Цельсієм 
(Формула для перекладу : Ц = 5 / 9 (Ф - 32)).
Жуков Андрій 10.10.2019*/
#include <iostream>
using namespace std;
float a, F, d = 9, w = 5;

float func(float a);
int main()
{
	setlocale(LC_ALL, "russian");
	float C;
	cout << "Введите градусы в Фаренгейте - \n" << endl;
	cin >> F;
	C = func(a);
	cout << "Градусы в Цельсие - " << C << "\n" << endl;
	system("pause");
}
float func(float a)
{
	return (w / d) * (F - 32);
}

