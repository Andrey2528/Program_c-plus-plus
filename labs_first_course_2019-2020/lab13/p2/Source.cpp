/*2.	Напишіть оголошення для B747, який є похідним від класу JetPlane ?
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