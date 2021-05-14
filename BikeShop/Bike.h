#pragma once
#include <string>
#include <iostream>
using namespace std;
class Bike
{
protected:
	int wheelsize;
	int price;
	string brand;
	int id;
public:
	Bike(int wheelsize, int price, string brand, int id);
	Bike();
	Bike(const Bike& other);
	Bike& operator=(const Bike& other); 
	virtual ~Bike(); 
	int getPrice() const;
	void setPrice(int price);
	void setWheelsize(int wheelsize);
	int getWheelsize() const;
	void setBrand(string brand);
	string getBrand() const;
	void setID(int id);
	int getID();
	virtual void displayInfo();

};

