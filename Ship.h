#ifndef SHIP_H
#define SHIP_H
#include <string>

class Ship
{
public:
    Ship(const std::string& name, const std::string& year);
    void setShipName(const std::string& name);
    std::string getShipName() const;
    void setBuiltYear(const std::string& year);
    std::string getBuiltYear() const;
    virtual void print() const;
private:
    std::string shipName;
    std::string builtYear;
};

#endif