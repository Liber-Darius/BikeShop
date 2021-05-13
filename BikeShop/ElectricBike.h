#pragma once
#include "Bike.h"
#include <string>
using namespace std;
class ElectricBike :
    public Bike
{
 private:
     int autonomy;
     int speed;
 public:
     ElectricBike(int wheelsize, int price, string brand, int id, int autonomy, int speed );
     int getAutonomy();
     int getSpeed();
     void setAutonomy(int autonomy);
     void setSpeed(int speed);
     void displayInfo();
};

