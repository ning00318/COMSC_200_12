#include <iostream>
#include <string>
#include "CruiseShip.h"
using namespace std;

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

void CruiseShip::print() const
{
    cout << "Name: " << getShipName() << endl;
    cout << "Maximum passengers: " << getMaxPassenger() << endl;
}