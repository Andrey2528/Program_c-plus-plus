//11.	Роздрукуйте на екрані значення основних математичних констант, оголошених в бібліотеці math.h.
//Жуков Андрій 30.09.2019

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main()
{
	cout << "e = " << M_E << endl;
	cout << "log2(e) = " << M_LOG2E << endl;
	cout << "log10(e) = " << M_LOG10E << endl;
	cout << "In(2) = " << M_LN2 << endl;
	cout << "In(10) = " << M_LN10 << endl;
	cout << "pi = " << M_PI << endl;
	cout << "pi/2 = " << M_PI_2 << endl;
	cout << "pi/4" << M_PI_4 << endl;
	cout << "1/pi" << M_1_PI << endl;
	cout << "2/pi" << M_2_PI << endl;
	cout << "2/sqrt(pi) = " << M_2_SQRTPI << endl;
	cout << "sqrt(2) = " << M_SQRT2 << endl;
	cout << "1/sqrt(2)" << M_SQRT1_2 << endl;
	return 0;


}