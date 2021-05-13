#include "ElectricBike.h"
#include <string>
using namespace std;

ElectricBike::ElectricBike(int wheelsize, int price, string brand, int id, int autonomy, int speed)
{
	this->wheelsize = wheelsize;
	this->price = price;
	this->brand = brand;
	this->id = id;
	this->autonomy = autonomy;
	this->speed = speed;
}

int ElectricBike::getAutonomy()
{
	return this->autonomy;
}

int ElectricBike::getSpeed()
{
	return this->speed;
}

void ElectricBike::setAutonomy(int autonomy)
{
	this->autonomy = autonomy;
}

void ElectricBike::setSpeed(int speed)
{
	this->speed = speed;
}

void ElectricBike::displayInfo()
{
	std::cout << "Electric Bike: " << this->brand << " of price: " << this->price << " with the wheelsize of: " << this->wheelsize <<", autonomy of "<< this->autonomy << " kilometres" << ", maxixum speed of "<< this->speed << " km/h and having the id: " << this->id;
}
