#include "Bike.h"
#include <string>
using namespace std;

Bike::Bike(int wheelsize, int price, string brand, int id)
{
    this->wheelsize = wheelsize;
    this->price = price;
    this->brand = brand;
    this->id = id;
}

Bike::Bike()
{
    this->price = 0;
    this->wheelsize = 24;
    this->brand = "None";

}

int Bike::getPrice() const
{
    return this->price;
}

void Bike::setPrice(int price)
{
    this->price = price;
}

void Bike::setWheelsize(int wheelsize)
{
    this->wheelsize = wheelsize;
}

int Bike::getWheelsize() const
{
    return this->wheelsize;
}

void Bike::setBrand(string brand)
{
    this->brand = brand;
}

string Bike::getBrand() const
{
    return this->brand;
}

void Bike::setID(int id) 
{
    this->id = id;
}

int Bike::getID()
{
    return this->id;
}

void Bike::displayInfo()
{
    std::cout << "Bike: "<< this->brand << " of price: " << this->price << " with the wheelsize of: " << this->wheelsize << " and having the id: " << this->id;


}




