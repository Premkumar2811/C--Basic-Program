#include <iostream>
using namespace std;
class Vehicle
{
	public:
	vehicle()
{
	cout <<"This is a Vehicle"<< endl;
}
};
	class Fare
{
	public:
	Fare()
{
	cout<<"Fare of Vehicle\n";
}
};
	class Car: public Vehicle
{
};
	class Bus: public Vehicle, public Fare
{
};
	int main()
{
	Bus obj2;
	return 0;
}
