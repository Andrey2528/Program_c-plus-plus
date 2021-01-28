/*6.	якщо середн€ частота удар≥в серц€ людини 1 в секунду, ск≥льки удар≥в серце зробить за 78 рок≥в ? («а n рок≥в ? ).
∆уков јндр≥й 10.10.2019*/
#include <iostream>
using namespace std;
unsigned int years = 1;           //год который получаем
unsigned int hours = 1;
unsigned int minutes = 1;
unsigned int day = 1;
unsigned int second = 1;
unsigned int b;
unsigned long int y = 1; //количество ударов
unsigned int years1;    //год который мы вводим

unsigned long int func(int years);
int main()
{
	setlocale (LC_ALL, "Russian");
	cout << "¬ведите количество лет - ";
    cin >> years;
	b = func(years);
	cout << " оличество ударов сердца = " << b << " за " << years << "лет." << endl;
	system("pause");
}

unsigned long int func(int years)
{
	int vusok_days = years / 4;                   //чтобы      добавить дополнительные кол-во дней от высокосный годов

	unsigned long int days = (365 * years) + vusok_days;
	unsigned long int hours = days * 24;
	unsigned long int min = hours * 60;
	unsigned long int sec = min * 60;

	return  sec * y;                              // y - потому что средн€€ кол-во ударов в сек

}