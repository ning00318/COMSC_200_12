#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include <string>
#include "Ship.h"

// Comment 3: CruiseShip class is derived from the Ship class.
class CruiseShip : public Ship
{
public:
    CruiseShip(const std::string& name, const std::string& year, int passenger);
    void setMaxPassenger(int passenger);
    int getMaxPassenger() const;

    // Comment 4: Because print() is a virtual function in the base class, the derived class
    //            should use the override keyword to indicate that it is overriding.
    void print() const override;
private:
    int maxPassenger;
};

#endif