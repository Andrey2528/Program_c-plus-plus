/*2.	�������� ���������� ��� B747, ���� � �������� �� ����� JetPlane ?
*/
#include <iostream>
using namespace std;

class Rocket
{

};

class AirPlane
{

};

class JetPlane : public Rocket, public AirPlane
{

};

class B747 : JetPlane
{

};

int main()
{
	return 0;
}