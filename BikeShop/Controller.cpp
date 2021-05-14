#include "Controller.h"

Controller::Controller()
{
}

Controller::~Controller()
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

void Controller::cheaperThan(int price)
{
	this->repo.cheaperThan(price);
}

void Controller::wheelsizeGreaterThan(int wheelsize)
{
	this->repo.wheelsizeGreaterThan(wheelsize);
}

void Controller::justPrint()
{
	this->repo.justPrint();
}
