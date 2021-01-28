/*5.	Обчисліть вагу об'єкта, задану в фунтах, в кілограми і грами (1 ф. = 0.453592 кг.).
Жуков Андрій 10.10.2019*/
#include <iostream>
using namespace std;
double f = 0.453592;
double G = 453.592;

float func(double f, double G);
int main()
{
  double m, mkg, mgr;
  setlocale(LC_ALL, "Russian");
  cout << "Введите количество фунтов - ";
  cin >> m;
  mkg = func(m, f);
  cout << "Количество килограмов " << mkg << "\n";
  mgr = func(m, G);
  cout << "Количество грамов " << mgr << "\n";
  system("pause");
  return 0;

}

float func(double m, double G)
{

  return m * G;

}