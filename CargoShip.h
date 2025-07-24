#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include <string>
#include "Ship.h"

class CargoShip : public Ship
{
public:
    CargoShip(const std::string& name, const std::string& year, int capacity);
    void setCargoCapacity(int capacity);
    int getCargoCapacity() const;
    void print() const override;
private:
    int cargoCapacity;
};

#endif