#include "Repo.h"
#include <algorithm>
#include <vector>
Repo::Repo()
{
	this->inventory.clear();
}
void Repo::add(Bike b)
{
	int k=0;
	bool idAlreadyExists = this->idAlreadyExists(b.getID());
	//idAlreadyExists = find(this->inventory.begin(), this->inventory.end(), b.getID()) != this->inventory.end();
	if (idAlreadyExists == true)k++;
	else {
		this->inventory.push_back(b);
	}
}

void Repo::remove(int id)
{
	//this->inventory.erase(std::remove(this->inventory.begin(), this->inventory.end(), id), this->inventory.end());
	//creez un nou array
	//bag numa ce ii bun
	//inventory devine arrayu ala
	vector<Bike> nouArray;
	for (Bike i : this->inventory)
		if (i.getID() != id)nouArray.push_back(i);
	this->inventory.clear();
	for (Bike i : nouArray)
		this->inventory.push_back(i);
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

void Repo::justPrint()
{
	for (Bike i : this->inventory) {
		i.displayInfo();
		cout << endl;
	}
}

bool Repo::idAlreadyExists(int id)
{
	for (Bike i : this->inventory)
		if (i.getID() == id)return true;
	return false;
}
