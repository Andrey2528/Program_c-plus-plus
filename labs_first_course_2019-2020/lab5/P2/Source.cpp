//2 задача
//Жуков Андрій 14.10.2019
#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	double a, b, c, n, n1;
	cin >> a >> b >> n;
	n1 = (n * M_PI) / 180;
	c = sqrt(pow(a, 2) + pow(b, 2)) - (2 * a) * (b * cos(n1));
	cout << c;
	system("pause");
	return 0;
}