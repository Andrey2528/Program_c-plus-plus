/*3.	Написати програму знаходження довжини найдовшої сторони трикутника з вершинами
А(х1, у1), В(х2, у2), С(х3, у3).*/
#include <iostream>
using namespace std;
int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double l1, l2, l3;
	l1 = sqrt(pow(x1, 2) + pow(y1, 2));
	l2 = sqrt(pow(x2, 2) + pow(y2, 2));
	l3 = sqrt(pow(x3, 2) + pow(y3, 2));
	if (l1 > l2&& l1 > l3)
		cout << l1;
	else if (l2 > l1&& l2 > l3)
		cout << l2;
	else cout << l3;
	return 0;
}