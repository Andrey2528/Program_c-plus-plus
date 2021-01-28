/*3.	Напишіть програму, яка запитує у користувача декартові координати двох точок 
(x 1, y 1) і(x 2, y 2) з клавіатур і, яка обчислює і друкує відстань між ними за такою формулою :
Жуков Андрій 14.10.2019*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, distance;
	cout << "Веведите (х1, у1) и (х2, у2) \n" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << "Растояние между точками: " << distance << endl;
}