#include <iostream>
#include <string>
#include "CargoShip.h"
using namespace std;

CargoShip::CargoShip(const std::string& name, const std::string& year, int capacity)
    : Ship(name, year), cargoCapacity(capacity)
{

}

void CargoShip::setCargoCapacity(int capacity)
{
    cargoCapacity = capacity;
}

int CargoShip::getCargoCapacity() const
{
    return cargoCapacity;
}

void CargoShip::print() const
{
    cout << "Name: " << getShipName() << endl;
    cout << "Cargo capacity: " << getCargoCapacity() << " tons" << endl;
}