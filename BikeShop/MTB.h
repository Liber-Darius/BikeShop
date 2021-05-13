#pragma once
#include "Bike.h"
#include <string>
using namespace std;
class MTB :
    public Bike
{
 protected:
     string material;
 public:
     MTB(int wheelsize, int price, string brand, int id, string material);
     string getMaterial();
     void setMaterial(string material);
     void displayInfo();

};

