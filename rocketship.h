#ifndef ROCKETSHIP_H
#define ROCKETSHIP_H
#include <string>
#include <sstream>
#include <vector>
using std::string;
using std::stringstream;
using std::vector;

class RocketShip {
  public:
    RocketShip();
    RocketShip(string newName, unsigned int newFuel);

    void setName(string newName);
    string getName() const;

    void setFuel(unsigned int amount);
    unsigned int getFuel() const;

    void addFuelCell(unsigned int fuelAmount);
    bool removeFuelCell(unsigned int cellNumber);
    bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
    string burnFuel(unsigned int cellNumber);
  protected:
    string name;
    unsigned int fuel;
    vector<unsigned int> fuelCells;
};

#include "rocketship.cpp"
#endif
