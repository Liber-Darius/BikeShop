#include "Controller.h"

Controller::Controller()
{
}

void Controller::add(Bike b)
{
	this->repo.add(b);
}

void Controller::remove(int id)
{
	this->repo.remove(id);
}

Repo Controller::cheaperThan(int price)
{
	this->repo.cheaperThan(price);
}

Repo Controller::wheelsizeGreaterThan(int wheelsize)
{
	this->repo.wheelsizeGreaterThan(wheelsize);
}

Repo Controller::justPrint()
{
	this->repo.justPrint();
}
