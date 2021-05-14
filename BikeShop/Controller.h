#pragma once
#include "Repo.h"
#include "Bike.h"
#include "MTB.h"
class Controller
{
protected:
	Repo repo;
public:
	Controller();
	~Controller();
	void add(Bike b);
	void remove(int id);
	Repo cheaperThan(int price);
	Repo wheelsizeGreaterThan(int wheelsize);
	Repo justPrint();


};

