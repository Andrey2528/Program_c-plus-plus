/*6.
Реалізуйте набір особистих функцій tolowerR(ch), toupperR(ch), isalphaR(ch),islowerR(ch), isupperR(ch), isalnumR(ch)
для роботи з символами російського алфавіту.*/
#include <iostream>

using namespace std;

const char starerValueOfUpper = 'А';
const char starterValueOfLower = 'а';
const char starterValueOfDigit = '0';

char toUpperR(char);
char toLowerR(char);
bool isalphaR(char);
bool islowerR(char);
bool isUpperR(char);
bool isAlNumR(char);

int main() 
{
	setlocale(LC_ALL, "RUSSIAN");

	cout << "Проверка функции toUpperR(Дано значение 'в'): " << toUpperR('в') << endl;
	cout << "Проверка функции toLowerR(Дано значение 'В'): " << toLowerR('В') << endl << endl;

	cout << "Проверка функции isalphaR(Дано значение 'Г'): " << isalphaR('Г') << endl;
	cout << "Проверка функции isalphaR(Дано значение 'Z'): " << isalphaR('Z') << endl << endl;

	cout << "Проверка функции islowerR(Дано значение 'в'): " << islowerR('в') << endl;
	cout << "Проверка функции islowerR(Дано значение 'Б'): " << islowerR('Г') << endl << endl;

	cout << "Проверка функции isUpperR(Дано значение 'О': " << isUpperR('О') << endl;
	cout << "Проверка функции isUpperR(Дано значение 'о': " << isUpperR('о') << endl << endl;

	cout << "Проверка функции isAlNumR(Дано значение '5'): " << isAlNumR('5') << endl;

	return 0;
}

char toUpperR(char ch)      //перетворення букви з малої в велику
{ 
	if (islowerR(ch))                                                                           // якщо буква маленька - повертае велику (а - 32 = А)
		return ch - 32;
	else                                                                                        // якщо буква велика - повертає її
	{  
		return ch;
	}
}

char toLowerR(char ch)     //перетворення букви з великої в малу
{
	if (isUpperR(ch))                                                                           // якщо буква велика - повертае маленьку (А + 32 = а)
		return ch + 32;
	else                                                                                        // якщо буква маленька - виводить її
	{
		return ch;
	}
}

bool isalphaR(char ch)               //Визначає англ. буква чи ні
{
	return (ch >= starerValueOfUpper && ch < starterValueOfLower + 32);                         // ch >= A( i ch < a + 32
}

bool islowerR(char ch)              //Визначає мала англ. буква чи ні
{
	return (ch >= starterValueOfLower && ch < starterValueOfLower + 32);                        // ch >= ai ch < a + 32
}

bool isUpperR(char ch)              //Визначає велика англ. буква чи ні
{
	return (ch >= starerValueOfUpper && ch <= starerValueOfUpper + 32);                         // ch >= A i ch <= A + 32
}

bool isAlNumR(char ch)              //Визначиає англ. буква, цифра чи ні
{
	return (ch >= starterValueOfDigit && ch <= starterValueOfDigit + 9) || isalphaR(ch);        // ch > 0 і ch <= 0 + 9 або визначає англ. буква чи ні
}