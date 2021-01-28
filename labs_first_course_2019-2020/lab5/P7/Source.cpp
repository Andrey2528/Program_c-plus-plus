/*7.Оголосіть символьні масиви для зберігання елементів своєї адреси (місто, район, вулиця, будинок, квартира) і всієї адреси.
Проініціалізуйте їх символом нового рядка. Визначте значення елементів адреси , виконайте присвоєння рядків .
Сформуйте значення всієї адреси, виконати конкатенацію рядків. Визначте довжину елементів адреси і всієї адреси.
Визначте який рядок більший: місто або район, виконайте порівняння рядків.*/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//Инициализируем переменные символами нового рядка
	char myCity[255] = "Херсон ";
	char myState[255] = "Днепровский ";
	char myStreet[255] = "Университетская ";
	char myBuilding[255] = "34 ";
	char myFlat[255] = "22 ";
	char fullAddress[255] = "\n";

	//Заполняем переменную полный адрес значениями адреса
	strcat_s(fullAddress, myCity);
	strcat_s(fullAddress, myState);
	strcat_s(fullAddress, myStreet);
	strcat_s(fullAddress, myBuilding);
	strcat_s(fullAddress, myFlat);

	cout << fullAddress << endl;
	cout << "Количество символов в названии города " << strlen(myCity) << endl;
	cout << "Количество символов в названии области " << strlen(myState) << endl;
	cout << "Количество символов в названии улицы " << strlen(myStreet) << endl;
	cout << "Количество символов в адресе " << strlen(fullAddress) << endl;
	cout << "Количество символов в номере квартиры " << strlen(fullAddress) << endl;
	cout << "Количество символов в полном адресе " << strlen(fullAddress) << endl;

	int resComparing = strcmp(myCity, myState);

	if (resComparing == 1)
	{
		cout << "Значение города больше чем значение района" << endl;
	}
	else if (resComparing == 0)
	{
		cout << "Значения равны" << endl;
	}
	else {
		cout << "Значение района больше чем значение города" << endl;
	}
	return 0;
}

