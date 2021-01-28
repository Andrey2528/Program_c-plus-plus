/*5.	Введіть з клавіатури число в буфер програми - рядок С - стилю.Перетворіть рядок в ціле, довге ціле і дійсне.Виведіть ці числа на екран.
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char d[3];
	cout << "Input numbers: " << endl;
	cin >> d;
	cout << (int)d << endl << (long int)d << endl << d << endl;
}