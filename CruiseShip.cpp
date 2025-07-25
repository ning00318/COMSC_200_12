#include <iostream>
#include <string>
#include "CruiseShip.h"
using namespace std;

// Comment 5: The ship name and the year built are initialized through the Ship class constructor,
//            and the max passengers will be initialized in the CruiseShip class constructor.
CruiseShip::CruiseShip(const string& name, const string& year, int passenger)
    : Ship(name, year), maxPassenger(passenger)
{
}

void CruiseShip::setMaxPassenger(int passenger)
{
    maxPassenger = passenger;
}

int CruiseShip::getMaxPassenger() const
{
    return maxPassenger;
}

// Comment 6: Because this class inherits from the Ship class, it can call the
//            get function from the base class to access the ship's name.
void CruiseShip::print() const
{
    cout << "Name: " << getShipName() << endl;
    cout << "Maximum passengers: " << getMaxPassenger() << endl;
}