#include "Repo.h"
#include <algorithm>
#include <vector>
void Repo::add(Bike b)
{
	bool idAlreadyExists;
	idAlreadyExists = find(this->inventory.begin(), this->inventory.end(), b.getID()) != this->inventory.end();
	if (idAlreadyExists == true)throw exception();
	else {
		this->inventory.push_back(b);
	}
}

void Repo::remove(int id)
{
	this->inventory.erase(std::remove(this->inventory.begin(), this->inventory.end(), id), this->inventory.end());
}

void Repo::cheaperThan(int price)
{
	vector<Bike> newInventory;
	for(Bike i : this->inventory)
		if (i.getPrice() < price)newInventory.push_back(i);
	
	for (Bike i : newInventory) {
		i.displayInfo();
		cout << endl;
	}
}

void Repo::wheelsizeGreaterThan(int wheelsize)
{
	vector<Bike> newInventory;
	for (Bike i : this->inventory)
		if (i.getWheelsize() > wheelsize)newInventory.push_back(i);

	for (Bike i : newInventory) {
		i.displayInfo();
		cout << endl;
	}
}
