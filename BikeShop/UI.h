#pragma once
#include "Bike.h"
#include "MTB.h"
#include "ElectricBike.h"
#include <vector>
#include "Repo.h"
#include "Controller.h"
class UI
{
protected:
	Repo repo;
	Controller contrl;
public:
	Bike readBike();
	MTB readMTB();
	ElectricBike readElectric();
	void printAll();
	void printMenu();
	void run();
};

