#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include <string>
#include "Ship.h"

// Comment 7: CargoShip class is derived from the Ship class.
class CargoShip : public Ship
{
public:
    CargoShip(const std::string& name, const std::string& year, int capacity);
    void setCargoCapacity(int capacity);
    int getCargoCapacity() const;

    // Comment 8: Since print() is a virtual function, the derived class should
    //            use the override keyword to indicate that it is overriding.
    void print() const override;
private:
    int cargoCapacity;
};

#endif