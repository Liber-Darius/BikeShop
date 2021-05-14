#pragma once
#include "Bike.h"
#include <vector>
class Repo
{
protected:
	vector <Bike> inventory;
public:
	void add(Bike b);
	void _load();
	void _save();
	void remove(int id);
	void cheaperThan(int price);
	void wheelsizeGreaterThan(int wheelsize);
	void justPrint();

};

