/*5.	�������� ���� ��'����, ������ � ������, � �������� � ����� (1 �. = 0.453592 ��.).
����� ����� 10.10.2019*/
#include <iostream>
using namespace std;
double f = 0.453592;
double G = 453.592;

float func(double f, double G);
int main()
{
  double m, mkg, mgr;
  setlocale(LC_ALL, "Russian");
  cout << "������� ���������� ������ - ";
  cin >> m;
  mkg = func(m, f);
  cout << "���������� ���������� " << mkg << "\n";
  mgr = func(m, G);
  cout << "���������� ������ " << mgr << "\n";
  system("pause");
  return 0;

}

float func(double m, double G)
{

  return m * G;

}