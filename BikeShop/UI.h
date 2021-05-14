#pragma once
#include "Bike.h"
#include "MTB.h"
#include "ElectricBike.h"
#include <vector>
#include "Repo.h"
class UI
{
protected:
	Repo repo;
public:
	Bike readBike();
	MTB readMTB();
	ElectricBike readElectric();
	void printAll();
	void printMenu();
	void run();
};

