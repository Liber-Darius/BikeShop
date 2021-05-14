#pragma once
#include "Bike.h"
#include <vector>
class Repo
{
public:
	vector <Bike> inventory;
	Repo();
	void add(Bike b);
	void _load();
	void _save();
	void remove(int id);
	void cheaperThan(int price);
	void wheelsizeGreaterThan(int wheelsize);
	void justPrint();
	bool idAlreadyExists(int id);

};

