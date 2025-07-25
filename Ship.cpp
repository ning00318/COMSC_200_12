#include <iostream>
#include <string>
#include "Ship.h"
using namespace std;

// Comment 2: The constructor initializes the name of ship and the year it was built.
Ship::Ship(const string& name, const string& year)
    : shipName(name), builtYear(year)
{
}

void Ship::setShipName(const string& name)
{
    shipName = name;
}

string Ship::getShipName() const
{
    return shipName;
}

void Ship::setBuiltYear(const string& year)
{
    builtYear = year;
}

string Ship::getBuiltYear() const
{
    return builtYear;
}

void Ship::print() const
{
    cout << "Name: " << getShipName() << endl;
    cout << "Year built: " << getBuiltYear() << endl;
}