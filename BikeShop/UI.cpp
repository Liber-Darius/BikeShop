#include "UI.h"
#include <iostream>
using namespace std;



Bike UI::readBike()
{
	char option;
	cout << "choose type of bike: \n";
	cout << "a. Electric bike \n";
	cout << "b. MTB \n";
	cin >> option;
	if (option == 'a')readElectric();
	else if (option == 'b')readMTB();
	else throw exception();
}

MTB UI::readMTB()
{
	int id, wheelsize, price;
	string brand, material;
	cout << "enter brand name: ";
	cin >> brand; cout << endl;
	cout << "enter price: ";
	cin >> price; cout << endl;
	cout << "enter wheelsize: ";
	cin >> wheelsize; cout << endl;
	cout << "enter material: ";
	cin >> material; cout << endl;
	bool bun = false;
	while (bun == false) {
		cout << "enter the id: ";
		cin >> id; cout << endl;
		if (this->repo.idAlreadyExists(id) == false)bun = true;
	}
	return MTB(wheelsize, price, brand, id, material);
}

ElectricBike UI::readElectric()
{
	int id, wheelsize, price, autonomy, speed;
	string brand;
	cout << "enter brand name: ";
	cin >> brand; cout << endl;
	cout << "enter price: ";
	cin >> price; cout << endl;
	cout << "enter wheelsize: ";
	cin >> wheelsize; cout << endl;
	cout << "enter autonomy: ";
	cin >> autonomy; cout << endl;
	cout << "enter the maximum speed: ";
	cin >> speed; cout << endl;
	bool bun = false;
	while (bun == false) {
		cout << "enter the id: ";
		cin >> id; cout << endl;
		if (this->repo.idAlreadyExists(id) == false)bun = true;
	}

	return ElectricBike(wheelsize, price, brand, id, autonomy, speed);
}

void UI::printAll()
{
	this->repo.justPrint();
}

void UI::printMenu()
{ 
	std::cout << "1. print all \n";
	std::cout << "2. add a bike \n";
	std::cout << "3. remove bike by id \n";
	std::cout << "4. show bikes with price lower than given value \n";
	std::cout << "5. show bikes with wheelsize greater than given value \n";
	std::cout << "6. save to file \n";


}

void UI::run()
{
	int option = -1;
	while (option != 0) {
		printMenu();
		cout << "enter option: "; cin >> option;
		cout << endl;
		if (option == 0)break;
		else if (option == 1) {
			this->contrl.justPrint();
		}
		else if (option == 2) {
			Bike b = readBike();
			this->contrl.add(b);
		}
		else if (option == 3) {
			int id;
			std::cout << "enter the id:";
			cin >> id; cout << endl;
			this->contrl.remove(id);
		}
		else if (option == 4) {
			int value;
			cout << "enter value: ";
			cin >> value; cout << endl;
			this->contrl.cheaperThan(value);
		}
		else if (option == 5) {
			int wheelsize;
			cout << "enter wheelsize:";
			cin >> wheelsize; cout << endl;
			this->contrl.wheelsizeGreaterThan(wheelsize);
		}




	}
}
