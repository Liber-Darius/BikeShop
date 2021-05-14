#include "UI.h"
#include <iostream>
using namespace std;

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
	cout << "enter the id: ";
	cin >> id; cout << endl;

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
	cout << "enter the id: ";
	cin >> id; cout << endl;

	return ElectricBike(wheelsize, price, brand, id, autonomy, speed);
}

void UI::printAll()
{
	this->repo.justPrint();
}

void UI::printMenu()
{ 
	std::cout << "1. print all \n";
	std::cout << "2. add electric bike \n";
	std::cout << "3. add MTB bike \n";
	std::cout << "4. remove bike by id \n";
	std::cout << "5. show bikes with price lower than given value \n";
	std::cout << "6. show bikes with wheelsize greater than given value \n";


}
