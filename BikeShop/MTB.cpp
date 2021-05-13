#include "MTB.h"

MTB::MTB(int wheelsize, int price, string brand, int id, string material)
{
	this->wheelsize = wheelsize;
	this->price = price;
	this->brand = brand;
	this->id = id;
	this->material = material;
}

string MTB::getMaterial()
{
	return this->material;
}

void MTB::setMaterial(string material)
{
	this->material = material;
}

void MTB::displayInfo()
{
	std::cout << "Electric Bike: " << this->brand << " of price: " << this->price << "made out of: "<< this->material << " and having the id: " << this->id;
}
