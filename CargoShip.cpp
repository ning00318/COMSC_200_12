#include <iostream>
#include <string>
#include "CargoShip.h"
using namespace std;

// Comment 9: The ship name and the year built are initialized through the Ship class constructor,
//            while the capacity of the cargo will be initialized in the CargoShip class.
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

// Comment 10: Because this class inherits from the class Ship, it can call the
//             get function from the base class to access the ship's name.
void CargoShip::print() const
{
    cout << "Name: " << getShipName() << endl;
    cout << "Cargo capacity: " << getCargoCapacity() << " tons" << endl;
}