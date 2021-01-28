/*1.	Напишіть оголошення класу JetPlane,
який успадковується від Rocket і AirPlane ?
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

int main()
{
	return 0;
}