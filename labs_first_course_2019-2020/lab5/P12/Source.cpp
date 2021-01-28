/*12.	Напишіть драйвер ( main - фукцией ) для перевірки функції п.4.*/
#include <iostream>
#include <cstdlib>
#include <ctime>         //содержит time()
using namespace std;

int max(int e, int v);
int main()
{
	int a, b, c, m;

	srand(time(NULL));

	a = rand();
	b = rand();
	c = rand();
	cout << a << endl << b << endl << c << endl;
	m = max(max(a, b), c);
	cout << "Max = " << m << endl;
	system("pause");
	return 0;
}

int max(int e, int v)
{
	int maxx;
	maxx = e;
	if (v > e)
	{
		maxx = v;
	}
	return maxx;
}