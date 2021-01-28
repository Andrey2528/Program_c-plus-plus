//1 задача
//Жуков Андрій 14.10.2019
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, D, x1, x2;
	cout << "input 3 number" << endl;
	cin >> a >> b >> c;
	D = pow(b, 2) - 4 * a * c;
	if (D < 0) cout << "кореней нет";
	else            if (D == 0) 
	                    {x1 = -b / (2 * a);
			               cout << x1;}
				    else { x1 = (-b + sqrt(D)) / (2 * a);
				           x2 = (-b - sqrt(D)) / (2 * a);
	                        cout << x1 << "" << x2 << endl;}

	return 0;
}