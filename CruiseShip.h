#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include <string>
#include "Ship.h"

class CruiseShip : public Ship
{
public:
    CruiseShip(const std::string& name, const std::string& year, int passenger);
    void setMaxPassenger(int passenger);
    int getMaxPassenger() const;
    void print() const override;
private:
    int maxPassenger;
};

#endif