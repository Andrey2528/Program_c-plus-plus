/*
13 Що неприпустимо , а що логічно неправильно в наступному коді ? 
double color = 1; 
switch ( color ) 
{ case 1: cout << " Black \ n "; 
   case 2: cout << "White \ n "; 
   default : cout << " Other \ n "; } 
*/
#include <iostream>

using namespace std;

int main()
{
	double color = 1; // Давати назву color змінній, що зберігає значення числа за плаваючою точкою не логічно
	switch (color) { // switch як аргумент приймає значення перерахування або значення цілого типу чисел
	case 1: cout << " Black \ n "; 
	case 2: cout << " White \ n ";
	default: cout << " Other \ n ";
	}
}